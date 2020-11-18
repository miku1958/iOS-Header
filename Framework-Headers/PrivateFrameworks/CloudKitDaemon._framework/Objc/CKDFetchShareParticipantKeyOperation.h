//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol CKFetchShareParticipantKeyOperationCallbacks;

__attribute__((visibility("hidden")))
@interface CKDFetchShareParticipantKeyOperation : CKDDatabaseOperation
{
    BOOL _hasAttemptedShareUpdate;
    CDUnknownBlockType _shareParticipantKeyFetchedBlock;
    NSMutableArray *_shareIDs;
    NSDictionary *_baseTokensByShareID;
    NSDictionary *_childRecordIDsByShareID;
    NSMutableDictionary *_sharesNeedingUpdateByID;
}

@property (strong, nonatomic) NSDictionary *baseTokensByShareID; // @synthesize baseTokensByShareID=_baseTokensByShareID;
@property (strong, nonatomic) NSDictionary *childRecordIDsByShareID; // @synthesize childRecordIDsByShareID=_childRecordIDsByShareID;
@property (strong, nonatomic) id<CKFetchShareParticipantKeyOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (nonatomic) BOOL hasAttemptedShareUpdate; // @synthesize hasAttemptedShareUpdate=_hasAttemptedShareUpdate;
@property (strong, nonatomic) NSMutableArray *shareIDs; // @synthesize shareIDs=_shareIDs;
@property (copy, nonatomic) CDUnknownBlockType shareParticipantKeyFetchedBlock; // @synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock;
@property (strong, nonatomic) NSMutableDictionary *sharesNeedingUpdateByID; // @synthesize sharesNeedingUpdateByID=_sharesNeedingUpdateByID;
@property (nonatomic) unsigned long long state; // @dynamic state;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchedShare:(id)arg1 withID:(id)arg2 error:(id)arg3;
- (id)_participantKeyFromShare:(id)arg1 withError:(id *)arg2;
- (void)_performCallbackForShareID:(id)arg1 withParticipantKey:(id)arg2 error:(id)arg3;
- (void)_sendErrorForFailedShares;
- (id)activityCreate;
- (void)fetchSharesFromServer;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (void)updateShares;

@end
