# UE4KonashiPlugin
これは、[Konashi](http://konashi.ux-xu.com)の[UE4](https://www.unrealengine.com/what-is-unreal-engine-4)のBlueprintプラグインです。
Konashiをblueprintから制御するためのBlueprintライブラリです。
## ビルド方法
KonashiのライブラリをUE4で使えるように書き換えているので  
[tarotaroのリポジトリ](https://github.com/tarotaro)の中にある[konashi-ios-sdk](https://github.com/tarotaro/konashi-ios-sdk)を持ってきて、  
ビルドして、libKonashi.aを作っておきます。konashi-ios-sdkのディレクトリの  
なかのKonashiディレクトリにあるソースをUE4KonashiPlugin/ThirdPartyFrameworks以下に配置します。  
Objective-Cの都合で、そのままの状態でビルドするとクラッシュしてしまうため、  
UnrealBuildToolを書き換えます。UnrealEngineソースを持ってきて  
[iOSToolChain.cs](https://gist.github.com/tarotaro/121617faffa9a1b1f467)をリンクのように書き換えます  
そのあと、Setup.command、GenerateProjectFiles.commandを実行すると、  
カスタマイズされた、UnrealBuildToolができるので、  
それをUE4のバイナリがあるディレクトリにコピーしておきます。  
（もとの、UnrealBuildToolはバックアップを撮っておいたほうがいいと思います。)  
## インストール方法
自分のプロジェクトディレクトリに,Plugins以下および先程のソース群をおいて、  
プロジェクトを開けばプラグインをコンパイルしてくれて、使えるようになります。




