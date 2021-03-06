/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, NSMutableDictionary, NSMutableString;

@interface CMDictArchiveManager : CMArchiveManager  {
    NSMutableString *mCssString;
    NSMutableDictionary *mStyleCache;
    NSMutableDictionary *mResources;
    NSString *mPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableString *mMainHtml;
    NSString *mName;
    boolmIsFrameset;
}


- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (void)setIsFrameset;
- (id)createDictionaryWithSizeInfos:(BOOL)arg1;
- (id)resourceUrlProtocol;
- (id)createResourceWithName:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (int)resourceCount;
- (id)addCssStyle:(id)arg1;
- (id)cssStylesheetString;
- (void)pushCssToPath:(id)arg1;

@end
