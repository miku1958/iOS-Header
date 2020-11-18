//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <FuseUI/MusicTermsAgreementViewControllerDelegate-Protocol.h>

@class MusicTermsAgreementViewController, NSError, NSObject, NSString, SSVFairPlaySAPSession;
@protocol OS_dispatch_queue;

@interface MusicTermsVerificationOperation : NSOperation <MusicTermsAgreementViewControllerDelegate>
{
    unsigned long long _acceptingTermsVersion;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSError *_error;
    BOOL _executing;
    BOOL _finished;
    SSVFairPlaySAPSession *_SAPSession;
    MusicTermsAgreementViewController *_termsAgreementViewController;
    CDUnknownBlockType _additionalPresentationHandler;
}

@property (strong) SSVFairPlaySAPSession *SAPSession;
@property (readonly, copy) CDUnknownBlockType additionalPresentationHandler; // @synthesize additionalPresentationHandler=_additionalPresentationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)requiresTermsVerification;
- (void).cxx_destruct;
- (void)_cleanUpTermsAgreementViewController:(id)arg1;
- (void)_dismissTermsAgreementViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_finishWithError:(id)arg1;
- (id)_newTermsUpdateOperationWithAcceptedStoreTermsVersion:(unsigned long long)arg1;
- (void)_updateSubscriptionStatus;
- (id)init;
- (id)initWithAdditionalPresentationHandler:(CDUnknownBlockType)arg1;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;
- (void)termsAgreementViewController:(id)arg1 didRequestSendByEmailToEmailAddress:(id)arg2;
- (void)termsAgreementViewControllerDidAcceptTerms:(id)arg1;
- (void)termsAgreementViewControllerDidCancel:(id)arg1;

@end

