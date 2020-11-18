//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDNotificationServiceProtocol-Protocol.h>

@class NSHashTable, NSMutableDictionary;
@protocol ASDNotificationCenterDialogObserver, OS_dispatch_queue;

@interface ASDNotificationCenter : NSObject <ASDNotificationServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_notificationObservers;
    struct os_unfair_lock_s _observerLock;
    NSHashTable *_progressObservers;
    id<ASDNotificationCenterDialogObserver> _dialogObserver;
}

@property (weak) id<ASDNotificationCenterDialogObserver> dialogObserver; // @synthesize dialogObserver=_dialogObserver;

+ (id)defaultCenter;
+ (id)interface;
- (void).cxx_destruct;
- (void)addNotificationObserver:(id)arg1 forName:(id)arg2;
- (void)addProgressObserver:(id)arg1;
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)deliverNotifications:(id)arg1;
- (void)deliverProgress:(id)arg1;
- (id)init;
- (void)removeNotificationObserver:(id)arg1 forName:(id)arg2;
- (void)removeProgressObserver:(id)arg1;

@end
