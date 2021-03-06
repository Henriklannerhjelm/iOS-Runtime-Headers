/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBezierPath : NSObject <NSCopying, NSCoding> {
    struct CGPath { } *_path;
    float *_lineDashPattern;
    unsigned int _lineDashPatternCount;
    float _lineWidth;
    float _miterLimit;
    float _flatness;
    float _lineDashPhase;
    int _lineCapStyle;
    int _lineJoinStyle;
    BOOL _usesEvenOddFillRule;
    struct CGPath { } *_immutablePath;
    BOOL _immutablePathIsValid;
}

@property struct CGPath { }* CGPath;
@property(getter=isEmpty,readonly) BOOL empty;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } bounds;
@property(readonly) struct CGPoint { float x; float y; } currentPoint;
@property BOOL usesEvenOddFillRule;
@property float flatness;
@property float miterLimit;
@property int lineJoinStyle;
@property int lineCapStyle;
@property float lineWidth;

+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 withCornerRadius:(float)arg3;
+ (id)shadowBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedEdges:(int)arg2;
+ (id)bezierPath;
+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cornerRadius:(float)arg2;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned int)arg2 cornerRadii:(struct CGSize { float x1; float x2; })arg3;
+ (id)bezierPathWithArcCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
+ (id)bezierPathWithCGPath:(struct CGPath { }*)arg1;
+ (id)bezierPathForTopOfRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withCornerRadius:(float)arg2;
+ (id)bezierPathForBottomOfRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withCornerRadius:(float)arg2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withTopCornerRadius:(float)arg2 withBottomCornerRadius:(float)arg3;
+ (id)_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned int)arg2 cornerRadius:(float)arg3;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedEdges:(int)arg2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 withCornerRadii:(id)arg3;
+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadius:(float)arg3 segments:(int)arg4;

- (void)lineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)moveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)clip;
- (struct CGPath { }*)_pathRef;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)stroke;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)lineCapStyle;
- (float)miterLimit;
- (BOOL)usesEvenOddFillRule;
- (id)_initWithCGMutablePath:(struct CGPath { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)appendPath:(id)arg1;
- (void)applyTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)addLineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)addQuadCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)addArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)closePath;
- (void)removeAllPoints;
- (struct CGPath { }*)CGPath;
- (void)setCGPath:(struct CGPath { }*)arg1;
- (BOOL)isEmpty;
- (struct CGPoint { float x1; float x2; })currentPoint;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLineDash:(const float*)arg1 count:(int)arg2 phase:(float)arg3;
- (void)getLineDash:(float*)arg1 count:(int*)arg2 phase:(float*)arg3;
- (void)fill;
- (void)fillWithBlendMode:(int)arg1 alpha:(float)arg2;
- (void)strokeWithBlendMode:(int)arg1 alpha:(float)arg2;
- (void)addClip;
- (struct CGPath { }*)_mutablePath;
- (struct CGPath { }*)_createMutablePathByDecodingData:(id)arg1;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)setUsesEvenOddFillRule:(BOOL)arg1;
- (float)flatness;
- (void)setFlatness:(float)arg1;
- (void)setMiterLimit:(float)arg1;
- (int)lineJoinStyle;
- (void)setLineJoinStyle:(int)arg1;
- (void)setLineCapStyle:(int)arg1;
- (float)lineWidth;
- (void)setLineWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;

@end
