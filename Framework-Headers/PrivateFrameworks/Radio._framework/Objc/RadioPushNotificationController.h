//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/APSConnectionDelegate-Protocol.h>

@class APSConnection, NSString;
@protocol RadioPushNotificationControllerDelegate;

@interface RadioPushNotificationController : NSObject <APSConnectionDelegate>
{
    APSConnection *_connection;
    id<RadioPushNotificationControllerDelegate> _delegate;
    NSString *_environment;
    BOOL _notificationsEnabled;
    BOOL _pushEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RadioPushNotificationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadURLBagWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_portNameForEnvironmentName:(id)arg1;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (id)init;

@end

