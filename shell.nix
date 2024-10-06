{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  buildInputs = [
    pkgs.clang
    pkgs.cmake
    pkgs.lua5_3
    pkgs.xorg.libX11
    pkgs.xorg.libXext
  ];

  shellHook = ''
    export CC=clang
    export CXX=clang++
  '';
}
