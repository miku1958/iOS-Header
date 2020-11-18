//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMDUIDialogPresenter : NSObject
{
    BOOL _selectedByPeerDevice;
    BOOL _peerDeviceAcceptedSelection;
    NSObject<OS_dispatch_queue> *_workQueue;
    struct __CFUserNotification *_currentNotification;
    id _currentContext;
    NSMutableArray *_pendingContexts;
    NSObject<OS_dispatch_semaphore> *_notificationSem;
}

@property (strong, nonatomic) id currentContext; // @synthesize currentContext=_currentContext;
@property (nonatomic) struct __CFUserNotification *currentNotification; // @synthesize currentNotification=_currentNotification;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *notificationSem; // @synthesize notificationSem=_notificationSem;
@property (nonatomic) BOOL peerDeviceAcceptedSelection; // @synthesize peerDeviceAcceptedSelection=_peerDeviceAcceptedSelection;
@property (strong, nonatomic) NSMutableArray *pendingContexts; // @synthesize pendingContexts=_pendingContexts;
@property (nonatomic) BOOL selectedByPeerDevice; // @synthesize selectedByPeerDevice=_selectedByPeerDevice;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)sharedUIDialogPresenter;
- (void).cxx_destruct;
- (BOOL)_addCurrentNotification:(struct __CFUserNotification *)arg1 withContext:(id)arg2;
- (BOOL)_addToPendingContext:(id)arg1;
- (void)_confirmAddUser:(id)arg1 toHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_confirmRemoveUser:(id)arg1 fromHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_isPendingContext:(id)arg1;
- (BOOL)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id *)arg4 withContext:(id)arg5;
- (BOOL)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id *)arg4 withContext:(id)arg5 selectedByPeerDevice:(BOOL *)arg6 timeout:(double)arg7;
- (BOOL)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 textField:(id *)arg3 withContext:(id)arg4;
- (BOOL)_removeCurrentNotification:(struct __CFUserNotification *)arg1 currentSelection:(BOOL)arg2 selectedByPeerDevice:(BOOL *)arg3 andContext:(id)arg4;
- (void)_requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)confirmAddUser:(id)arg1 toHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)confirmRemoveUser:(id)arg1 fromHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)confirmReportAccessory:(id)arg1 context:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dismissPendingDialogDueToPeerDeviceSelection:(BOOL)arg1 context:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dismissPendingDialogWithContext:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (void)requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

