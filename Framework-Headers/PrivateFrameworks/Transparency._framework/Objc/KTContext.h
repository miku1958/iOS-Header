//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KTApplicationPublicKeyStore, KTContextVerifier, KTLogClient, NSString, TransparencyManagedDataStore, TransparencyTranscript;

@interface KTContext : NSObject
{
    NSString *_applicationID;
    TransparencyTranscript *_transcript;
    KTApplicationPublicKeyStore *_applicationKeyStore;
    TransparencyManagedDataStore *_dataStore;
    KTContextVerifier *_verifier;
    KTLogClient *_logClient;
}

@property (strong) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property (strong) KTApplicationPublicKeyStore *applicationKeyStore; // @synthesize applicationKeyStore=_applicationKeyStore;
@property (strong) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property (strong) KTLogClient *logClient; // @synthesize logClient=_logClient;
@property (strong) TransparencyTranscript *transcript; // @synthesize transcript=_transcript;
@property (strong) KTContextVerifier *verifier; // @synthesize verifier=_verifier;

+ (id)validateEventName:(unsigned long long)arg1 application:(id)arg2;
- (void).cxx_destruct;
- (id)analyticsForRequestValidation:(id)arg1 initialResult:(unsigned long long)arg2 result:(unsigned long long)arg3;
- (BOOL)checkDeferActivity:(id)arg1;
- (void)checkInclusionProofEpoch:(id)arg1;
- (void)clearState:(CDUnknownBlockType)arg1;
- (id)copyState;
- (id)createChainOfErrorsFromRequestFailures:(id)arg1;
- (id)createChainOfErrorsFromSTHFailures:(id)arg1 type:(unsigned long long)arg2;
- (id)createErrorFromRequestFailure:(id)arg1 underlyingError:(id)arg2;
- (id)createErrorFromSTHFailure:(id)arg1 underlyingError:(id)arg2;
- (void)downloadConsistencyProof:(id *)arg1 retry:(BOOL)arg2;
- (void)downloadInclusionProofsForRevisions:(id)arg1 downloadType:(unsigned long long)arg2 retry:(BOOL)arg3 error:(id *)arg4;
- (void)downloadQueryForKTRequest:(id)arg1 retry:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadSMHInclusionProofs:(id *)arg1 retry:(BOOL)arg2;
- (void)downloadSMTQueryResponse:(id)arg1 retry:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadSTHInclusionProofs:(id *)arg1 retry:(BOOL)arg2;
- (unsigned long long)downloadTypeForValidateType:(unsigned long long)arg1;
- (BOOL)failExpiredRequest:(id)arg1 error:(id)arg2;
- (void)failExpiredSTHs:(id *)arg1;
- (void)failHeadDownload:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3;
- (void)failHeadDownloadRecord:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3 error:(id *)arg4;
- (void)failRequestDownload:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3;
- (void)failRequestDownloadRecord:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3;
- (void)failSMTDownload:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3;
- (void)failSMTDownloadRecord:(id)arg1 failure:(id)arg2 retry:(BOOL)arg3 error:(id *)arg4;
- (void)fetchQueryForKTRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)garbageCollectHeads:(id *)arg1;
- (void)handleDownloadOfType:(unsigned long long)arg1 error:(id *)arg2;
- (void)handleDownloadOfType:(unsigned long long)arg1 retry:(BOOL)arg2 error:(id *)arg3;
- (void)handleGarbageCollection:(id)arg1 error:(id *)arg2;
- (void)handleHeadsWithUnverifiedSignature:(id *)arg1;
- (void)handleKTRequestDownload:(id)arg1;
- (void)handleKTRequestDownload:(id)arg1 retry:(BOOL)arg2;
- (void)handlePendingConsistencyProofs:(id *)arg1;
- (void)handlePendingHeadInclusionProofs:(id *)arg1;
- (void)handlePendingQueryRequests:(id)arg1 error:(id *)arg2;
- (void)handleSMTInclusionDownload:(id)arg1 request:(id)arg2;
- (void)handleSMTInclusionDownload:(id)arg1 request:(id)arg2 retry:(BOOL)arg3;
- (void)handleSMTsWithUnverifiedSignature:(id *)arg1;
- (void)handleURIsWithPendingSMTs:(id)arg1 error:(id *)arg2;
- (unsigned long long)handleVerifyInsertResponse:(id)arg1 request:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (unsigned long long)handleVerifyPeerResponse:(id)arg1 queryRequest:(id)arg2 request:(id)arg3 transparentData:(id *)arg4 error:(id *)arg5;
- (unsigned long long)handleVerifySelfResponse:(id)arg1 queryRequest:(id)arg2 request:(id)arg3 transparentData:(id *)arg4 error:(id *)arg5;
- (BOOL)hasTooManyVRFRequests:(id)arg1;
- (id)initWithApplicationKeyStore:(id)arg1 dataStore:(id)arg2 logClient:(id)arg3 applicationID:(id)arg4;
- (void)logFinishFailureEvent:(id)arg1 error:(id)arg2;
- (void)logFinishSuccessEvent:(id)arg1;
- (void)logStartEvent:(id)arg1;
- (id)parseQueryRequestFromKTRequest:(id)arg1 error:(id *)arg2;
- (id)queryRequestForKTRequest:(id)arg1 error:(id *)arg2;
- (BOOL)ready:(id *)arg1;
- (BOOL)runDutyCycleForActivity:(id)arg1;
- (void)saveRequestFailure:(id)arg1 failure:(id)arg2;
- (unsigned long long)validateEnrollment:(id)arg1 queryRequest:(id)arg2 queryResponse:(id)arg3 transparentData:(id *)arg4 error:(id *)arg5;
- (unsigned long long)validateEnrollment:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validateEnrollmentWithAnalytics:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validatePeer:(id)arg1 queryRequest:(id)arg2 queryResponse:(id)arg3 transparentData:(id *)arg4 error:(id *)arg5;
- (unsigned long long)validatePeer:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validatePeerWithAnalytics:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validateSelf:(id)arg1 queryRequest:(id)arg2 queryResponse:(id)arg3 transparentData:(id *)arg4 error:(id *)arg5;
- (unsigned long long)validateSelf:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validateSelfWithAnalytics:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)verifyConsistencyProofDownload:(id)arg1 error:(id *)arg2;
- (unsigned long long)verifyConsistencyProofDownloadRecord:(id)arg1 error:(id *)arg2;
- (BOOL)verifyInclusionProofDownload:(id)arg1 error:(id *)arg2;
- (BOOL)verifyInclusionProofDownloadRecord:(id)arg1 error:(id *)arg2;
- (BOOL)verifyRequestDownload:(id)arg1 error:(id *)arg2;
- (void)verifyRequestDownloadRecord:(id)arg1 error:(id *)arg2;
- (BOOL)verifySMTDownload:(id)arg1 error:(id *)arg2;
- (void)verifySMTDownloadRecord:(id)arg1 error:(id *)arg2;
- (unsigned long long)writeResult:(unsigned long long)arg1 request:(id)arg2 proof:(id)arg3 error:(id *)arg4;

@end
