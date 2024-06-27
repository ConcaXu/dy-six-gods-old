from flask import Flask

from app.sign import sign


app = Flask(__name__)
app.register_blueprint(sign, url_prefix='/api')
# 项目主程序
if __name__ == '__main__':
    app.run('0.0.0.0', port=8899)


