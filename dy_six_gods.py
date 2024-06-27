import posixpath
import os.path
from androidemu.emulator import Emulator
from androidemu.utils import memory_helpers
from androidemu.java.java_class_def import JavaClassDef
from androidemu.java.java_method_def import java_method_def
from androidemu.java.classes.string import String
from androidemu.java.classes.list import List


class ms_bd_c_k(metaclass=JavaClassDef, jvm_name='ms/bd/c/k'):
    @staticmethod
    @java_method_def(name='b', args_list=["jint", "jint", "jlong", "jstring", "jobject"],
                     signature='(IIJLjava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;', native=False)
    def b(emu, i1, i2, l, s, obj):
        if i1 == 65539:
            return String("/data/user/0/com.ss.android.ugc.aweme/files/.msdata")
        elif i1 == 16777233:
            return String("23.6.0")
        elif i1 == 33554433:
            return True
        elif i1 == 33554434:
            return True


class ms_bd_c_a0(metaclass=JavaClassDef, jvm_name='ms/bd/c/a0', jvm_super=ms_bd_c_k):
    pass


class MS(metaclass=JavaClassDef, jvm_name='com/bytedance/mobsec/metasec/ml/MS', jvm_super=ms_bd_c_a0):
    @staticmethod
    @java_method_def(name='a', signature='()V', native=False)
    def a(emu):
        pass


class java_lang_Thread(metaclass=JavaClassDef, jvm_name='java/lang/Thread'):
    @java_method_def(name="currentThread", signature='()Ljava/lang/Thread;', native=False)
    def currentThread(self):
        return java_lang_Thread()

    @java_method_def(name="getStackTrace", signature='()[Ljava/lang/StackTraceElement;', native=False)
    def getStackTrace(self, s):
        return List([])


def get_sign(s1, s2):
    g_vfs_path = "%s/vfs" % os.path.dirname(os.path.abspath(__file__))
    emulator = Emulator(
        vfs_root=posixpath.join(posixpath.dirname(__file__), g_vfs_path),
        muti_task=True
    )
    vfs_path = emulator.get_vfs_root()
    libcm = emulator.load_library("%s/system/lib/libc.so" % vfs_path)
    libml = emulator.load_library(
        "%s/data/data/com.ss.android.ugc.aweme/libmetasec_ml.so" % vfs_path, do_init=False)
    emulator.java_classloader.add_class(ms_bd_c_k)
    emulator.java_classloader.add_class(ms_bd_c_a0)
    emulator.java_classloader.add_class(MS)
    emulator.java_classloader.add_class(java_lang_Thread)
    emulator.call_symbol(libml, 'JNI_OnLoad',
                         emulator.java_vm.address_ptr, 0x00)
    s1_addr = emulator.call_symbol(libcm, 'malloc', len(s1) + 1)
    s2_addr = emulator.call_symbol(libcm, 'malloc', len(s2) + 1)
    memory_helpers.write_utf8(emulator.mu, s1_addr, s1)
    memory_helpers.write_utf8(emulator.mu, s2_addr, s2)
    result_addr = emulator.call_native(libml.base + 0x438c1, s1_addr, s2_addr)
    result = memory_helpers.read_utf8(emulator.mu, result_addr)
    del emulator
    return result
