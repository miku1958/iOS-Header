//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifySharesOperation : CKDatabaseOperation
{
    NSArray *_sharesToSave;
    NSArray *_shareIDsToDelete;
    CDUnknownBlockType _modifySharesCompletionBlock;
    NSMutableDictionary *_savedSharesByShareID;
    NSMutableArray *_deletedShareIDs;
    NSMutableDictionary *_sharesByShareID;
    NSMutableDictionary *_shareErrorsByShareID;
}

@property (strong, nonatomic) NSMutableArray *deletedShareIDs; // @synthesize deletedShareIDs=_deletedShareIDs;
@property (copy, nonatomic) CDUnknownBlockType modifySharesCompletionBlock; // @synthesize modifySharesCompletionBlock=_modifySharesCompletionBlock;
@property (strong, nonatomic) NSMutableDictionary *savedSharesByShareID; // @synthesize savedSharesByShareID=_savedSharesByShareID;
@property (strong, nonatomic) NSMutableDictionary *shareErrorsByShareID; // @synthesize shareErrorsByShareID=_shareErrorsByShareID;
@property (strong, nonatomic) NSArray *shareIDsToDelete; // @synthesize shareIDsToDelete=_shareIDsToDelete;
@property (strong, nonatomic) NSMutableDictionary *sharesByShareID; // @synthesize sharesByShareID=_sharesByShareID;
@property (strong, nonatomic) NSArray *sharesToSave; // @synthesize sharesToSave=_sharesToSave;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithSharesToSave:(id)arg1 shareIDsToDelete:(id)arg2;
- (void)performCKOperation;

@end

