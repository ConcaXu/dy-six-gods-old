import logging
import traceback
import inspect

from unicorn import *
from unicorn.arm_const import *
from unicorn.arm64_const import *

import sys

logger = logging.getLogger(__name__)


class InterruptHandler:

    """
    :type mu Uc
    """
    def __init__(self, mu):
        self._mu = mu
        self._mu.hook_add(UC_HOOK_INTR, self._hook_interrupt)
        self._handlers = dict()

    def _hook_interrupt(self, uc, intno, data):
        try:
            if intno in self._handlers:
                self._handlers[intno](uc)
            else:
                pc = 0
                arch = self._mu.query(UC_QUERY_ARCH)
                if arch == UC_ARCH_ARM:
                    pc = self._mu.reg_read(UC_ARM_REG_PC)
                elif arch == UC_ARCH_ARM64:
                    pc = self._mu.reg_read(UC_ARM64_REG_PC)
                #
                traceback.print_stack()
                frame = inspect.currentframe()
                stack_trace = traceback.format_stack(frame)
                self._mu.emu_stop()
                sys.exit(-1)
        except Exception as e:
            sys.exit(-1)
        #
    #

    def set_handler(self, intno, handler):
        self._handlers[intno] = handler
