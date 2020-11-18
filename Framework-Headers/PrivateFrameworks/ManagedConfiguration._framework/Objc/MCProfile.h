//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MCProfile : NSObject
{
    int _trustQueueTrustLevel;
    BOOL _trustQueueTrustHasBeenEvaluated;
    NSObject<OS_dispatch_queue> *_trustEvaluationQueue;
    NSString *_signerQueueSignerSummary;
    NSArray *_signerQueueSignerCertificates;
    NSObject<OS_dispatch_queue> *_signerEvaluationQueue;
    BOOL _encrypted;
    BOOL _isLocked;
    BOOL _needsReboot;
    BOOL _isStub;
    BOOL _mustInstallNonInteractively;
    NSString *_profileDescription;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_UUID;
    NSString *_organization;
    long long _version;
    NSDate *_installDate;
    NSDate *_expiryDate;
    NSString *_removalPasscode;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSDate *_removalDate;
    NSDictionary *_installOptions;
    NSString *_localizedConsentText;
}

@property (readonly, strong, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, strong, nonatomic) NSDate *earliestCertificateExpiryDate;
@property (nonatomic, getter=isEncrypted) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property (readonly, strong, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property (readonly, strong, nonatomic) NSString *friendlyName;
@property (readonly, strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property (strong, nonatomic) NSDictionary *installOptions; // @synthesize installOptions=_installOptions;
@property (readonly, strong, nonatomic) NSArray *installationWarnings;
@property (readonly, nonatomic) BOOL isManagedByProfileService;
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) BOOL isStub; // @synthesize isStub=_isStub;
@property (readonly, nonatomic) NSString *localizedConsentText; // @synthesize localizedConsentText=_localizedConsentText;
@property (readonly, strong, nonatomic) NSArray *localizedManagedPayloadSummaryByType;
@property (readonly, strong, nonatomic) NSArray *localizedPayloadSummaryByType;
@property (nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_isLocked;
@property (readonly, strong, nonatomic) NSArray *managedPayloads;
@property (nonatomic) BOOL mustInstallNonInteractively; // @synthesize mustInstallNonInteractively=_mustInstallNonInteractively;
@property (readonly, nonatomic) BOOL needsReboot; // @synthesize needsReboot=_needsReboot;
@property (readonly, strong, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property (readonly, strong, nonatomic) NSArray *payloads;
@property (readonly, strong, nonatomic) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property (readonly, strong, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property (readonly, strong, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property (readonly, strong, nonatomic) NSString *profileIDHashFileName;
@property (readonly, nonatomic) NSDate *removalDate; // @synthesize removalDate=_removalDate;
@property (strong, nonatomic) NSString *removalPasscode; // @synthesize removalPasscode=_removalPasscode;
@property (readonly, nonatomic) struct __SecCertificate *signerCertificate;
@property (strong, nonatomic) NSArray *signerCertificates;
@property (readonly, nonatomic) NSString *signerSummary;
@property (readonly, strong, nonatomic) NSString *stubFileName;
@property (readonly, nonatomic) int trustLevel;
@property (readonly, nonatomic) long long version; // @synthesize version=_version;

+ (id)_malformedProfileError;
+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (BOOL)checkString:(id)arg1 isOneOfStrings:(id)arg2 key:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 errorString:(id)arg6 outError:(id *)arg7;
+ (id)dataFromCMSEncodedData:(id)arg1 outSignerCertificates:(id *)arg2;
+ (int)evaluateTrust:(struct __SecTrust *)arg1;
+ (int)evaluateTrustOfCertificateChain:(id)arg1;
+ (int)evaluateTrustOfCertificateChain:(id)arg1 outIsAllowedToWriteDefaults:(BOOL *)arg2;
+ (id)missingFieldErrorWithField:(id)arg1;
+ (id)profileDictionaryFromProfileData:(id)arg1 outError:(id *)arg2;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id *)arg4;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 outError:(id *)arg3;
+ (id)profileWithData:(id)arg1 outError:(id *)arg2;
+ (id)profileWithDictionary:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id *)arg4;
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id *)arg6;
+ (id)removeOptionalObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id *)arg7;
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id *)arg8;
+ (id)removeRequiredObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 missingDataCode:(long long)arg5 missingDataErrorString:(id)arg6 invalidDataCode:(long long)arg7 invalidDataErrorString:(id)arg8 outError:(id *)arg9;
+ (id)signerSummaryOfCertificate:(struct __SecCertificate *)arg1;
- (void).cxx_destruct;
- (id)appAccessibilityParameters;
- (BOOL)containsOnlyPayloadsOfClasses:(id)arg1;
- (BOOL)containsPayloadOfClass:(Class)arg1;
- (struct __SecCertificate *)copyCertificateFromPayloadWithUUID:(id)arg1;
- (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;
- (unsigned long long)countOfPayloadsOfClass:(Class)arg1;
- (id)description;
- (BOOL)doesSigningAllowReplacementWithProfile:(id)arg1;
- (BOOL)doesSigningAllowReplacementWithProfile:(id)arg1 useOriginalCheck:(BOOL)arg2;
- (void)evaluateSignerTrust;
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(id *)arg3;
- (id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg1;
- (id)malformedProfileErrorWithError:(id)arg1;
- (BOOL)mayInstallWithOptions:(id)arg1 hasInteractionClient:(BOOL)arg2 outError:(id *)arg3;
- (id)payloadWithUUID:(id)arg1;
- (id)restrictionsWithHeuristicsAppliedOutError:(id *)arg1;
- (id)stubDictionary;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)arg1;
- (BOOL)writeStubToDirectory:(id)arg1;
- (BOOL)writeStubToPath:(id)arg1;

@end

