//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperation : CKOperation
{
    BOOL _moreComing;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    CDUnknownBlockType _notificationChangedBlock;
    CDUnknownBlockType _fetchNotificationChangesCompletionBlock;
    CKServerChangeToken *_resultServerChangeToken;
}

@property (copy, nonatomic) CDUnknownBlockType fetchNotificationChangesCompletionBlock; // @synthesize fetchNotificationChangesCompletionBlock=_fetchNotificationChangesCompletionBlock;
@property (nonatomic) BOOL moreComing; // @synthesize moreComing=_moreComing;
@property (copy, nonatomic) CDUnknownBlockType notificationChangedBlock; // @synthesize notificationChangedBlock=_notificationChangedBlock;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property (strong, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (void)performCKOperation;

@end

