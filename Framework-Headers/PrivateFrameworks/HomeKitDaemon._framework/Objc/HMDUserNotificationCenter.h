//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>
#import <HomeKitDaemon/UNUserNotificationCenterDelegate-Protocol.h>

@class HMDHomeManager, NSMutableDictionary, NSString, UNUserNotificationCenter;

@interface HMDUserNotificationCenter : HMFObject <NSSecureCoding, UNUserNotificationCenterDelegate>
{
    HMDHomeManager *_homeManager;
    UNUserNotificationCenter *_userNotificationCenter;
    NSMutableDictionary *_notificationRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (readonly) NSMutableDictionary *notificationRequests; // @synthesize notificationRequests=_notificationRequests;
@property (readonly) Class superclass;
@property (readonly) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_removeRequestWithIdentifier:(id)arg1;
- (void)_removeRequestWithIdentifiersFromNotificationCenter:(id)arg1;
- (void)_showNotification:(id)arg1;
- (void)configureHomeManager:(id)arg1;
- (id)createNotificationAttachmentWithIdentifier:(id)arg1 forFileAtPath:(id)arg2;
- (void)cullBulletinsToCount:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserNotificationCenter:(id)arg1;
- (id)insertRequestWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 requestIdentifier:(id)arg4 date:(id)arg5 bulletinType:(unsigned long long)arg6 actionURL:(id)arg7 bulletinContext:(id)arg8 actionContext:(id)arg9;
- (id)notificationCategories;
- (void)registerNotificationCategories;
- (void)removeRequestWithIdentifier:(id)arg1;
- (void)setBadgeNumber:(id)arg1;
- (id)showNotificationWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3 categoryIdentifier:(id)arg4 requestIdentifier:(id)arg5 date:(id)arg6 attachments:(id)arg7 userInfo:(id)arg8 shouldIgnoreDoNotDisturb:(BOOL)arg9;
- (id)sortDescriptors;
- (id)sortedRequestsByDate;
- (void)updateContent:(id)arg1 forNotificationWithRequestIdentifier:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

