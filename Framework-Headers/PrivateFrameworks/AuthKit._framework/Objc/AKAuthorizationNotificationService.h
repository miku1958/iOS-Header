//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject
{
    AKAdaptiveService *_service;
    NSXPCListenerEndpoint *_daemonEndpoint;
}

+ (id)_sharedService;
+ (void)startServiceWithNotificationHandler:(id)arg1;
+ (void)startServiceWithStateBroadcastHandler:(id)arg1;
- (void).cxx_destruct;
- (void)_configureNotificationService;
- (void)_configureStateBroadcastService;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (void)startWithNotificationHandler:(id)arg1;
- (void)startWithStateBroadcastHandler:(id)arg1;

@end

