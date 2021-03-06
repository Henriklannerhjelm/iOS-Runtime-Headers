/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface UIKBKeyboard : UIKBShape <NSCoding, UIKBCacheKey> {
    NSString *m_name;
    NSString *m_visualStyle;
    NSString *m_layout;
    NSMutableArray *m_keyplanes;
    NSMutableDictionary *m_keyCache;
    NSMutableDictionary *m_keysetCache;
}

@property(readonly) NSString * layoutName;
@property(readonly) NSString * cacheKey;
@property(retain) NSMutableDictionary * keysetCache;
@property(retain) NSDictionary * keyCache;
@property(retain) NSArray * keyplanes;
@property(retain) NSString * visualStyle;
@property(retain) NSString * name;

+ (id)keyboard;

- (void)cacheKey:(id)arg1 onKeyplane:(id)arg2;
- (id)cachedKeysByKeyName:(id)arg1 onKeyplane:(id)arg2;
- (id)keysetCache;
- (void)setKeysetCache:(id)arg1;
- (void)setKeyCache:(id)arg1;
- (void)setKeyplanes:(id)arg1;
- (id)layoutName;
- (id)cacheKey;
- (id)keyplanes;
- (id)keyplaneWithName:(id)arg1;
- (void)addKeyplane:(id)arg1;
- (id)keyCache;
- (id)currentKeyplanes;
- (void)makeLikeOther:(id)arg1;
- (void)setVisualStyle:(id)arg1;
- (id)visualStyle;
- (void)layout;
- (id)keyplaneForKey:(id)arg1;
- (void)setName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)name;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
