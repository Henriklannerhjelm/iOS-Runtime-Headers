/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKUserLocationViewInternal;

@interface MKUserLocationPositionAnimation : CABasicAnimation  {
    MKUserLocationViewInternal *viewImpl;
}

@property(retain) MKUserLocationViewInternal * viewImpl;
@property BOOL hidDot;

+ (id)defaultValueForKey:(id)arg1;

- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)init;
- (void)dealloc;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)setViewImpl:(id)arg1;
- (id)viewImpl;

@end
