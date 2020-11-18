//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextInput-Protocol.h>
#import <UIKit/UITextPasteConfigurationSupporting-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, UITextRange;
@protocol UITextPasteAnimating;

@protocol UITextPasteConfigurationSupporting_Internal <UITextPasteConfigurationSupporting, UITextInput>
- (NSArray *)_implicitPasteConfigurationClasses;
- (void)_performPasteOfAttributedString:(NSAttributedString *)arg1 toRange:(UITextRange *)arg2 animator:(id<UITextPasteAnimating>)arg3 completion:(void (^)(UITextRange *, NSAttributedString *))arg4;
- (BOOL)allowsEditingTextAttributes;
- (NSDictionary *)typingAttributes;

@optional
- (void)_pasteSessionDidFinish;
@end
