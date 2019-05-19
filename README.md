# Arduino-Gamelan
<h3> Cara penggunaan </h3>
Perangkat Go Gam ini menggunakan software midi sequencer FL Studio untuk membantu mengeluarkan suara gamelan. Arduino berfungsi sebagai MIDI interface yang akan memasukan perintah MIDI ke FL Studio sesuai dengan nada yang diinginkan. Untuk memasukan input MIDI digunakan push button yang mewakili tiap nada pada gamelan. Apabila push button ditekan maka Go Gam akan mengirimkan input MIDI ke komputer sesuai dengan nada yang ditekan. Dalam rangkaian pada breadboard, push button dirangkai secara paralel dengan tegangan listrik 5V menggunakan jumper wire. Selanjutnya masing-masing push button dikoneksikan dengan masing-masing nomor digital pin pada arduino. 
Nomor pin inilah yang akan mewakili masing-masing nada gamelan pada program arduino. Selanjutnya input MIDI akan diteruskan ke Hairless dan loop MIDI sebagai penghubung perangkat serial dengan sinyal MIDI pada komputer. Hairless dan loop MIDI akan mengubah sinyal serial dari arduino menjadi sinyal MIDI dan akan meneruskannya ke FL Studio sebagai MIDI Sequencer. FL Studio sebagai MIDI sequencer diatur untuk mengeluarkan suara saron dari file suara saron yang telah direkam sebelumnya. Selanjutnya FL Studio akan menerima perintah MIDI dari hairless dan loop midi untuk kemudian mengeluarkan output suara sesuai dengan perintah yang masuk.

## semantik 
![semantik arduino](https://user-images.githubusercontent.com/38577297/57987378-b7e86300-7aaa-11e9-8798-1f87f823b287.jpg)
![semantik](https://user-images.githubusercontent.com/38577297/57987379-b880f980-7aaa-11e9-8869-288a8c25ed0b.jpg)
