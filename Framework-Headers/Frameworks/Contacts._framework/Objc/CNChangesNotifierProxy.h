//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNChangeNotificationReceiver-Protocol.h>

@class NSCountedSet, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CNChangesNotifierProxy : NSObject <CNChangeNotificationReceiver>
{
    BOOL forwardsSelfGeneratedDistributedSaveNotifications;
    NSMapTable *_removalBlocks;
    NSMapTable *_notifyingBlocks;
    NSMutableDictionary *_notificationForwardingMapping;
    NSCountedSet *_supressedNotificationNames;
    NSMutableDictionary *_notificationsToBeSentOnceAllowed;
    NSObject<OS_dispatch_queue> *_notifierQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forwardsSelfGeneratedDistributedSaveNotifications; // @synthesize forwardsSelfGeneratedDistributedSaveNotifications;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableDictionary *notificationForwardingMapping; // @synthesize notificationForwardingMapping=_notificationForwardingMapping;
@property (strong, nonatomic) NSMutableDictionary *notificationsToBeSentOnceAllowed; // @synthesize notificationsToBeSentOnceAllowed=_notificationsToBeSentOnceAllowed;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *notifierQueue; // @synthesize notifierQueue=_notifierQueue;
@property (strong, nonatomic) NSMapTable *notifyingBlocks; // @synthesize notifyingBlocks=_notifyingBlocks;
@property (strong, nonatomic) NSMapTable *removalBlocks; // @synthesize removalBlocks=_removalBlocks;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSCountedSet *supressedNotificationNames; // @synthesize supressedNotificationNames=_supressedNotificationNames;

- (void)addListenerForNotificationName:(id)arg1 registration:(CDUnknownBlockType)arg2 removal:(CDUnknownBlockType)arg3;
- (void)addNotificationPoster:(CDUnknownBlockType)arg1 forNotificationName:(id)arg2;
- (void)dealloc;
- (void)forwardNotificationName:(id)arg1 asNotificationName:(id)arg2;
- (id)init;
- (void)postNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 isFromExternalProcess:(BOOL)arg4;
- (void)postNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 shouldForwardExternally:(BOOL)arg5 calledFromNotifierQueue:(BOOL)arg6 isFromExternalProcess:(BOOL)arg7;
- (void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 calledFromNotifierQueue:(BOOL)arg5 isFromExternalProcess:(BOOL)arg6;
- (void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 isFromExternalProcess:(BOOL)arg5;
- (void)removeAllRegisteredNotificationSources;
- (void)stopSupressionOfNotificationName:(id)arg1;
- (void)supressNotificationName:(id)arg1;
- (void)waitForCurrentTasksToFinish;

@end
