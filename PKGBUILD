pkgname=dwmblocks-async
pkgver=1.0
pkgrel=16
pkgdesc="A dwm status bar that has a modular, async design, so it is always responsive"
url="https://github.com/UtkarshVerma/dwmblocks-async"
arch=('i686' 'x86_64')
license=('ISC')
makedepends=(make)
depends=('xorg-xbacklight')
provides=(dwmblocks)
conflicts=(dwmblocks dwmblocks-async)

prepare() {
  cd ..
  make clean
}

package() {
  cd ..
  make PREFIX=/usr DESTDIR="$pkgdir" install
  install -m644 -D LICENSE "$pkgdir/usr/share/licenses/$pkgname"/LICENSE
  install -m644 -D README.md "$pkgdir/usr/share/doc/$pkgname"/README.md
}
