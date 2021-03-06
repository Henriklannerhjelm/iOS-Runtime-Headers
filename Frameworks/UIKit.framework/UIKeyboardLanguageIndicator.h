/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage;

@interface UIKeyboardLanguageIndicator : UIView  {
    UIImage *m_image;
    float m_textSize;
    int m_style;
    BOOL m_portrait;
}

@property float textSize;
@property(getter=isPortrait) BOOL portrait;


- (void)fade;
- (void)setTextSize:(float)arg1;
- (BOOL)isPortrait;
- (void)setPortrait:(BOOL)arg1;
- (void)setBackgroundImage:(id)arg1;
- (float)textSize;
- (void)setStyle:(int)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
