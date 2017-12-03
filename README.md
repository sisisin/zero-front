# フロントエンド始めよう



# 想定読者

- プログラミングやったことある人
- Webフロントエンドあんまりガッチリやったことない人
- （うちの会社に入ってくる人）

# この本を読み終わったときにこうなっていて欲しい的な目標

- フロントエンドで今主流な考え方・開発手法にどんなものがあるかを知ってもらう
  - JavaScriptという言語の成り立ち
    - 言語仕様？
  - また、その前提に立って生まれた考え方（bunlderで依存解決するとか、事前compileによるAltJS云々とか
  - SPAというものがあってだな・・・
  - その前にはサーバーサイドでHTML組み立てて画面を構築するというのが主流だったとかな
- 実際にブラウザでどんなAPI使って画面の動きを実現してるのかを簡単に触ってもらいたい
  - addEventListenerとかrequestAnimationFrameとか？
  - document.createElementとかappendChildとかで画面の要素触れるとか
  - `new XMLHttpRequest()`でブラウザからサーバーへ通信するとか
- その上でSPAなんかを実現するためにどんな技術があるか
  - Node.jsそのもの
  - Node.js系のツールチェイン
  - viewライブラリ系の話（Angularとかやるか？？？）

# 目次案

- フロントエンドってなんなん？
  - Webブラウザを中心とした技術領域
  - JavaScriptってなんなん？
- じゃあ手を動かしてみよう
  - Chromeの開発者ツール
  - 環境構築・・・
  - TypeScript？？？
- ブラウザ上で試しにモノを動かしてみる
  - twitterみたいなのを題材にして、例えばユーザーのつぶやきを取ってきて画面に表示する、的なのを1個作る
    - 最初はローレベルのAPI使って作ってもらって、後からSPAの技術（angular-cliあたりが候補）で同じことをやってもらうとか？
- Node.js系の話をする
  - package.jsonなんなのとかをある程度説明できればいいかな
  - ココまで使ってきたtscが何なのかをココで説明する
