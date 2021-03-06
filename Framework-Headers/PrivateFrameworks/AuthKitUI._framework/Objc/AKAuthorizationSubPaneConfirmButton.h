//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationSubPane.h>

#import <AuthKitUI/LAUIAuthenticationDelegate-Protocol.h>

@class AKAuthorizationButton, AKAuthorizationPaneContext, AKAuthorizationPresentationContext, LAUIAuthenticationView, NSObject, NSString, UILabel, UIStackView, UIView;
@protocol AKAuthorizationSubPaneConfirmButtonDelegate, OS_dispatch_group;

@interface AKAuthorizationSubPaneConfirmButton : AKAuthorizationSubPane <LAUIAuthenticationDelegate>
{
    CDUnknownBlockType _processingStateCompletionHandler;
    NSObject<OS_dispatch_group> *_processingStateGroup;
    BOOL _hasTouchIDOnly;
    BOOL _canPerformBiometricValidation;
    NSString *_bioTextForInactiveState;
    AKAuthorizationButton *_authorizationButton;
    id<AKAuthorizationSubPaneConfirmButtonDelegate> _delegate;
    AKAuthorizationPaneContext *_context;
    AKAuthorizationPresentationContext *_presentationContext;
    UIStackView *_mainStackView;
    UIView *_authorizationButtonContainer;
    UILabel *_bioLabel;
    LAUIAuthenticationView *_bioView;
}

@property (readonly, nonatomic) AKAuthorizationButton *authorizationButton; // @synthesize authorizationButton=_authorizationButton;
@property (readonly, nonatomic) UIView *authorizationButtonContainer; // @synthesize authorizationButtonContainer=_authorizationButtonContainer;
@property (strong, nonatomic) UILabel *bioLabel; // @synthesize bioLabel=_bioLabel;
@property (copy, nonatomic) NSString *bioTextForInactiveState; // @synthesize bioTextForInactiveState=_bioTextForInactiveState;
@property (strong, nonatomic) LAUIAuthenticationView *bioView; // @synthesize bioView=_bioView;
@property (copy, nonatomic) NSString *buttonText;
@property BOOL canPerformBiometricValidation; // @synthesize canPerformBiometricValidation=_canPerformBiometricValidation;
@property (strong, nonatomic) AKAuthorizationPaneContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AKAuthorizationSubPaneConfirmButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property BOOL hasTouchIDOnly; // @synthesize hasTouchIDOnly=_hasTouchIDOnly;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIStackView *mainStackView; // @synthesize mainStackView=_mainStackView;
@property (strong, nonatomic) AKAuthorizationPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property (readonly) Class superclass;

+ (id)_createMainStackView;
- (void).cxx_destruct;
- (void)_addArrangedSpaceToMainStackView:(double)arg1;
- (void)_authorizationButtonBioSelected:(id)arg1;
- (void)_authorizationButtonSkipBioSelected:(id)arg1;
- (void)_authorizationButtonWithAccountPasswordSelected:(id)arg1;
- (void)_authorizationWithPasscodeButtonSelected:(id)arg1;
- (BOOL)_delegate_validateReadyForAuthorization;
- (void)_disableBioView;
- (void)_enableLAUIAuthMechanism;
- (void)_enterProcessingStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_hasTouchIDOnly;
- (void)_initializeAuthorizationButton;
- (BOOL)_isUpgradeFromPassword;
- (id)_passcodeButtonTitle;
- (id)_passwordButtonTitle;
- (void)_performPasscodeValidations:(CDUnknownBlockType)arg1;
- (void)_setGlyphViewGestureRecognizerEnabled:(BOOL)arg1;
- (void)_setupAlertImageWithConstraints:(id)arg1;
- (void)_setupBioButtonWithConstraints:(id)arg1;
- (void)_setupLabelWithTitle:(id)arg1 withConstraints:(id)arg2 animated:(BOOL)arg3;
- (BOOL)_shouldUseSIWAButton;
- (id)_spaceWithConstant:(double)arg1;
- (void)_switchToBioView:(BOOL)arg1 withEnabled:(BOOL)arg2 showAlert:(BOOL)arg3 alertString:(id)arg4;
- (void)_switchToPasscode;
- (void)_updateLabelWithTitle:(id)arg1;
- (void)_waitForTimeInterval:(double)arg1 withGroup:(id)arg2;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (void)addToStackView:(id)arg1 context:(id)arg2;
- (void)authenticationResult:(id)arg1 error:(id)arg2 context:(id)arg3;
- (void)bioAuthFailWithAlertString:(id)arg1;
- (void)dealloc;
- (void)enableAuthorizationCapability:(BOOL)arg1;
- (void)finishProcessingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPresentationContext:(id)arg1;
- (void)invalidateProcessingState;
- (void)processBiometricMatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setUpButtonToPaneContext:(id)arg1;
- (void)showAlertAndContinueWithPassword:(BOOL)arg1;

@end

