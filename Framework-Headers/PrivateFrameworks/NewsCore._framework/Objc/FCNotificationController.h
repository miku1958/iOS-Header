//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCUserInfoObserving-Protocol.h>

@class FCCommandQueue, FCUserInfo, NSString;

@interface FCNotificationController : NSObject <FCUserInfoObserving>
{
    NSString *_notificationsUserID;
    NSString *_deviceToken;
    FCUserInfo *_userInfo;
    FCCommandQueue *_commandQueue;
}

@property (strong, nonatomic) FCCommandQueue *commandQueue; // @synthesize commandQueue=_commandQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *notificationsUserID; // @synthesize notificationsUserID=_notificationsUserID;
@property (readonly) Class superclass;
@property (strong, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (void)_registerDeviceToken:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithUserInfo:(id)arg1 commandQueue:(id)arg2;
- (BOOL)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2;
- (void)registerDeviceToken:(id)arg1;
- (BOOL)registerNotificationsForTagID:(id)arg1 isPaid:(BOOL)arg2;
- (BOOL)unregisterNotificationsForTagID:(id)arg1;
- (void)userInfoDidChangeNotificationsUserID:(id)arg1;

@end

