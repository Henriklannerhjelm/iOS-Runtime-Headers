/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLEntity, NSString, NSPropertyDescription;

@interface NSSQLProperty : NSStoreMapping  {
    NSString *_name;
    NSPropertyDescription *_propertyDescription;
    NSSQLEntity *_entity;
    unsigned int _propertyType;
}


- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)description;
- (BOOL)isColumn;
- (BOOL)isEntityKey;
- (BOOL)isOptLockKey;
- (BOOL)isManyToMany;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)setPropertyDescription:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (BOOL)isForeignKey;
- (BOOL)isForeignEntityKey;
- (void)setEntityForReadOnlyFetch:(id)arg1;
- (BOOL)isToOne;
- (BOOL)isPrimaryKey;
- (void)_setName:(id)arg1;
- (BOOL)isRelationship;
- (unsigned int)propertyType;
- (id)propertyDescription;
- (unsigned int)slot;
- (id)columnName;
- (id)externalName;
- (BOOL)isAttribute;
- (BOOL)isToMany;
- (id)entity;

@end
