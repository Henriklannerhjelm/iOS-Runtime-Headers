/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, NSArray;

@interface GKTableView : UITableView  {
    float _shadowInset;
    NSArray *_backgroundTiles;
    UIImage *_backgroundImage;
    struct CGSize { 
        float width; 
        float height; 
    } _statusOffsetShift;
    BOOL _becomeFirstResponderOnTouch;
    int _shadowStyle;
    int _backgroundStyle;
}

@property int backgroundStyle;
@property int shadowStyle;
@property BOOL becomeFirstResponderOnTouch;
@property struct CGSize { float width; float height; } statusOffsetShift;
@property(retain) UIImage * backgroundImage;
@property(retain) NSArray * backgroundTiles;
@property float shadowInset;


- (float)shadowInset;
- (struct CGSize { float x1; float x2; })statusOffsetShift;
- (int)shadowStyle;
- (void)updateBackgroundImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutTilesWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 offset:(struct CGSize { float x1; float x2; })arg2;
- (void)updateShadowViews;
- (void)updateBackground;
- (BOOL)becomeFirstResponderOnTouch;
- (void)setStatusOffsetShift:(struct CGSize { float x1; float x2; })arg1;
- (id)backgroundTiles;
- (void)setBackgroundTiles:(id)arg1;
- (void)setShadowInset:(float)arg1;
- (void)setShadowStyle:(int)arg1;
- (void)setBecomeFirstResponderOnTouch:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)setBackgroundStyle:(int)arg1;
- (int)backgroundStyle;
- (BOOL)canBecomeFirstResponder;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)backgroundImage;
- (void)setBackgroundView:(id)arg1;
- (float)_backgroundInset;
- (void)setBackgroundImage:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didMoveToWindow;

@end
