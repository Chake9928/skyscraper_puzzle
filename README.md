# skyscraper_puzzle

skyscraper_puzzle（日本ではビルディング問題）を解くプログラムです。バックトラック法を採用しており、理論上n\*n盤面まで対応しています。  
（本プログラムは7\*7以降はかなり時間がかかる。）　　　
（参考）https://jp.calcblocks.com/%E3%83%93%E3%83%AB%E3%83%87%E3%82%A3%E3%83%B3%E3%82%B0%E3%83%91%E3%82%BA%E3%83%AB%E3%81%AE%E3%83%AB%E3%83%BC%E3%83%AB%E3%81%A8%E8%A7%A3%E3%81%8D%E6%96%B9/#/　　    
これは42tokyoの入学試験のプロジェクトの1つで、高い評価を得ることができました。  
入学試験の内容を公開することは禁じられているため、コードや制作物の内容に関しては、本試験で提出したものと一部異なります。  
制作期間は2日（約20時間）です。　　

（実行方法）.  
makeで実行ファイル「solve_skyscraper」が生成されます。  
引数に以下の例のフォーマットで条件を渡してください。  

（例）.  
『./solve_skyscraper "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"』.  
（実行結果）.   
1 2 3 4.  
2 3 4 1.  
3 4 1 2.  
4 1 2 3.  
