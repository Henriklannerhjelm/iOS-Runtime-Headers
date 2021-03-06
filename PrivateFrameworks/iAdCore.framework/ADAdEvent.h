/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADAdConnection, NSString, ADDeviceOrientation;

@interface ADAdEvent : PBCodable  {
    unsigned long long _timestampEvent;
    BOOL _hasTimestampEvent;
    NSString *_context;
    ADDeviceOrientation *_deviceOrientation;
    ADAdConnection *_connectionType;
}

@property(readonly) BOOL hasContext;
@property(readonly) BOOL hasDeviceOrientation;
@property(readonly) BOOL hasConnectionType;
@property(retain) ADAdConnection * connectionType;
@property(retain) ADDeviceOrientation * deviceOrientation;
@property(retain) NSString * context;
@property(readonly) BOOL hasTimestampEvent;
@property unsigned long long timestampEvent;


- (BOOL)hasConnectionType;
- (BOOL)hasDeviceOrientation;
- (BOOL)hasContext;
- (id)deviceOrientation;
- (unsigned long long)timestampEvent;
- (void)setConnectionType:(id)arg1;
- (BOOL)hasTimestampEvent;
- (void)setTimestampEvent:(unsigned long long)arg1;
- (id)connectionType;
- (void)setContext:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setDeviceOrientation:(id)arg1;
- (id)context;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
