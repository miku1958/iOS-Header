//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdID/APSConnectionDelegate-Protocol.h>

@class APSConnection, NSString;
@protocol NSObject;

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate>
{
    BOOL _isConfigRequestInFlight;
    id<NSObject> _storeFrontNotifyToken;
    id<NSObject> _cloudKitNotifyToken;
    APSConnection *_pushConnection;
}

@property (strong, nonatomic) id<NSObject> cloudKitNotifyToken; // @synthesize cloudKitNotifyToken=_cloudKitNotifyToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isConfigRequestInFlight; // @synthesize isConfigRequestInFlight=_isConfigRequestInFlight;
@property (strong, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property (strong, nonatomic) id<NSObject> storeFrontNotifyToken; // @synthesize storeFrontNotifyToken=_storeFrontNotifyToken;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)currentBundleID;
- (void)dealloc;
- (BOOL)deviceUnlockedOnce;
- (void)forceExpiration;
- (void)handleAccountChange;
- (void)handleConfiguration;
- (id)init;
- (BOOL)isAdEnabledLocality;
- (BOOL)purpleBuddyWillRun;
- (void)pushDisable;
- (void)pushEnable;
- (void)refreshConfiguration:(CDUnknownBlockType)arg1;
- (void)registerForLockStateNotification;
- (void)runOnFirstUnlock:(CDUnknownBlockType)arg1;

@end

