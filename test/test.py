import http
import time

import requests
from requests.adapters import HTTPAdapter
from urllib3 import Retry

from main import send_request_and_get_json

url = "https://api5-normal-lf.amemv.com/aweme/v2/comment/list/?aweme_id=7379183582629088553&cursor=0&count=13&insert_ids&address_book_access=2&gps_access=2&forward_page_type=1&channel_id=0&city=440300&hotsoon_filtered_count=0&hotsoon_has_more=0&follower_count=0&is_familiar=0&page_source=0&is_fold_list=false&user_avatar_shrink=64_64&aweme_author=MS4wLjABAAAAv82_CKOm8eERxrkhzOY9GoMym9Oc0e7IoHf_FJWTq04&item_type=0&comment_aggregation=0&top_query_word&is_preload=0&authentication_token=MS4wLjAAAAAAYW3jo8mdGRshnKSS9OS6SKIGXZ7h8AbH8wEYfb3Rox4xm6_--bxegriqzdF39yhDDBCWKady1hg5bDpObsrwDH4p_t6J3OHgwluOuGXyHmETUsFIC9gWK8yjUxGKzXP4KB39oP6zIPof4hDsKDhkIEfAyt9BFAvUWlOG2PnTjBkrUzq_Fuj27LPh5SSQ9HkDDGjyg-WhMk1v6tr3Dsha2befpbljg2b8NUQMEldicg6tzK4FOef93VnQjWVx7MpM&use_url_optimize=1&current_l1_comment_count=0&service_id=0&group_id=0&comment_scene=0&hotspot_id&comment_count=2812&medium_shrink=279_374&use_light_optimize=1&friend_interaction=0&klink_egdi=AALF2b7Dw23sfH2%2BM5%2Bdsf%2FZ2SQ8zKqZQUWivSGQuwVUoeI1XRMuS7v7&iid=3771769074523763&device_id=3934486212658676&ac=wifi&channel=douyin-huidu-gw-huidu-3040&aid=1128&app_name=aweme&version_code=300400&version_name=30.4.0&device_platform=android&os=android&ssmix=a&device_type=MI+9&device_brand=Xiaomi&language=zh&os_api=28&os_version=9&manifest_version_code=300400&resolution=540*960&dpi=240&update_version_code=30400200&_rticket=1719075205640&first_launch_timestamp=1702469591&last_deeplink_update_version_code=27809900&cpu_support64=true&host_abi=arm64-v8a&is_guest_mode=0&app_type=normal&minor_status=0&appTheme=light&is_preinstall=0&need_personal_recommend=1&is_android_pad=0&is_android_fold=0&ts=1719075206&cdid=791c50e6-1ef9-439a-9ed6-b7e39f5c53e9&net_lvl=-2&net_weak=1"

cookie = "passport_csrf_token=fd8ab56beba230dc17a7fcc55f2650ad; passport_csrf_token_default=fd8ab56beba230dc17a7fcc55f2650ad; odin_tt=43cc2fc6d3eaf68f4779a20cc822bc87fcaa45be0e175eded2738c5ce290af0f744bbf458bd50788b58441be856aeeffa96dca84c65aad819fb489a1fe29811b20f7b1ce2ddec6d90a9a5619a17d1566"  # 不变
x_tt_dt = "AAAZBH6SGJYGLGCC3X4AXTVWAI4AS37JKK5GW2HZTU5JYPQYTNUKP63CMZZ26VKZYACGG4UE6TFHA4HS4HY3BJ4QRJB6MKQ6QTDTOVZEWVOMAHXIYMGMY5VWXGLYG"  # 不变
x_tt_token = "00d31f6b941d8ed3785582bf151fabda8b0504ad24f07f1f40b8c2f3d93db9dedea741de2b2e45f66dbd30a3cff502ec773c729a3ca861c755ec6ab9692820cdb8cfc833a26d81ad4eb019e20390b3947da76ef848c4fc8836879f3d59ef49e64d988-1.0.1"  # 不变

