/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, UIImageView, UILabel;

@interface GKRatingControl : UIControl  {
    UIImageView *_backgroundImageView;
    UILabel *_explanationLabel;
    UIImageView *_foregroundImageView;
    struct CGSize { 
        float width; 
        float height; 
    } _hitPadding;
    float _starWidth;
    struct CGPoint { 
        float x; 
        float y; 
    } _trackingLastPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _trackingStartPoint;
    float _value;
}

@property(retain) NSString * explanationText;
@property float value;
@property float starWidth;


- (float)value;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setValue:(float)arg1;
- (BOOL)canHandleSwipes;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (void)sizeToFit;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (id)init;
- (void)dealloc;
- (id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2;
- (void)setHitPadding:(struct CGSize { float x1; float x2; })arg1;
- (void)setStarWidth:(float)arg1;
- (void)setExplanationText:(id)arg1;
- (id)explanationText;
- (id)_newExplanationLabel;
- (void)_updateValueForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)starWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_foregroundImageClipBounds;

@end
