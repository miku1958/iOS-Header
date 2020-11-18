//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMOneTimeCodeAccelerator, LAContext, NSDictionary, NSString, NSUUID, TIKeyboardSecureCandidateRenderer;
@protocol OS_dispatch_queue;

@interface TIAppAutofillManager : NSObject
{
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
    NSDictionary *_currentOneTimeCode;
    NSUUID *_documentIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastKeyboardSync;
    NSDictionary *_queuedCustomInfo;
    LAContext *_laContext;
    NSObject<OS_dispatch_queue> *_oneTimeCodeAcceleratorQueue;
    IMOneTimeCodeAccelerator *_oneTimeCodeAccelerator;
}

@property (strong, nonatomic) NSString *clientIdentifierForLastAutofillGeneration; // @synthesize clientIdentifierForLastAutofillGeneration=_clientIdentifierForLastAutofillGeneration;
@property (strong, nonatomic) NSString *clientIdentifierForLastKeyboardSync; // @synthesize clientIdentifierForLastKeyboardSync=_clientIdentifierForLastKeyboardSync;
@property (strong, nonatomic) NSDictionary *currentOneTimeCode; // @synthesize currentOneTimeCode=_currentOneTimeCode;
@property (strong, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration; // @synthesize documentIdentifierForLastAutofillGeneration=_documentIdentifierForLastAutofillGeneration;
@property (strong, nonatomic) LAContext *laContext; // @synthesize laContext=_laContext;
@property (strong, nonatomic) IMOneTimeCodeAccelerator *oneTimeCodeAccelerator; // @synthesize oneTimeCodeAccelerator=_oneTimeCodeAccelerator;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *oneTimeCodeAcceleratorQueue; // @synthesize oneTimeCodeAcceleratorQueue=_oneTimeCodeAcceleratorQueue;
@property (strong, nonatomic) NSDictionary *queuedCustomInfo; // @synthesize queuedCustomInfo=_queuedCustomInfo;
@property (readonly, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_simulatesAutofillCandidates;
- (id)customInfoFromCredential:(id)arg1;
- (id)generateAutofillFormCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (id)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (id)generateOneTimeCodeCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (id)getCredentialsWithApplicationIdentifier:(id)arg1 autofillContext:(id)arg2;
- (id)initPrivate;
- (BOOL)isValidedString:(id)arg1;
- (id)obtainApplicationIdentifierFromConnection:(id)arg1;
- (id)obtainBundleIdentifierFromConnection:(id)arg1;
- (void)obtainCredential:(id)arg1;
- (void)obtainOneTimeCodeCredential:(id)arg1;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1;
- (void)shouldAcceptAutofill:(id)arg1 withPayload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shouldAcceptOneTimeCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldAuthenticateToAcceptAutofill;

@end
