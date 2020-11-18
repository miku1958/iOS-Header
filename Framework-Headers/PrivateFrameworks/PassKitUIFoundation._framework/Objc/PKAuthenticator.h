//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BSInvalidatable, OS_dispatch_queue, PKAuthenticatorDelegate;

@interface PKAuthenticator : NSObject
{
    unsigned long long _authenticationIdentifier;
    NSObject<OS_dispatch_queue> *_contextMutationQueue;
    BOOL _acquiringHintSupressionAssertion;
    id<BSInvalidatable> _hintSupressionAssertion;
    id<PKAuthenticatorDelegate> _delegate;
    double _fingerPresentTimeout;
}

@property (readonly, nonatomic) unsigned long long authenticationIdentifier;
@property (weak, nonatomic) id<PKAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL fingerPresent;
@property (nonatomic) double fingerPresentTimeout; // @synthesize fingerPresentTimeout=_fingerPresentTimeout;
@property (readonly, nonatomic) BOOL fingerPresentTimeoutExpired;
@property (readonly, nonatomic) BOOL fingerPresentTimeoutRequired;
@property (readonly, nonatomic) BOOL passcodeActive;
@property (readonly, nonatomic) BOOL passcodeWasPresented;
@property (readonly, nonatomic) BOOL passphraseActive;

+ (unsigned long long)currentStateForPolicy:(long long)arg1;
+ (void)preheatAuthenticator;
+ (id)viewServiceBundleID;
- (void).cxx_destruct;
- (BOOL)_delegateSupportsPasscodePresentation;
- (BOOL)_delegateSupportsPassphrasePresentation;
- (void)cancelEvaluation;
- (void)dealloc;
- (void)evaluatePolicy:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)evaluateRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fallbackToSystemPasscodeUI;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)restartEvaluation;
- (void)setFingerPresentTimeout:(double)arg1 preventRestart:(BOOL)arg2;

@end
