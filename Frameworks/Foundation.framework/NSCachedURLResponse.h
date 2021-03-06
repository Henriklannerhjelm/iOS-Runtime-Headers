/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSCachedURLResponseInternal;

@interface NSCachedURLResponse : NSObject <NSCoding, NSCopying> {
    NSCachedURLResponseInternal *_internal;
}


- (id)response;
- (id)userInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)data;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponse:(id)arg1 data:(id)arg2;
- (id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned int)arg4;
- (unsigned int)storagePolicy;
- (void)_deallocInternalCFCachedURLResponse;
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse { }*)arg1;
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse { }*)arg1;
- (struct _CFCachedURLResponse { }*)_CFCachedURLResponse;

@end
