/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    NSURLRequestInternal *_internal;
}

+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
+ (id)requestWithURL:(id)arg1;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (double)defaultTimeoutInterval;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;

- (id)initWithURL:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)URL;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned int)cachePolicy;
- (id)mainDocumentURL;
- (id)_propertyForKey:(id)arg1;
- (void)_removePropertyForKey:(id)arg1;
- (unsigned int)networkServiceType;
- (id)HTTPMethod;
- (id)allHTTPHeaderFields;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPReferrer;
- (id)HTTPUserAgent;
- (BOOL)HTTPShouldHandleCookies;
- (BOOL)HTTPShouldUsePipelining;
- (id)contentDispositionEncodingFallbackArray;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (struct _CFURLRequest { }*)_CFURLRequest;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (BOOL)_URLHasScheme:(id)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
- (double)timeoutInterval;
- (id)_web_HTTPReferrer;
- (id)_web_HTTPContentType;
- (BOOL)_web_isConditionalRequest;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;

@end
