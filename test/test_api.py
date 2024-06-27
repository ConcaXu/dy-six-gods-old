import requests

requests.urllib3.disable_warnings()

response = requests.post(
    "https://neutral-ladybug-desired.ngrok-free.app/sign",
    json={
        "params": "klink_egdi=AALF2b7Dw23sfH2%2BM5%2Bdsf%2FZ2SQ8zKqZQUWivSGQuwVUoeI1XRMuS7v7&iid=3771769074523763&device_id=3934486212658676&ac=wifi&channel=douyin-huidu-gw-huidu-3040&aid=1128&app_name=aweme&version_code=300400&version_name=30.4.0&device_platform=android&os=android&ssmix=a&device_type=MI+9&device_brand=Xiaomi&language=zh&os_api=28&os_version=9&manifest_version_code=300400&resolution=540*960&dpi=240&update_version_code=30400200&_rticket=1719070885761&first_launch_timestamp=1702469591&last_deeplink_update_version_code=27809900&cpu_support64=true&host_abi=arm64-v8a&is_guest_mode=0&app_type=normal&minor_status=0&appTheme=light&is_preinstall=0&need_personal_recommend=1&is_android_pad=0&is_android_fold=0&ts=1719070886&cdid=791c50e6-1ef9-439a-9ed6-b7e39f5c53e9"
    },
    verify=False
)

print(response)
