/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDate, NSTimer, UILabel;

@interface PLCameraElapsedTimeView : UIImageView  {
    UILabel *_hours;
    UILabel *_minutes;
    UILabel *_seconds;
    NSTimer *_timer;
    NSDate *_startTime;
    BOOL _autorotationEnabled;
    BOOL _watchingOrientationChanges;
    int _orientation;
}

@property BOOL autorotationEnabled;

+ (void)_initializeSafeCategory;

- (void)startTimer;
- (void)_update:(id)arg1;
- (void)setOrientation:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)stopTimer;
- (BOOL)autorotationEnabled;
- (void)setAutorotationEnabled:(BOOL)arg1;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_setDeviceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_startWatchingDeviceOrientationChanges;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;

@end
