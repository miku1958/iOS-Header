//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <VideoSubscriberAccountUI/UIKeyInput-Protocol.h>
#import <VideoSubscriberAccountUI/UITextInputTraits-Protocol.h>

@class NSArray, NSString, UITextInputPasswordRules;
@protocol VSTwoFactorDigitViewDelegate;

__attribute__((visibility("hidden")))
@interface VSTwoFactorDigitView : UIControl <UIKeyInput, UITextInputTraits>
{
    BOOL _hasText;
    long long _keyboardType;
    long long _autocapitalizationType;
    long long _returnKeyType;
    NSString *_textContentType;
    id<VSTwoFactorDigitViewDelegate> _delegate;
    unsigned long long _digitCount;
    NSString *_text;
    NSArray *_digits;
}

@property (nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSTwoFactorDigitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long digitCount; // @synthesize digitCount=_digitCount;
@property (strong, nonatomic) NSArray *digits; // @synthesize digits=_digits;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText; // @synthesize hasText=_hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *text; // @synthesize text=_text;
@property (copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;

- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)deleteBackward;
- (id)initWithDigitCount:(unsigned long long)arg1;
- (void)insertText:(id)arg1;
- (void)onTouchUpInside:(id)arg1;
- (void)setupDigitViews;

@end

