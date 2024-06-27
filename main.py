import requests

urlPost = 'http://127.0.0.1:8899/api/sign'

params = {
    'url': "https://api5-normal-lf.amemv.com/aweme/v1/familiar/video/visitor/list/?aweme_id=7185832924317617411&count=20&address_book_access=2&max_cursor=0&min_cursor=0&insert_uids&scene=0&client_visitor_cnt=0&play_count=496&priority_follower=true&cached_visitors=%5B%5D&need_cold_start_count=true&ignore_common_agreement=false&cf_item_type=0&need_favorite=0&favorite_time=0&klink_egdi=AALF2b7Dw23sfH2%2BM5%2Bdsf%2FZ2SQ8zKqZQUWivSGQuwVUoeI1XRMuS7v7&iid=3771769074523763&device_id=3934486212658676&ac=wifi&channel=douyin-huidu-gw-huidu-3040&aid=1128&app_name=aweme&version_code=300400&version_name=30.4.0&device_platform=android&os=android&ssmix=a&device_type=MI+9&device_brand=Xiaomi&language=zh&os_api=28&os_version=9&manifest_version_code=300400&resolution=540*960&dpi=240&update_version_code=30400200&_rticket=1719058142878&first_launch_timestamp=1702469591&last_deeplink_update_version_code=27809900&cpu_support64=true&host_abi=arm64-v8a&is_guest_mode=0&app_type=normal&minor_status=0&appTheme=light&is_preinstall=0&need_personal_recommend=1&is_android_pad=0&is_android_fold=0&ts=1719058148&cdid=791c50e6-1ef9-439a-9ed6-b7e39f5c53e9",
    'header': {
        "Cookie": "passport_csrf_token=21c3bb80a4eade71e86aa950f67cbef1; passport_csrf_token_default=21c3bb80a4eade71e86aa950f67cbef1; install_id=3771769074523763; ttreq=1$d5b45b883b0a1c8285b7355a669e28b063d32765; d_ticket=777626a968ea313de69f9dab58cb6c721e973; multi_sids=59177795260%3A64bda1ef1d5cb7e0f6296996c30c9128; odin_tt=a68ee5cc3240b97b2c40f053118774756c3e0bb0fae8f3d76ef4e9828435f398a71766f799a80e3d359cd85b7bbf68825f3be0ac145fe69bf2e0f9eeef1a36b7c541f1bf9336b3603cd21f4232590289; passport_assist_user=Cjxov0JRX3Q5q5Dy92DJY7bbUtTM18Mcilc-pWVc3YYugMRa_ZMut8WI_OB4GXDKROr7k4J6zTh3WFmXexMaSgo87TWadmD8u6S4HrAyzZIkwikBYjIUBCqUp5Fmdbfxr-fzg2Q7tjLM_Xgk21iEE2OqV9klflxgKKI9uJ2WEIDa1A0Yia_WVCABIgEDM1PwAg%3D%3D; n_mh=NiSBwB41B7hKcwZENx5-VBRTWuIz4-34IVv93eV9K5U; sid_guard=64bda1ef1d5cb7e0f6296996c30c9128%7C1719058041%7C5184000%7CWed%2C+21-Aug-2024+12%3A07%3A21+GMT; uid_tt=feaec6bb4f8b91d0bf38604f94bf6b3f; uid_tt_ss=feaec6bb4f8b91d0bf38604f94bf6b3f; sid_tt=64bda1ef1d5cb7e0f6296996c30c9128; sessionid=64bda1ef1d5cb7e0f6296996c30c9128; sessionid_ss=64bda1ef1d5cb7e0f6296996c30c9128; store-region=cn-ha; store-region-src=uid; ticket_guard_has_set_public_key=1",
        "activity_now_client": "1719058148611",
        "x-tt-dt": "AAAZBH6SGJYGLGCC3X4AXTVWAI4AS37JKK5GW2HZTU5JYPQYTNUKP63CMZZ26VKZYACGG4UE6TFHA4HS4HY3BJ4QRJB6MKQ6QTDTOVZEWVOMAHXIYMGMY5VWXGLYG",
        "x-tt-multi-sids": "none",
        "sdk-version": "2",
        "x-tt-token": "0064bda1ef1d5cb7e0f6296996c30c912805f2d5891605490b0e75d08f83df7739b89a6b9746c07338580e5b28dfb1c49b7890510e4bec097cddd1e053eb21afccb4267022c7ab5cac1f90c8b71fe900989feee240d60c1a2375f7912740d2e52aea1-1.0.1",
        "multi_login": "1",
        "passport-sdk-version": "203226",
        "x-vc-bdturing-sdk-version": "3.7.2.cn",
        "content-type": "application/x-www-form-urlencoded; charset=UTF-8",
        "user-agent": "com.ss.android.ugc.aweme/300400 (Linux; U; Android 9; zh_CN; MI 9; Build/PQ3B.190801.12041624;tt-ok/3.12.13.4-tiktok)"
    },
}
# 定义请求的URL
headers = {
    "Content-Type": "application/json"
}


# 发送GET请求
# response = requests.post(urlPost, json=params, headers=headers)
#
# print(response.text)


def send_request_and_get_json(url, params, headers):
    try:
        response = requests.post(url, json=params, headers=headers)
        response.raise_for_status()  # Raise an exception for bad status codes
        return response.json()  # Return JSON response
    except requests.exceptions.RequestException as e:
        print(f"Request error: {e}")
        return None


result = send_request_and_get_json(urlPost, params, headers)
if result:
    print(result)
    XArgus = result.get("X-Argus")
    XGorgon = result.get("X-Gorgon")
    XHelios = result.get("X-Helios")
    XKhronos = result.get("X-Khronos")
    XLadon = result.get("X-Ladon")
    XMedusa = result.get("X-Medusa")
else:
    print("Request failed or returned empty response.")
