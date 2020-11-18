//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIColor;

__attribute__((visibility("hidden")))
@interface UIKBAutofillController : NSObject
{
    long long _delegateNeedsAutofillMode;
    BOOL _shouldSaveAutofill;
    NSMutableDictionary *_autofillGroup;
    NSMutableDictionary *_fallbackAutofillGroup;
    BOOL _didOptOutOfAutofillSignup;
    UIColor *_textFieldOrigColor;
}

@property (readonly, strong, nonatomic) NSMutableDictionary *autofillGroup; // @synthesize autofillGroup=_autofillGroup;
@property (nonatomic) long long delegateNeedsAutofillMode; // @synthesize delegateNeedsAutofillMode=_delegateNeedsAutofillMode;
@property (copy, nonatomic) NSMutableDictionary *fallbackAutofillGroup; // @synthesize fallbackAutofillGroup=_fallbackAutofillGroup;
@property (nonatomic) BOOL shouldSaveAutofill; // @synthesize shouldSaveAutofill=_shouldSaveAutofill;
@property (copy, nonatomic) UIColor *textFieldOrigColor; // @synthesize textFieldOrigColor=_textFieldOrigColor;

+ (unsigned long long)translateToTextInputAutofillMode:(long long)arg1;
- (void).cxx_destruct;
- (void)_clearASPInTextField:(id)arg1;
- (long long)_needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2;
- (BOOL)_prohibitAutofill:(id)arg1 needASPKeyboard:(BOOL)arg2;
- (void)_setAutofillGroup:(id)arg1;
- (id)accessibilityLoginKeywordList;
- (id)accessibilitySignupKeywordList;
- (void)addTemporaryTextColorToTextField:(id)arg1;
- (id)autofillContextForInputDelegate:(id)arg1;
- (void)clearASPInPasswordFields;
- (void)clearASPVisualEffectsInTextField:(id)arg1;
- (void)clearAutofillGroup;
- (void)clearFallbackAutofillGroup;
- (long long)containsIndicationInText:(id)arg1 withAccessibilityHints:(BOOL)arg2;
- (BOOL)containsUsernamePasswordPairsInAutofillGroup:(id)arg1;
- (void)didOptOutOfAutofillSignup;
- (long long)doTraits:(id)arg1 matchTextContentType:(id)arg2;
- (void)enumeratePasswordFieldsUsingBlock:(CDUnknownBlockType)arg1;
- (void)handleAutofillCredentialSaveIfNeeded:(id)arg1 fromASP:(BOOL)arg2;
- (void)handleWebviewCredentialsSaveForResponder:(id)arg1 WebsiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 passwordIsAutoGenerated:(BOOL)arg5;
- (id)init;
- (id)loginKeywordList;
- (long long)needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2 keyboardState:(id)arg3;
- (void)optOutASPInTextField;
- (BOOL)preferFallbackAutofillGroup;
- (void)removeTemporaryTextColorFromTextField:(id)arg1;
- (BOOL)shouldLoadASPForResponder:(id)arg1;
- (void)showASPInTextField:(id)arg1 isRightToLeft:(BOOL)arg2;
- (long long)signUpSignalFromButton:(id)arg1;
- (long long)signUpSignalFromNavBarItem:(id)arg1;
- (long long)signUpSignalFromViewControllerHierarchy:(id)arg1;
- (BOOL)signupHintForUsername:(id)arg1 password:(id)arg2 responder:(id)arg3;
- (id)signupKeywordList;
- (void)trackResponderForAutofillIfNeeded:(id)arg1;
- (void)updateAutofillContextForInputDelegate:(id)arg1;

@end

