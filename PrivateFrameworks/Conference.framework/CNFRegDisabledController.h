/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class PSSpecifier;

@interface CNFRegDisabledController : CNFRegFirstRunController  {
    PSSpecifier *_spinner;
    PSSpecifier *_turnOnButton;
}


- (void)_activateSpinner;
- (void)_deactivateSpinner;
- (void)turnOnTapped:(id)arg1;
- (void)_setupAccountHandlersForDisabledOperation;
- (id)getAccountNameForSpecifier:(id)arg1;
- (id)_rightButtonItem;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)bundle;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;

@end
