// 이건 전처리기입니다. (건들지 마세요)
#include <string>
using namespace std;
// 전처리기 끝입니다.

// TODO: 웹후크 스패머 설정에 오신 것을 환영합니다.

/* 1. 웹후크 URL
 * 두 쌍따옴표 사이에 원하는 웹후크 URL을 넣어주세요.
 */
const string url = "https://discord.com/api/webhooks/931477774395383828/KIUORY9x1IiS_VK2evFj2WYgqlWjmf6Eh0QkZirY6IU6c9YS-7MNawNEB2M3ZFnznDU_";

/* 2. JSON 데이터
 * 웹후크로 보낼 JSON 데이터를 Escape 해서 넣어주세요.
 * 이때, Escape 하려면 JSON 데이터의 쌍따옴표들 앞에 \ 를 붙이세요.
 */
const string json = "{\"content\":\"Hello\"}";

/* 3. 주기
 * 메시지가 전송될 주기를 밀리초 단위로 넣어주세요.
 * 메시지가 몇 밀리초마다 보내질 지 정해주시면 됩니다.
 * 1초 = 1000밀리초 이며, 간단한 +, -, *, / 등의 사칙연산이 가능합니다.
 * 여기선 쌍따옴표가 없습니다!
 */
const int interval = 5000;

// 감사합니다. 설정을 완료하셨습니다.
