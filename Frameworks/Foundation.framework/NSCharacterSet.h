/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}

+ (id)punctuationCharacterSet;
+ (id)symbolCharacterSet;
+ (id)alphanumericCharacterSet;
+ (void)initialize;
+ (id)whitespaceCharacterSet;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)decimalDigitCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)uppercaseLetterCharacterSet;
+ (id)controlCharacterSet;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)illegalCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)newlineCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)CJKCharacterSet;
+ (id)whitespaceNewlineAndSpecialCharacterSet;
+ (id)wordBreakCharacterSet;

- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)invertedSet;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEmpty;
- (unsigned int)count;
- (BOOL)isSupersetOfSet:(id)arg1;
- (void)makeImmutable;
- (id)_retainedBitmapRepresentation;
- (BOOL)isMutable;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (id)bitmapRepresentation;
- (unsigned long)_cfTypeID;

@end
