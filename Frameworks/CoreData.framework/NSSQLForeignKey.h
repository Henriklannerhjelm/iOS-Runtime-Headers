/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLToOne;

@interface NSSQLForeignKey : NSSQLColumn  {
    NSSQLToOne *_toOne;
}


- (void)dealloc;
- (id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)toOneRelationship;

@end
