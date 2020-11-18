//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/UNSNotificationServiceExtensionSessionDelegate-Protocol.h>

@class NSExtension, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface UNSNotificationServiceExtension : NSObject <UNSNotificationServiceExtensionSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSExtension *_extension;
    NSMutableDictionary *_sessionBySessionUUID;
}

+ (void)extensionForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)_initWithExtension:(id)arg1;
- (void)_setSession:(id)arg1 forSessionUUID:(id)arg2;
- (void)_setupExtension;
- (id)_takeSessionForSessionUUID:(id)arg1;
- (void)beginSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)proxy;
- (void)session:(id)arg1 wasCancelledWithError:(id)arg2;

@end

