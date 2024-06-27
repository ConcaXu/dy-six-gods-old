import traceback

from flask import Blueprint, json
from flask import request, jsonify

from dy_six_gods import get_sign

sign = Blueprint('api', __name__)
import json


@sign.route('/sign', methods=['POST'])
def douyin_six():
    try:
        data = request.json
        url = data.get("url")
        header = data.get("header")

        s2 = ''
        print('url', url)
        print('header', header)
        for k, v in header.items():
            s2 = s2 + k + "\r\n"
            s2 = s2 + v + "\r\n"

        sign = get_sign(url, s2)
        sign = sign.replace('X-Argus', '{"X-Argus":"')
        sign = sign.replace('X-Gorgon', '","X-Gorgon":"')
        sign = sign.replace('X-Helios', '","X-Helios":"')
        sign = sign.replace('X-Khronos', '","X-Khronos":"')
        sign = sign.replace('X-Ladon', '","X-Ladon":"')
        sign = sign.replace('X-Medusa', '","X-Medusa":"')
        sign = sign + '"}'
        sign = sign.replace('\r\n', '')
        print("sign", json.loads(sign))
        return jsonify(json.loads(sign))

    except Exception as e:
        print("An error occurred:", e)
        traceback.print_exc()
        return jsonify({"error": str(e)}), 500
