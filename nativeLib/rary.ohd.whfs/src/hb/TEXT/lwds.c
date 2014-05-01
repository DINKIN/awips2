/*
** Generated by X-Designer
*/
/*
**LIBS: -lXm -lXt -lX11
*/

#include <stdlib.h>
#include <X11/Xatom.h>
#include <X11/Intrinsic.h>
#include <X11/Shell.h>

#include <Xm/Xm.h>
#include <Xm/DialogS.h>
#include <Xm/Form.h>
#include <Xm/Frame.h>
#include <Xm/Label.h>
#include <Xm/List.h>
#include <Xm/PushB.h>
#include <Xm/ScrollBar.h>
#include <Xm/Separator.h>
#include <Xm/Text.h>


Widget lwDS = (Widget) NULL;
Widget lwFM = (Widget) NULL;
Widget lwstageListLb1 = (Widget) NULL;
Widget lwstageListLb2 = (Widget) NULL;
Widget lwstageListLb3 = (Widget) NULL;
Widget lwSLB = (Widget) NULL;
Widget lwhorizSB = (Widget) NULL;
Widget lwvertSB = (Widget) NULL;
Widget lwLB = (Widget) NULL;
Widget lwinfoFrm = (Widget) NULL;
Widget lwinfoFM = (Widget) NULL;
Widget lwstgTxt = (Widget) NULL;
Widget lwdateTxt = (Widget) NULL;
Widget lwqTxt = (Widget) NULL;
Widget lwnoteLbl = (Widget) NULL;
Widget lwnoteTxt = (Widget) NULL;
Widget lwstageLbl = (Widget) NULL;
Widget lwflowLbl = (Widget) NULL;
Widget lwdateLbl = (Widget) NULL;
Widget lwinfoLbl = (Widget) NULL;
Widget lwSep1 = (Widget) NULL;
Widget lwokPB = (Widget) NULL;
Widget lwapplyPB = (Widget) NULL;
Widget lwclosePB = (Widget) NULL;
Widget lwnewPB = (Widget) NULL;
Widget lwdelPB = (Widget) NULL;



