/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSValueTransformer : NSObject  {
}

+ (id)_transformerRegistry;
+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;
+ (id)valueTransformerForName:(id)arg1;
+ (id)valueTransformerNames;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;

@end
