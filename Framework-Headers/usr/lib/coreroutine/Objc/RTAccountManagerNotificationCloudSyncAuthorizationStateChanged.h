//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@interface RTAccountManagerNotificationCloudSyncAuthorizationStateChanged : RTNotification
{
    long long _cloudSyncAuthorizationState;
}

@property (readonly, nonatomic) long long cloudSyncAuthorizationState; // @synthesize cloudSyncAuthorizationState=_cloudSyncAuthorizationState;

- (id)initWithCloudSyncAuthorizationState:(long long)arg1;

@end

