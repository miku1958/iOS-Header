//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDProtocolTranslator, NSArray, NSData, NSString, NSURL, PCCKey;
@protocol CKCodeOperationCallbacks;

__attribute__((visibility("hidden")))
@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation
{
    BOOL _shouldSendRecordPCSKeys;
    BOOL _shouldFetchAssetContentInMemory;
    CDUnknownBlockType _replaceLocalSerializationsBlobs;
    CDUnknownBlockType _initialResponseReceivedCallback;
    CDUnknownBlockType _replaceWireSerializations;
    CDUnknownBlockType _recordFetchCompletionBlock;
    CDUnknownBlockType _recordFetchProgressBlock;
    CDUnknownBlockType _recordFetchCommandBlock;
    NSString *_serviceName;
    NSString *_functionName;
    PCCKey *_pccKey;
    NSArray *_pccWrappedKeys;
    NSData *_attestationEntropy;
    NSArray *_requestLocalSerializations;
    NSArray *_requestLocalEnvelopes;
    NSData *_permittedRemoteMeasurement;
    NSURL *_resolvedBaseURL;
    NSArray *_requestRecords;
    NSData *_serializedArguments;
    NSData *_serializedResponse;
    NSArray *_responseRecords;
    CKDProtocolTranslator *_translator;
}

@property (strong, nonatomic) NSData *attestationEntropy; // @synthesize attestationEntropy=_attestationEntropy;
@property (strong, nonatomic) id<CKCodeOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (readonly, copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property (copy, nonatomic) CDUnknownBlockType initialResponseReceivedCallback; // @synthesize initialResponseReceivedCallback=_initialResponseReceivedCallback;
@property (strong, nonatomic) PCCKey *pccKey; // @synthesize pccKey=_pccKey;
@property (strong, nonatomic) NSArray *pccWrappedKeys; // @synthesize pccWrappedKeys=_pccWrappedKeys;
@property (copy, nonatomic) NSData *permittedRemoteMeasurement; // @synthesize permittedRemoteMeasurement=_permittedRemoteMeasurement;
@property (copy, nonatomic) CDUnknownBlockType recordFetchCommandBlock; // @synthesize recordFetchCommandBlock=_recordFetchCommandBlock;
@property (copy, nonatomic) CDUnknownBlockType recordFetchCompletionBlock; // @synthesize recordFetchCompletionBlock=_recordFetchCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType recordFetchProgressBlock; // @synthesize recordFetchProgressBlock=_recordFetchProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType replaceLocalSerializationsBlobs; // @synthesize replaceLocalSerializationsBlobs=_replaceLocalSerializationsBlobs;
@property (copy, nonatomic) CDUnknownBlockType replaceWireSerializations; // @synthesize replaceWireSerializations=_replaceWireSerializations;
@property (copy, nonatomic) NSArray *requestLocalEnvelopes; // @synthesize requestLocalEnvelopes=_requestLocalEnvelopes;
@property (copy, nonatomic) NSArray *requestLocalSerializations; // @synthesize requestLocalSerializations=_requestLocalSerializations;
@property (copy, nonatomic) NSArray *requestRecords; // @synthesize requestRecords=_requestRecords;
@property (copy, nonatomic) NSURL *resolvedBaseURL; // @synthesize resolvedBaseURL=_resolvedBaseURL;
@property (copy, nonatomic) NSArray *responseRecords; // @synthesize responseRecords=_responseRecords;
@property (copy, nonatomic) NSData *serializedArguments; // @synthesize serializedArguments=_serializedArguments;
@property (copy, nonatomic) NSData *serializedResponse; // @synthesize serializedResponse=_serializedResponse;
@property (readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property (nonatomic) BOOL shouldSendRecordPCSKeys; // @synthesize shouldSendRecordPCSKeys=_shouldSendRecordPCSKeys;
@property (nonatomic) unsigned long long state; // @dynamic state;
@property (strong, nonatomic) CKDProtocolTranslator *translator; // @synthesize translator=_translator;

+ (long long)isPredominatelyDownload;
- (void).cxx_destruct;
- (void)_getDeserializedRecords;
- (void)_getSerializedRequest;
- (void)_invokeFunction;
- (void)_invokeLocalFunction;
- (void)_postflightRecords;
- (void)_preflightRecords;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (int)operationType;

@end

