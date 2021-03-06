/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <NSObject><NSCopying>, NSNumber, NSLocale, AVMetadataItemInternal, NSDictionary, NSString, NSData, NSDate;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
    AVMetadataItemInternal *_priv;
}

@property(readonly) NSString * stringValue;
@property(readonly) NSNumber * numberValue;
@property(readonly) NSDate * dateValue;
@property(readonly) NSData * dataValue;
@property(copy,readonly) <NSObject><NSCopying> * key;
@property(copy,readonly) NSString * commonKey;
@property(copy,readonly) NSString * keySpace;
@property(copy,readonly) NSLocale * locale;
@property(readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property(readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property(copy,readonly) <NSObject><NSCopying> * value;
@property(copy,readonly) NSDictionary * extraAttributes;

+ (id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3;
+ (id)_figMetadataPropertyFromMetadataItems:(id)arg1;
+ (id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2;

- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)key;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)locale;
- (id)value;
- (void)finalize;
- (id)stringValue;
- (unsigned int)hash;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dataValue;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)_initWithFigMetadataDictionary:(id)arg1;
- (void)cancelLoading;
- (void)_makeValueReady;
- (void)_makePropertiesReady;
- (void)_updateCommonKey;
- (void)_extractPropertiesFromDictionary:(id)arg1;
- (id)_keyAsString;
- (id)dateValue;
- (struct CGImage { }*)imageValue;
- (id)commonKey;
- (id)_initWithReader:(struct OpaqueFigMetadataReader { }*)arg1 itemIndex:(long)arg2;
- (id)_figMetadataDictionary;
- (id)_figMetadataFormat;
- (id)extraAttributes;
- (id)keySpace;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)numberValue;

@end
