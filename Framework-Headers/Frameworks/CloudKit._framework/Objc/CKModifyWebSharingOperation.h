//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

#import <CloudKit/CKModifyWebSharingOperationCallbacks-Protocol.h>

@class CKModifyWebSharingOperationInfo, NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKModifyWebSharingOperationCallbacks;

@interface CKModifyWebSharingOperation : CKDatabaseOperation <CKModifyWebSharingOperationCallbacks>
{
    CDUnknownBlockType _recordSharedBlock;
    CDUnknownBlockType _recordUnsharedBlock;
    CDUnknownBlockType _webShareRecordsCompletionBlock;
    NSArray *_recordIDsToShareReadWrite;
    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToUnshare;
    NSMutableDictionary *_recordErrors;
    NSMutableArray *_sharedRecordIDs;
    NSMutableArray *_unsharedRecordIDs;
}

@property (readonly, nonatomic) id<CKModifyWebSharingOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyWebSharingOperationInfo *operationInfo; // @dynamic operationInfo;
@property (strong, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property (strong, nonatomic) NSArray *recordIDsToShare; // @synthesize recordIDsToShare=_recordIDsToShare;
@property (copy, nonatomic) NSArray *recordIDsToShareReadWrite; // @synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite;
@property (strong, nonatomic) NSArray *recordIDsToUnshare; // @synthesize recordIDsToUnshare=_recordIDsToUnshare;
@property (copy, nonatomic) CDUnknownBlockType recordSharedBlock; // @synthesize recordSharedBlock=_recordSharedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordUnsharedBlock; // @synthesize recordUnsharedBlock=_recordUnsharedBlock;
@property (strong, nonatomic) NSMutableArray *sharedRecordIDs; // @synthesize sharedRecordIDs=_sharedRecordIDs;
@property (strong, nonatomic) NSMutableArray *unsharedRecordIDs; // @synthesize unsharedRecordIDs=_unsharedRecordIDs;
@property (copy, nonatomic) CDUnknownBlockType webShareRecordsCompletionBlock; // @synthesize webShareRecordsCompletionBlock=_webShareRecordsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleWebSharingInitiationForRecordID:(id)arg1 sharingKey:(id)arg2 baseSharingToken:(id)arg3 error:(id)arg4;
- (void)handleWebSharingRevocationForRecordID:(id)arg1 error:(id)arg2;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithRecordIDsToWebShare:(id)arg1 recordIDsToUnshare:(id)arg2;
- (void)performCKOperation;

@end