# activity_now_client = "1719075207357"  # 2024-06-21 12:53:16
# x_ss_req_ticket = "1719075205642"  # 2024-06-21 12:53:16
current_timestamp = int(time.time() * 1000)
activity_now_client = str(current_timestamp)
x_ss_req_ticket = str(current_timestamp - 50)  # 50毫秒的差异

x_ss_stub = "1CBA238FF23A89CAA3CAA0D8EEB026F0"

XArgus = "eDZTYHxjDxT7OYGXx2qGNwuwSr44jgXDMeKg31/QwxC0VSiLHwU49seIQNvo1QjURy3PNYvdEA8LJ5Y0HKSq0VdHo31jJ0bw/ebwqUoCH1fgtGMheUyE3vPif/P/i8qG3A3ThwYcZ/1eiPozgfUJSyF2NV7vk407h3Lf9wE9Fgw3JztD7LaeOTG9ryuIXeWHt2ePiVFl8yoej24Jco/Z54DpaqN3qpiBDZnF/1Ryx+77hhh06uzfPsjkTdEKOG+1flOxsBoK4XPe/T52NR8rB/vl1ZJFg9I1GwGFyjcw58sOo7Nd/A1FjfaFOJR3T7GePyP5caFUmhnQOeckJ5e28q5V"
XGorgon = "8404e0cf40010beea94107bac2f653888b356745d1bd4d6f5a72"
XHelios = "76LNDVJJ0dWFsjur6gfdTcasCgju50FWbOlFY6D2NWrCOYmt"
XKhronos = "1719070885"
XLadon = "CBPScKJcmia/fj8CgBKOCthPOUJD9Zgp75Yux/KIU+xEYCDY"
XMedusa = "pvB2ZlIYKZxyJ6pdc9q+FvI/F36lJgABHTUHqCJNAZCDOLrkMK+v492z63IS7rrgDHTuGf4+8+BzDKk2PCIPRfETozGCV9trVz8xH1Jovgn2X577LvSQn762I/FQJbQ51AqzRRFy0sn723zRKk8Z/4q8yzm4x9DLagz54O/a1WG/85UZxnuJSxQeQCwpg0MmjDOMQbvq6hjNJl3fwzEMa73ZOrRfqvssJqknseNbLUoOawQOiNObv39oBN7QC3kkNIVkIXVApSE2HdPC8F/d7ZkIsFjNz0YoSGatjgFbjJA81DIJK0HnMLlkJyXtP9KS47JoMMcnWVGLthTegugFpLSp1C1XhUqKEmwY9z60lMs8gLTgq2qfm7kpbZHth44HooyGTYzzErfuf9THp7vO14tffEUiXSr1zs1BRJgsMiC0e5oYEXUdv7cF+YfPle62+pSJkFYBK+Fwvxry8zwB6hWe5oG+zsaDE8fhQSDgvIx6HkBxn8Cf8IcsUPiNl2j6kbvLMqdXYvl7Y8IbnC2A2OrhSB+q2O+hJT1Y7a+0ZmDsqEwIxInZjrmd8iS6gtDaqvbhIYR4w/2Lj3FQ56rtei2rxnhZRMF6Xe3KhM6jCpDeyRxbDuE4TNjee5qJh92Bo9k/taMPZqBJErJG3hGRFS5D5uRbM7ZVGqi1GHlRgcXRjcFE1L4coCU1lIzGXyC6ZQRJfOU54xGu+SUYVPcfEsrZyIl6lupUPyBqloVLjLryiHq+LuaPVhUvJCTVOURnK6fY/KaUZOczn183KTwRtsuY++JmuQXxLk6Avg/lnqAZ/PL00dNQuOOjD6J0QHQeoqqbRTHBE+zIv4z9ZlDEJGX1sfLuZfFfLkiOcDX2+EUXbARKXlmhiXmYnbk/bmhUi2ghfZfp0uqBppNO9rW7IKbFJEvW86zl/ZxtPnT3Y3lPlTcrbKmLZ4xl49OdW3/9H4unsdiKXzRNb0LQFCEUMfyQWX3mC2S8q+R6uuLsR0CkCki94WfNhI7Z3L4hG05XdxvjgVDY8k7JKYnrY3NaXdUE6aoEAfzraaW9ZmsH8Uzuh3y9hBSxVpclpcUEiMZwCmt9dYzzovwnpv/8J6e/eyE="

