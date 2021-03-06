//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol CKFetchUserQuotaOperationCallbacks;

__attribute__((visibility("hidden")))
@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation
{
    unsigned long long _quotaAvailable;
}

@property (strong, nonatomic) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (nonatomic) unsigned long long quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (int)operationType;

@end

