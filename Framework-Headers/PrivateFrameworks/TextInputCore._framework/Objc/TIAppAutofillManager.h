//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LAContext, NSDictionary, NSString, NSUUID;

@interface TIAppAutofillManager : NSObject
{
    NSUUID *_documentIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastKeyboardSync;
    NSDictionary *_queuedCustomInfo;
    LAContext *_laContext;
}

@property (strong, nonatomic) NSString *clientIdentifierForLastAutofillGeneration; // @synthesize clientIdentifierForLastAutofillGeneration=_clientIdentifierForLastAutofillGeneration;
@property (strong, nonatomic) NSString *clientIdentifierForLastKeyboardSync; // @synthesize clientIdentifierForLastKeyboardSync=_clientIdentifierForLastKeyboardSync;
@property (strong, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration; // @synthesize documentIdentifierForLastAutofillGeneration=_documentIdentifierForLastAutofillGeneration;
@property (strong, nonatomic) LAContext *laContext; // @synthesize laContext=_laContext;
@property (strong, nonatomic) NSDictionary *queuedCustomInfo; // @synthesize queuedCustomInfo=_queuedCustomInfo;

+ (id)sharedInstance;
- (id)customInfoFromCredential:(id)arg1;
- (void)dealloc;
- (id)generateAutofillFormCandidatesWithSecureCandidateRenderer:(id)arg1 withRenderTraits:(id)arg2 withKeyboardState:(id)arg3;
- (id)getCredentialsWithApplicationIdentifier:(id)arg1 autofillContext:(id)arg2;
- (id)obtainApplicationIdentifierFromConnection:(id)arg1;
- (void)obtainCredential:(id)arg1;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1;
- (void)shouldAcceptAutofill:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldAuthenticateToAcceptAutofill;

@end