urlPost = 'http://127.0.0.1:8899/api/sign'
paramsPost = {
    'url': url,
    'header': {
        "Cookie": cookie,
        "activity_now_client": activity_now_client,
        "x-tt-dt": x_tt_dt,
        "x-tt-multi-sids": "none",
        "sdk-version": "2",
        "x-tt-token": x_tt_token,
        "multi_login": "1",
        "passport-sdk-version": "203226",
        "x-vc-bdturing-sdk-version": "3.7.2.cn",
        "content-type": "application/x-www-form-urlencoded; charset=UTF-8",
        "user-agent": "com.ss.android.ugc.aweme/300400 (Linux; U; Android 9; zh_CN; MI 9; Build/PQ3B.190801.12041624;tt-ok/3.12.13.4-tiktok)"
    },
}
headersPost = {
    "Content-Type": "application/json"
}

try:
    for _ in range(1):
        result = send_request_and_get_json(urlPost, paramsPost, headersPost)
    if result:
        XArgus = result.get("X-Argus")
        XGorgon = result.get("X-Gorgon")
        XHelios = result.get("X-Helios")
        XKhronos = result.get("X-Khronos")
        XLadon = result.get("X-Ladon")
        XMedusa = result.get("X-Medusa")

        headers = {
            "accept-encoding": "gzip",
            "x-tt-request-tag": "t=1;n=0",
            "x-tt-dt": x_tt_dt,
            "activity_now_client": activity_now_client,
            "x-ss-req-ticket": x_ss_req_ticket,
            "x-bd-client-key": "3c3971748e9045fe5a62835de453610324ab14ed9fff10d4bc236604b86b1e8684609486196db2930052c33d23c14e2f7ff21463cb983c77898fe100b34a3cd8",
            "x-bd-kmsv": "1",
            "sdk-version": "2",
            "x-tt-token": x_tt_token,
            "multi_login": "1",
            # "x-ss-stub": x_ss_stub,
            "passport-sdk-version": "203226",
            "x-vc-bdturing-sdk-version": "3.7.2.cn",
            "x-tt-store-region": "cn-ha",
            "x-tt-store-region-src": "uid",
            "user-agent": "com.ss.android.ugc.aweme/300400 (Linux; U; Android 9; zh_CN; MI 9; Build/PQ3B.190801.12041624;tt-ok/3.12.13.4-tiktok)",
            "x-ladon": XLadon,
            "x-khronos": XKhronos,
            "x-argus": XArgus,
            "x-gorgon": XGorgon,
            "x-helios": XHelios,
            "x-medusa": XMedusa,
            "Content-Type": "application/x-www-form-urlencoded; charset=UTF-8",
            "cookie": cookie,
        }

        print("headers", headers)
        # 设置重试策略
        retry_strategy = Retry(
            total=5,  # 重试次数
            status_forcelist=[429, 500, 502, 503, 504],
            allowed_methods=["HEAD", "GET", "OPTIONS"]
        )
        adapter = HTTPAdapter(max_retries=retry_strategy)
        http = requests.Session()
        http.mount("https://", adapter)
        http.mount("http://", adapter)
        try:
            response = http.get(url, timeout=10)  # 设置超时时间
            response.raise_for_status()
            data = response.json()
            print(data)
        except requests.exceptions.RequestException as e:
            print("Error accessing API:", e)


except requests.exceptions.RequestException as e:
    print(f"Error accessing API: {e}")
