//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDistributedNotificationCenter, NSString;
@protocol VSRemoteNotifierDelegate;

__attribute__((visibility("hidden")))
@interface VSRemoteNotifier : NSObject
{
    NSString *_remoteNotificationName;
    id<VSRemoteNotifierDelegate> _delegate;
    NSString *_notificationObject;
    NSDistributedNotificationCenter *_distributedNotificationCenter;
}

@property (weak, nonatomic) id<VSRemoteNotifierDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter; // @synthesize distributedNotificationCenter=_distributedNotificationCenter;
@property (copy, nonatomic) NSString *notificationObject; // @synthesize notificationObject=_notificationObject;
@property (readonly, copy, nonatomic) NSString *remoteNotificationName; // @synthesize remoteNotificationName=_remoteNotificationName;

+ (id)_currentProcessIdentifier;
- (void).cxx_destruct;
- (void)_didReceiveDistributedNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNotificationName:(id)arg1;
- (void)postNotification;
- (void)postNotificationWithUserInfo:(id)arg1;

@end