void create_lwDS (Widget parent)
{
	Widget children[11];      /* Children to manage */
	Arg al[64];                    /* Arg List */
	register int ac = 0;           /* Arg Count */
	XmString xmstrings[16];    /* temporary storage for XmStrings */

	XtSetArg(al[ac], XmNallowShellResize, TRUE); ac++;
	lwDS = XmCreateDialogShell ( parent, "lwDS", al, ac );
	ac = 0;
	XtSetArg(al[ac], XmNautoUnmanage, FALSE); ac++;
	lwFM = XmCreateForm ( lwDS, "lwFM", al, ac );
	ac = 0;
	xmstrings[0] = XmStringCreateLtoR ( "Stage", (XmStringCharSet)XmFONTLIST_DEFAULT_TAG );
	XtSetArg(al[ac], XmNlabelString, xmstrings[0]); ac++;
	lwstageListLb1 = XmCreateLabel ( lwFM, "lwstageListLb1", al, ac );
	ac = 0;
	XmStringFree ( xmstrings [ 0 ] );
	xmstrings[0] = XmStringCreateLtoR ( "Date", (XmStringCharSet)XmFONTLIST_DEFAULT_TAG );
	XtSetArg(al[ac], XmNlabelString, xmstrings[0]); ac++;
	lwstageListLb2 = XmCreateLabel ( lwFM, "lwstageListLb2", al, ac );
	ac = 0;
	XmStringFree ( xmstrings [ 0 ] );
	xmstrings[0] = XmStringCreateLtoR ( "Flow", (XmStringCharSet)XmFONTLIST_DEFAULT_TAG );
	XtSetArg(al[ac], XmNlabelString, xmstrings[0]); ac++;
	lwstageListLb3 = XmCreateLabel ( lwFM, "lwstageListLb3", al, ac );
	ac = 0;
	XmStringFree ( xmstrings [ 0 ] );
	lwLB = XmCreateScrolledList ( lwFM, "lwLB", al, ac );
	lwSLB = XtParent ( lwLB );

	XtSetArg(al[ac], XmNhorizontalScrollBar, &lwhorizSB); ac++;
	XtSetArg(al[ac], XmNverticalScrollBar, &lwvertSB); ac++;
	XtGetValues(lwSLB, al, ac );
	ac = 0;
	lwinfoFrm = XmCreateFrame ( lwFM, "lwinfoFrm", al, ac );
	lwinfoFM = XmCreateForm ( lwinfoFrm, "lwinfoFM", al, ac );
	lwstgTxt = XmCreateText ( lwinfoFM, "lwstgTxt", al, ac );
	lwdateTxt = XmCreateText ( lwinfoFM, "lwdateTxt", al, ac );
	lwqTxt = XmCreateText ( lwinfoFM, "lwqTxt", al, ac );
	lwnoteLbl = XmCreateLabel ( lwinfoFM, "lwnoteLbl", al, ac );
	lwnoteTxt = XmCreateText ( lwinfoFM, "lwnoteTxt", al, ac );
	xmstrings[0] = XmStringCreateLtoR ( "Stage:", (XmStringCharSet)XmFONTLIST_DEFAULT_TAG );
	XtSetArg(al[ac], XmNlabelString, xmstrings[0]); ac++;
	lwstageLbl = XmCreateLabel ( lwinfoFM, "lwstageLbl", al, ac );
	ac = 0;
	XmStringFree ( xmstrings [ 0 ] );
	xmstrings[0] = XmStringCreateLtoR ( "Flow:", (XmStringCharSet)XmFONTLIST_DEFAULT_TAG );
	XtSetArg(al[ac], XmNlabelString, xmstrings[0]); ac++;
	lwflowLbl = XmCreateLabel ( lwinfoFM, "lwflowLbl", al, ac );
	ac = 0;
	XmStringFree ( xmstrings [ 0 ] );
	xmstrings[0] = XmStringCreateLtoR ( "Date:", (XmStringCharSet)XmFONTLIST_DEFAULT_TAG );
	XtSetArg(al[ac], XmNlabelString, xmstrings[0]); ac++;
	lwdateLbl = XmCreateLabel ( lwinfoFM, "lwdateLbl", al, ac );
	ac = 0;
	XmStringFree ( xmstrings [ 0 ] );
	XtSetArg(al[ac], XmNchildType, XmFRAME_TITLE_CHILD); ac++;
	xmstrings[0] = XmStringCreateLtoR ( "Information", (XmStringCharSet)XmFONTLIST_DEFAULT_TAG );
	XtSetArg(al[ac], XmNlabelString, xmstrings[0]); ac++;
	lwinfoLbl = XmCreateLabel ( lwinfoFrm, "lwinfoLbl", al, ac );
	ac = 0;
	XmStringFree ( xmstrings [ 0 ] );
	lwSep1 = XmCreateSeparator ( lwFM, "lwSep1", al, ac );
	lwokPB = XmCreatePushButton ( lwFM, "lwokPB", al, ac );
	lwapplyPB = XmCreatePushButton ( lwFM, "lwapplyPB", al, ac );
	lwclosePB = XmCreatePushButton ( lwFM, "lwclosePB", al, ac );
	lwnewPB = XmCreatePushButton ( lwFM, "lwnewPB", al, ac );
	lwdelPB = XmCreatePushButton ( lwFM, "lwdelPB", al, ac );


	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNtopOffset, 9); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 12); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwstageListLb1,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNtopOffset, 8); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 405); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwstageListLb2,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNtopOffset, 9); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 208); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwstageListLb3,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNtopOffset, 37); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 10); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNrightOffset, 10); ac++;
	XtSetValues ( lwSLB,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_WIDGET); ac++;
	XtSetArg(al[ac], XmNtopOffset, 10); ac++;
	XtSetArg(al[ac], XmNtopWidget, lwSLB); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 10); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNrightOffset, 10); ac++;
	XtSetValues ( lwinfoFrm,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNbottomOffset, 60); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 0); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNrightOffset, 0); ac++;
	XtSetValues ( lwSep1,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_WIDGET); ac++;
	XtSetArg(al[ac], XmNtopOffset, 10); ac++;
	XtSetArg(al[ac], XmNtopWidget, lwSep1); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 13); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwokPB,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_WIDGET); ac++;
	XtSetArg(al[ac], XmNtopOffset, 10); ac++;
	XtSetArg(al[ac], XmNtopWidget, lwSep1); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_WIDGET); ac++;
	XtSetArg(al[ac], XmNleftOffset, 25); ac++;
	XtSetArg(al[ac], XmNleftWidget, lwokPB); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwapplyPB,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_WIDGET); ac++;
	XtSetArg(al[ac], XmNtopOffset, 10); ac++;
	XtSetArg(al[ac], XmNtopWidget, lwSep1); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_WIDGET); ac++;
	XtSetArg(al[ac], XmNleftOffset, 25); ac++;
	XtSetArg(al[ac], XmNleftWidget, lwapplyPB); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwclosePB,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_WIDGET); ac++;
	XtSetArg(al[ac], XmNtopOffset, 10); ac++;
	XtSetArg(al[ac], XmNtopWidget, lwSep1); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_WIDGET); ac++;
	XtSetArg(al[ac], XmNleftOffset, 25); ac++;
	XtSetArg(al[ac], XmNleftWidget, lwclosePB); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwnewPB,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_WIDGET); ac++;
	XtSetArg(al[ac], XmNtopOffset, 10); ac++;
	XtSetArg(al[ac], XmNtopWidget, lwSep1); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_WIDGET); ac++;
	XtSetArg(al[ac], XmNleftOffset, 25); ac++;
	XtSetArg(al[ac], XmNleftWidget, lwnewPB); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwdelPB,al, ac );
	ac = 0;
	XtManageChild(lwLB);

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNtopOffset, 34); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_OPPOSITE_FORM); ac++;
	XtSetArg(al[ac], XmNbottomOffset, -70); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 10); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_OPPOSITE_FORM); ac++;
	XtSetArg(al[ac], XmNrightOffset, -125); ac++;
	XtSetValues ( lwstgTxt,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNtopOffset, 36); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_OPPOSITE_FORM); ac++;
	XtSetArg(al[ac], XmNbottomOffset, -73); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 391); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_OPPOSITE_FORM); ac++;
	XtSetArg(al[ac], XmNrightOffset, -522); ac++;
	XtSetValues ( lwdateTxt,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNtopOffset, 36); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 188); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwqTxt,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_WIDGET); ac++;
	XtSetArg(al[ac], XmNtopOffset, 10); ac++;
	XtSetArg(al[ac], XmNtopWidget, lwstgTxt); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 10); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwnoteLbl,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNtopOffset, 107); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNbottomOffset, 10); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 10); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwnoteTxt,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNtopOffset, 8); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 10); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwstageLbl,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNtopOffset, 10); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 188); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwflowLbl,al, ac );
	ac = 0;

	XtSetArg(al[ac], XmNtopAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNtopOffset, 10); ac++;
	XtSetArg(al[ac], XmNbottomAttachment, XmATTACH_NONE); ac++;
	XtSetArg(al[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
	XtSetArg(al[ac], XmNleftOffset, 390); ac++;
	XtSetArg(al[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
	XtSetValues ( lwdateLbl,al, ac );
	ac = 0;
	children[ac++] = lwstgTxt;
	children[ac++] = lwdateTxt;
	children[ac++] = lwqTxt;
	children[ac++] = lwnoteLbl;
	children[ac++] = lwnoteTxt;
	children[ac++] = lwstageLbl;
	children[ac++] = lwflowLbl;
	children[ac++] = lwdateLbl;
	XtManageChildren(children, ac);
	ac = 0;
	children[ac++] = lwinfoFM;
	children[ac++] = lwinfoLbl;
	XtManageChildren(children, ac);
	ac = 0;
	children[ac++] = lwstageListLb1;
	children[ac++] = lwstageListLb2;
	children[ac++] = lwstageListLb3;
	children[ac++] = lwinfoFrm;
	children[ac++] = lwSep1;
	children[ac++] = lwokPB;
	children[ac++] = lwapplyPB;
	children[ac++] = lwclosePB;
	children[ac++] = lwnewPB;
	children[ac++] = lwdelPB;
	XtManageChildren(children, ac);
	ac = 0;
}

