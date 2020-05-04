
screen.elf:     file format elf32-bigmips


Disassembly of section .text:

00400000 <start>:
  400000:	3c1d7fff 	lui	sp,0x7fff
  400004:	37bdfffc 	ori	sp,sp,0xfffc
  400008:	0c100004 	jal	400010 <main>
  40000c:	08100003 	j	40000c <start+0xc>

00400010 <main>:
  400010:	27bdffe8 	addiu	sp,sp,-24
  400014:	24070200 	li	a3,512
  400018:	24060100 	li	a2,256
  40001c:	24050005 	li	a1,5
  400020:	2404000a 	li	a0,10
  400024:	afbf0014 	sw	ra,20(sp)
  400028:	0c10000e 	jal	400038 <put>
  40002c:	8fbf0014 	lw	ra,20(sp)
  400030:	27bd0018 	addiu	sp,sp,24
  400034:	03e00008 	jr	ra

00400038 <put>:
  400038:	00041080 	sll	v0,a0,0x2
  40003c:	00441021 	addu	v0,v0,a0
  400040:	00073900 	sll	a3,a3,0x4
  400044:	00021100 	sll	v0,v0,0x4
  400048:	00e63825 	or	a3,a3,a2
  40004c:	00451021 	addu	v0,v0,a1
  400050:	30e7ffff 	andi	a3,a3,0xffff
  400054:	00021040 	sll	v0,v0,0x1
  400058:	3c050001 	lui	a1,0x1
  40005c:	00073a00 	sll	a3,a3,0x8
  400060:	00a21021 	addu	v0,a1,v0
  400064:	34e70068 	ori	a3,a3,0x68
  400068:	a447b800 	sh	a3,-18432(v0)
  40006c:	03e00008 	jr	ra

00400070 <clear_screen>:
  400070:	03e00008 	jr	ra

Disassembly of section .gnu.attributes:

00000000 <.gnu.attributes>:
   0:	41000000 	bc0f	4 <_gp+0x4>
   4:	0f676e75 	jal	d9db9d4 <clear_screen+0xd5db964>
   8:	00010000 	sll	zero,at,0x0
   c:	00070401 	0x70401
