/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITabBar;

@interface UITabBarSwappableImageView : UIView  {
    id _value;
    id _alternate;
    float _scale;
    BOOL _showAlternate;
    BOOL _flipped;
    int _currentAnimation;
    UITabBar *_tabBar;
    int _buttonTag;
}


- (id)initWithImage:(id)arg1 alternateImage:(id)arg2;
- (void)setCurrentImage;
- (void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(int)arg3;
- (void)showAlternateImage:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;

@end
