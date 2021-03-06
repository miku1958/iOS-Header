//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKServerChangeToken;
@protocol CKFetchNotificationChangesOperationCallbacks;

__attribute__((visibility("hidden")))
@interface CKDFetchNotificationChangesOperation : CKDOperation
{
    BOOL _moreComing;
    BOOL _wantsChanges;
    CDUnknownBlockType _notificationChangedBlock;
    CKServerChangeToken *_resultServerChangeToken;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
}

@property (strong, nonatomic) id<CKFetchNotificationChangesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (nonatomic) BOOL moreComing; // @synthesize moreComing=_moreComing;
@property (copy, nonatomic) CDUnknownBlockType notificationChangedBlock; // @synthesize notificationChangedBlock=_notificationChangedBlock;
@property (strong, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property (strong, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property (nonatomic) BOOL wantsChanges; // @synthesize wantsChanges=_wantsChanges;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchChangesRequestFinished:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (int)operationType;

@end

