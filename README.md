# UE4KonashiPlugin
これは、[Konashi](http://konashi.ux-xu.com)の[UE4](https://www.unrealengine.com/what-is-unreal-engine-4)のBlueprintプラグインで、
Konashiをblueprintから制御するためのBlueprintライブラリです。
## インストール準備
KonashiのライブラリをUE4で使えるように書き換えているので  
[tarotaroのリポジトリ](https://github.com/tarotaro)の中にある[konashi-ios-sdk](https://github.com/tarotaro/konashi-ios-sdk)を持ってきて、  
ビルドして、libKonashi.aを作っておきます。konashi-ios-sdkのディレクトリの  
なかのKonashiディレクトリにあるソースを  
UE4KonashiPlugin/Plugins/KonashiPlugin/ThirdPartyFrameworks以下に配置します。  
Objective-Cの都合で、そのままの状態でビルドするとクラッシュしてしまうため  
UnrealBuildToolを書き換える。  
UnrealEngineソースを持ってきて  
[iOSToolChain.cs](https://gist.github.com/tarotaro/121617faffa9a1b1f467)をリンクのように書き換えます。  
そのあと、Setup.command、GenerateProjectFiles.commandを実行すると、  
カスタマイズされた、UnrealBuildToolができるので  
それをUE4のバイナリがあるディレクトリにコピーする。  
（もとの、UnrealBuildToolはバックアップを撮っておいたほうがいいと思います。)  
## インストール方法
自分のプロジェクトディレクトリのPlugins以下および先程のソース群をおいて、  
プロジェクトを開けばプラグインをコンパイルしてくれて、使えるようになる。




