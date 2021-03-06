/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIViewController, UITransitionView, UIWindow;

@interface UIWindowController : NSObject  {
    UITransitionView *_transitionView;
    UIWindow *_window;
    int _currentTransition;
    id _target;
    SEL _didEndSelector;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    struct CGPoint { 
        float x; 
        float y; 
    } _beginOriginForToView;
    struct CGPoint { 
        float x; 
        float y; 
    } _endOriginForToView;
    BOOL _presenting;
    int _toModalStyle;
}

@property UIWindow * window;
@property BOOL presenting;
@property(readonly) UITransitionView * transitionView;

+ (id)windowControllerForWindow:(id)arg1;
+ (void)windowWillBeDeallocated:(id)arg1;

- (struct CGPoint { float x1; float x2; })_originForViewController:(id)arg1 orientation:(int)arg2 actualStatusBarHeight:(float)arg3 fullScreenLayout:(BOOL)arg4 inWindow:(id)arg5;
- (struct CGSize { float x1; float x2; })_flipSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForViewController:(id)arg1 transition:(int)arg2 orientation:(int)arg3 fullScreenLayout:(BOOL)arg4 inWindow:(id)arg5;
- (void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned int)arg3;
- (void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (struct CGPoint { float x1; float x2; })_adjustOrigin:(struct CGPoint { float x1; float x2; })arg1 givenOtherOrigin:(struct CGPoint { float x1; float x2; })arg2 forTransition:(int)arg3;
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (BOOL)presenting;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)setPresenting:(BOOL)arg1;
- (id)transitionView;
- (double)durationForTransition:(int)arg1;
- (void)transitionViewDidStart:(id)arg1;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (id)window;
- (void)dealloc;
- (void)setWindow:(id)arg1;

@end
