/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSMutableArray, UIModalView;

@interface SheetController : NSObject <BrowserPanel, UIModalViewDelegate> {
    struct __CFDictionary { } *_sheets;
    UIModalView *_sheet;
    NSMutableArray *_alertInvocationQueue;
    id _delegate;
    int _actionToPerform;
}


- (void)didDismissAlertSheet:(id)arg1;
- (void)tableSelectionDidChange:(id)arg1;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (void)dealloc;
- (int)numberOfRowsInTable:(id)arg1;
- (id)table:(id)arg1 cellForRow:(int)arg2 column:(id)arg3;
- (void)setDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (int)panelType;
- (int)panelState;
- (int)pausesPages;
- (BOOL)disablesStatusBarPress;
- (void)_showSheetForAlert:(id)arg1 inView:(id)arg2 withClass:(Class)arg3;
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;
- (void)hideSheet;

@end
