/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboard, UIView;

@interface UIInputViewSet : NSObject  {
    UIView *_inputView;
    UIView *_inputAccessoryView;
    BOOL _isKeyboard;
}

@property(readonly) UIKeyboard * keyboard;
@property(getter=isEmpty,readonly) BOOL empty;
@property(retain) UIView * inputAccessoryView;
@property(retain) UIView * inputView;

+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;
+ (id)emptyInputSet;

- (id)inputView;
- (id)inputAccessoryView;
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 isKeyboard:(BOOL)arg3;
- (BOOL)usesKeyClicks;
- (BOOL)containsResponder:(id)arg1;
- (BOOL)isStrictSupersetOfViewSet:(id)arg1;
- (int)keyboardOrientation:(id)arg1;
- (BOOL)inSyncWithOrientation:(int)arg1 forKeyboard:(id)arg2;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (BOOL)visible;
- (id)keyboard;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)description;

@end
