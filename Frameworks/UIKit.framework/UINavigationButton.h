/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationBar, UIImage, UIColor, NSString, NSSet;

@interface UINavigationButton : UIButton  {
    NSSet *_possibleTitles;
    int _style;
    int _barStyle;
    UIColor *_tintColor;
    struct CGSize { 
        float width; 
        float height; 
    } _boundsAdjustment;
    UINavigationBar *_navigationBar;
    unsigned int _size : 2;
    unsigned int _pad : 30;
}

@property(retain) NSString * title;
@property(retain) UIImage * image;
@property int controlSize;
@property(retain) UIColor * tintColor;
@property int barStyle;
@property int style;

+ (id)defaultFont;
+ (void)_initializeSafeCategory;

- (id)initWithTitle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setStyle:(int)arg1;
- (id)image;
- (id)_scriptingInfo;
- (int)style;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)barStyle;
- (id)title;
- (void)_updateStyle;
- (void)_setNavigationBar:(id)arg1;
- (id)initWithValue:(id)arg1 width:(float)arg2 style:(int)arg3 barStyle:(int)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6 applyBezel:(BOOL)arg7 forButtonItemStyle:(int)arg8;
- (id)initWithValue:(id)arg1 width:(float)arg2 style:(int)arg3 barStyle:(int)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6;
- (id)initWithTitle:(id)arg1 style:(int)arg2;
- (id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3;
- (id)initWithImage:(id)arg1 width:(float)arg2 style:(int)arg3 applyBezel:(BOOL)arg4 forBarStyle:(int)arg5 buttonItemStyle:(int)arg6;
- (id)initWithImage:(id)arg1 width:(float)arg2 style:(int)arg3;
- (id)initWithImage:(id)arg1 style:(int)arg2;
- (BOOL)contentsEqualTo:(id)arg1 withStyle:(int)arg2;
- (void)setControlSize:(int)arg1;
- (int)controlSize;
- (void)setBarStyle:(int)arg1;
- (void)_adjustBounds;
- (void)_setBoundsAdjustment:(struct CGSize { float x1; float x2; })arg1;
- (void)_updateContentInsets;
- (struct CGPoint { float x1; float x2; })_offsetForMiniBarState:(BOOL)arg1;
- (id)tintColor;
- (id)initWithImage:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_canHandleStatusBarMouseEvents:(struct __GSEvent { }*)arg1;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;

@end
