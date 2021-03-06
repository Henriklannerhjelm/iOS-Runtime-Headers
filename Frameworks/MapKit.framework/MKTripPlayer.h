/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, NSArray, NSString, NSTimer, NSDate, MKTripPoint;

@interface MKTripPlayer : CLLocationManager  {
    NSString *_filePath;
    NSArray *_tripPoints;
    BOOL _isPlaying;
    NSDate *_startDate;
    double _lastTimeCL;
    NSTimer *_timer;
    NSTimer *_headingTimer;
    unsigned int _index;
    CLLocation *_prevLocation;
    MKTripPoint *_tripPoint;
    float _version;
    double _heading;
    double _headingAccuracy;
}

@property(readonly) double bestAccuracy;
@property(readonly) BOOL hasSpeed;
@property(retain) CLLocation * prevLocation;
@property(retain) NSTimer * headingTimer;
@property(retain) NSTimer * timer;
@property(retain) NSDate * startDate;
@property BOOL isPlaying;
@property(retain) NSString * filePath;
@property(retain) NSArray * tripPoints;
@property(retain) MKTripPoint * tripPoint;


- (void)reset;
- (void)start;
- (void)dealloc;
- (BOOL)hasSpeed;
- (id)tripPoint;
- (id)tripPoints;
- (id)prevLocation;
- (double)bestAccuracy;
- (id)initWithFilePath:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setHeadingTimer:(id)arg1;
- (BOOL)hasHeading;
- (BOOL)_readVersion:(id*)arg1;
- (void)parseCLString:(id)arg1 tripPoint:(id*)arg2 timeElapsed:(double*)arg3;
- (void)parseMKString:(id)arg1 tripPoint:(id*)arg2 timeElapsed:(double*)arg3;
- (BOOL)scanNextTripPoint:(id*)arg1;
- (void)playNextHeading;
- (void)playNextTripPoint;
- (void)setPrevLocation:(id)arg1;
- (id)headingTimer;
- (id)timer;
- (id)startDate;
- (void)setStartDate:(id)arg1;
- (void)setIsPlaying:(BOOL)arg1;
- (void)setTripPoints:(id)arg1;
- (void)setTripPoint:(id)arg1;
- (void)setSupportInfo:(BOOL)arg1;
- (void)setHeadingFilter:(double)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)stop;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (BOOL)locationServicesApproved;
- (BOOL)isPlaying;

@end
