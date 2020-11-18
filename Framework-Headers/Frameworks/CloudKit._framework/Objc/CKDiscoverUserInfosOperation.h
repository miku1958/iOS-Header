//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDiscoverUserInfosOperation : CKOperation
{
    NSArray *_emailAddresses;
    NSArray *_userRecordIDs;
    CDUnknownBlockType _discoverUserInfosCompletionBlock;
    NSMutableDictionary *_emailsToUserInfos;
    NSMutableDictionary *_userRecordIDsToUserInfos;
}

@property (copy, nonatomic) CDUnknownBlockType discoverUserInfosCompletionBlock; // @synthesize discoverUserInfosCompletionBlock=_discoverUserInfosCompletionBlock;
@property (copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property (strong, nonatomic) NSMutableDictionary *emailsToUserInfos; // @synthesize emailsToUserInfos=_emailsToUserInfos;
@property (copy, nonatomic) NSArray *userRecordIDs; // @synthesize userRecordIDs=_userRecordIDs;
@property (strong, nonatomic) NSMutableDictionary *userRecordIDsToUserInfos; // @synthesize userRecordIDsToUserInfos=_userRecordIDsToUserInfos;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setLongLived:(BOOL)arg1;

@end
