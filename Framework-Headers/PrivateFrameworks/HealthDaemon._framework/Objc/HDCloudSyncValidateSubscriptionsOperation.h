//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncOperation.h>

@interface HDCloudSyncValidateSubscriptionsOperation : HDCloudSyncOperation
{
    BOOL _includeSecondaryContainers;
}

@property (nonatomic) BOOL includeSecondaryContainers; // @synthesize includeSecondaryContainers=_includeSecondaryContainers;

- (id)_registerOperationForSubscriptions:(id)arg1 container:(id)arg2;
- (id)_subcriptionsToValidate;
- (void)main;

@end
