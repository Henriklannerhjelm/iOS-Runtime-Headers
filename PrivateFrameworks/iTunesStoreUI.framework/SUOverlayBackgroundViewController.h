/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScalingFlipView, NSArray, SUTouchCaptureView, SUOverlayViewController, NSMutableArray, <SUOverlayBackgroundDelegate>;

@interface SUOverlayBackgroundViewController : SUViewController <UIGestureRecognizerDelegate> {
    NSMutableArray *_actionQueue;
    SUScalingFlipView *_activeFlipView;
    BOOL _askingToDismissEverything;
    BOOL _askingToDismissSelection;
    SUTouchCaptureView *_captureView;
    <SUOverlayBackgroundDelegate> *_delegate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyboardFrame;
    int _selectedViewControllerIndex;
    NSMutableArray *_viewControllers;
}

@property(readonly) SUOverlayViewController * selectedViewController;
@property(readonly) NSArray * viewControllers;
@property <SUOverlayBackgroundDelegate> * delegate;


- (void)dismissAnimated:(BOOL)arg1;
- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;
- (id)selectedViewController;
- (id)viewControllers;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)overlayPageViewTapped:(id)arg1;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (void)_overlayAnimationDidFinish;
- (void)dismissOverlay:(id)arg1 animated:(BOOL)arg2;
- (void)layoutViewControllers;
- (void)_captureViewAction:(id)arg1;
- (void)_swipe:(id)arg1;
- (void)_backgroundAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_shouldDismiss:(id)arg1 finishedWithValue:(id)arg2;
- (void)_enqueueAction:(id)arg1;
- (void)_finishDismissAction:(id)arg1;
- (void)_finishDismissEverythingAction:(id)arg1;
- (void)_finishDismissOfViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_finishPresentAction:(id)arg1;
- (void)_overlayActionDidFinish;
- (void)_performDismissAction:(id)arg1;
- (void)_performDismissEverythingAction:(id)arg1;
- (void)_performNextAction;
- (void)_performPresentAction:(id)arg1;
- (void)_addViewController:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_centeredFrameForViewController:(id)arg1;
- (id)_copyTransitionForTransition:(id)arg1 action:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForSlideFromBottomForViewController:(id)arg1;
- (void)_layoutForKeyboardChangeWithInfo:(id)arg1;
- (void)_performFlipForAction:(id)arg1;
- (void)_removeViewController:(id)arg1;
- (id)_selectedViewController;
- (void)_sendDidDismiss;
- (void)_tearDownFlipView;
- (float)_viewControllerHorizontalPadding;
- (float)_viewControllerKeyboardOffset;
- (void)scalingFlipViewDidFinish:(id)arg1;
- (id)viewControllerForScriptWindowContext:(id)arg1;
- (void)presentOverlay:(id)arg1 withTransition:(id)arg2;
- (void)populateNavigationHistoryWithItems:(id)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (id)copyChildViewControllersForReason:(int)arg1;
- (id)copyArchivableJetsamContext;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (id)copyArchivableContext;
- (void)restoreArchivableContext:(id)arg1;

@end
