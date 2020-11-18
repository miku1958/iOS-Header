//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFAccount, MFActivityMonitor, MFError, MFMonitoredInvocation, NSArray;
@protocol MFAccountValidatorDelegate;

@interface MFAccountValidator : NSObject
{
    MFAccount *_account;
    MFActivityMonitor *_accountValidationActivity;
    MFMonitoredInvocation *_validationInvocation;
    CDUnknownBlockType _completionBlock;
    struct {
        unsigned int useSSL:1;
        unsigned int incomingServerSupportsSSL:1;
        unsigned int smtpServerSupportsSSL:1;
        unsigned int canceled:1;
        unsigned int performsValidationInBackground:1;
        unsigned int unused:27;
    } _flags;
    MFError *_incomingServerValidationError;
    MFError *_smtpServerValidationError;
    NSArray *_incomingServerAuthSchemes;
    NSArray *_smtpServerAuthSchemes;
    id<MFAccountValidatorDelegate> _delegate;
}

@property (readonly, nonatomic) MFAccount *account;
@property (readonly, nonatomic) BOOL accountIsValid;
@property (readonly, nonatomic) BOOL accountSupportsSSL;
@property (weak, nonatomic) id<MFAccountValidatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) MFError *error;
@property (readonly, nonatomic) BOOL performsValidationInBackground;
@property (readonly, nonatomic) MFMonitoredInvocation *validationInvocation;

- (void).cxx_destruct;
- (void)_backgroundValidateAccountFinished:(id)arg1 authSchemes:(id)arg2;
- (BOOL)_incomingServerValid;
- (id)_ispAccountInfo;
- (BOOL)_outgoingServerValid;
- (void)_validateAccount:(id)arg1;
- (void)_validateAccount:(id)arg1 withFallbacks:(BOOL)arg2;
- (void)_validateAccountWithoutFallbacks:(id)arg1;
- (BOOL)accountValidationCanceled;
- (void)cancelValidation;
- (void)dealloc;
- (id)init;
- (id)initWithPerformsValidationInBackground:(BOOL)arg1;
- (void)stop;
- (void)validateAccount:(id)arg1 useSSL:(BOOL)arg2;
- (void)validateAccount:(id)arg1 useSSL:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)validateAccountWithoutFallbacks:(id)arg1;
- (void)validateAccountWithoutFallbacks:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
