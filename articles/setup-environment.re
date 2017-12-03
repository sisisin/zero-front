={setup-environment} 環境を作ってみよう

この章では実際にJavaScriptやTypeScriptを動かせる環境を構築してみます。

== Node.jsのセットアップ

いきなり山場です。
イマドキこいつなしでは開発できません（言い過ぎ）。
なお、本文では環境をMac前提で説明していきます。

=== Homebrewによる導入

Macを利用していればもっとも簡単な方法ですね。
次のコマンドでインストールします。

//cmd{
$ brew install node
//}

今後の解説は、執筆時点でインストールされた次のバージョンを前提として行っていきます。

 * Node.js v8.9.1
 * npm v5.5.1


==[column] Node Version Managerの導入

Node.jsはアップデートのサイクルがとても速いです。
そのため、Node.js自身のバージョンを簡単に切り替えられるようにしておくことで新しいバージョンもすぐに使えるようにしておくことはとても重要になります。

そこで、筆者のお勧めであるNode Version Manager（nvm）の導入方法を紹介します。

#@# TODO: 書く

//cmd{
$ 
//}

==[/column]

