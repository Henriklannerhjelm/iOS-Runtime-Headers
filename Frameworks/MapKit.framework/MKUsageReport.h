/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString;

@interface MKUsageReport : NSObject  {
    NSString *_key;
    unsigned int _count;
}

@property unsigned int count;
@property(readonly) NSString * key;


- (id)key;
- (void)setCount:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)count;
- (id)initWithKey:(id)arg1 count:(unsigned int)arg2;
- (void)add:(unsigned int)arg1;

@end
