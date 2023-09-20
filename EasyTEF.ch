/*
    CLASS EasyTEF
    Por: Lailton Fernando Mariano
	 Comunicação com EasyTEF.DLL
	 www.redstarsoft.com.br / lailton@redstarsoft.com.br
                                                           */
#define BR           Chr(13) + Chr(10)
#define True                       .t.
#define False                      .f.

#define  ttNone                      0        
#define  ttGpAtivo                   1         
#define  ttAdministrativa            2        
#define  ttCheque                    3        
#define  ttCartao                    4        
#define  ttCancelamento              5        
#define  ttConfirmacao               6        
#define  ttNaoConfirmacao            7         
#define  ttPreAutorizacaoCC          8        
#define  ttContasVisanet             9        
#define  ttEncargosBanrisul         10        
#define  ttCorrespBancario          11        
#define  ttFarmEPharma              12        
#define  ttFarmInfoCard             13        
#define  ttFarmVidaLink             14        
#define  ttEMS                      15        
#define  ttPrePagoBonus             16        
#define  ttRecargaCelular           17        
#define  ttShellCard                18        
#define  ttTrnCentre                19        
#define  ttPrevSaude                20        
#define  ttACSP                     21        
#define  ttCSR10                    22        
#define  ttTrilhaCartaoProprietario 23        
#define  ttSiTefAtivo               24        
#define  ttPagamentos               25

#define  tgGerenciadorPadrao         0        
#define  tgPayGo                     1        
#define  tgTecBan                    2        
#define  tgHipercard                 3        
#define  tgBanrisul                  4        

#define  tmeAbrirComprovanteNaoFiscalVinculado           0        
#define  tmeEfetuarFormaPagamento                        1        
#define  tmeEfetuarFormaPagamentoDescricaoForma          2        
#define  tmeEncerrarCupomFiscal                          3        
#define  tmeFecharComprovanteNaoFiscalVinculado          4        
#define  tmeFecharRelatorioGerencial                     5        
#define  tmeImpressoraTemPapel                           6        
#define  tmeImprimirRelatorioGerencial                   7        
#define  tmeIniciarFechamentoCupomFiscal                 8        
#define  tmeTerminarCancelamentoMultiplosCartoes         9        
#define  tmeTerminarFechamentoCupom                     10        
#define  tmeUsarComprovanteNaoFiscalVinculado           11        
#define  tmeSubTotalizarCupom                           12        
#define  tmeValorPersonalizadoReq                       13        
#define  tmeGuilhotinar2aViaCupomTEF                    14        
#define  tmeImprimirLeituraX                            15        