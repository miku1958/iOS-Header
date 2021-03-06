//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString, NSURL;

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _shouldSendRecordPCSKeys;
    BOOL _enqueuedOnContainerService;
    BOOL _legacyIsLocalBit;
    BOOL _shouldFetchAssetContentInMemory;
    NSString *_serviceName;
    NSString *_functionName;
    NSArray *_requestLocalSerializations;
    NSArray *_requestLocalEnvelopes;
    NSData *_permittedRemoteMeasurement;
    NSURL *_clientRuntimeProvidedServiceURL;
    NSURL *_resolvedBaseURL;
}

@property (copy, nonatomic) NSURL *clientRuntimeProvidedServiceURL; // @synthesize clientRuntimeProvidedServiceURL=_clientRuntimeProvidedServiceURL;
@property (nonatomic) BOOL enqueuedOnContainerService; // @synthesize enqueuedOnContainerService=_enqueuedOnContainerService;
@property (copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property (nonatomic) BOOL legacyIsLocalBit; // @synthesize legacyIsLocalBit=_legacyIsLocalBit;
@property (copy, nonatomic) NSData *permittedRemoteMeasurement; // @synthesize permittedRemoteMeasurement=_permittedRemoteMeasurement;
@property (copy, nonatomic) NSArray *requestLocalEnvelopes; // @synthesize requestLocalEnvelopes=_requestLocalEnvelopes;
@property (copy, nonatomic) NSArray *requestLocalSerializations; // @synthesize requestLocalSerializations=_requestLocalSerializations;
@property (copy, nonatomic) NSURL *resolvedBaseURL; // @synthesize resolvedBaseURL=_resolvedBaseURL;
@property (copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property (nonatomic) BOOL shouldSendRecordPCSKeys; // @synthesize shouldSendRecordPCSKeys=_shouldSendRecordPCSKeys;

+ (void)applyDefaultParametersToServiceURLComponents:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

