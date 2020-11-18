//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/DevicePINControllerDelegate-Protocol.h>

@class AAUICDPHelper, NSString, PSSetupController;

@interface AAUICDPStingrayController : NSObject <DevicePINControllerDelegate>
{
    AAUICDPHelper *_helper;
    PSSetupController *_navController;
    NSString *_stingrayPendingState;
    CDUnknownBlockType __passcodeValidationCompletion;
}

@property (copy, nonatomic) CDUnknownBlockType _passcodeValidationCompletion; // @synthesize _passcodeValidationCompletion=__passcodeValidationCompletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *stingrayPendingState; // @synthesize stingrayPendingState=_stingrayPendingState;
@property (readonly) Class superclass;

+ (id)stingrayControllerWithPresenter:(id)arg1;
+ (id)stingrayControllerWithPresenter:(id)arg1 forceInline:(BOOL)arg2;
+ (id)stingrayRefreshRequestWithInfo:(id)arg1 serverInfo:(id)arg2 attributes:(id)arg3;
- (void).cxx_destruct;
- (id)_presentingViewController;
- (void)_setupNavController;
- (void)_showPasscodePromptWithMode:(int)arg1;
- (id)_specifierForMode:(int)arg1;
- (void)dealloc;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
- (void)didAcceptEnteredPIN;
- (void)didCancelEnteringPIN;
- (void)dismissFlowWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)generateRecoveryKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateStingrayPasscodeStateWithCompletion:(CDUnknownBlockType)arg1;

@end

