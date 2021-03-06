/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface SUSectionsResponse : NSObject  {
    BOOL _cacheable;
    NSDictionary *_rawResponseDictionary;
    int _responseType;
    NSMutableDictionary *_sectionsCache;
    BOOL _shouldResetUserOrdering;
    NSArray *_sections;
}

@property(readonly) NSArray * allSections;
@property(readonly) NSString * moreListTitle;
@property(readonly) NSDictionary * sectionsDictionary;
@property(readonly) NSString * versionString;
@property BOOL shouldResetUserOrdering;
@property(readonly) NSArray * sections;
@property(readonly) int responseType;
@property(readonly) NSDictionary * rawResponseDictionary;
@property(getter=isCacheable) BOOL cacheable;


- (id)init;
- (void)dealloc;
- (id)sections;
- (BOOL)shouldResetUserOrdering;
- (id)versionString;
- (void)_applyDefaultSearchFieldConfigurationsToSections:(id)arg1;
- (id)_newSectionsFromDictionary:(id)arg1;
- (int)responseType;
- (id)moreListTitle;
- (void)setCacheable:(BOOL)arg1;
- (id)sectionsDictionary;
- (id)initWithSectionsDictionary:(id)arg1 responseType:(int)arg2;
- (id)allSections;
- (void)setShouldResetUserOrdering:(BOOL)arg1;
- (BOOL)isCacheable;
- (id)rawResponseDictionary;

@end
