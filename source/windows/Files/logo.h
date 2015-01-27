//---------------------------------------------------------------------------
#ifndef logoH
#define logoH
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TLogoForm : public TForm
{
__published:	// IDE-managed Components
  TImage *Image1;
  TTimer *Timer1;
  void __fastcall Timer1Timer(TObject *Sender);
  void __fastcall FormPaint(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TLogoForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern TLogoForm *LogoForm;
//---------------------------------------------------------------------------
#endif