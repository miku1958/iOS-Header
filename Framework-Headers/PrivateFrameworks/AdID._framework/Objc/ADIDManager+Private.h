//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADIDManager.h>

#import <AdID/BackgroundTaskDelegate-Protocol.h>

@class NSString;

@interface ADIDManager (Private) <BackgroundTaskDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (void)cancelPendingReconcile;
- (void)checkOnTask:(id)arg1 activity:(id)arg2;
- (void)deleteRecords:(CDUnknownBlockType)arg1;
- (void)finishedReconciling:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)handleAccountChange:(CDUnknownBlockType)arg1;
- (void)handleIDFAReset:(CDUnknownBlockType)arg1;
- (void)incrementMonthlyResetCount;
- (id)init;
- (void)notifyActiveRecordChanged;
- (void)prepareForPushNotification;
- (void)reconcile:(CDUnknownBlockType)arg1;
- (BOOL)reconcileInProgress;
- (void)resumeSaveNotificationsAndShouldNotify:(BOOL)arg1;
- (BOOL)runTask:(id)arg1;
- (void)save:(CDUnknownBlockType)arg1;
- (BOOL)scheduleReconciliation:(double)arg1;
- (void)setDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)suspendSaveNotifications;
- (void)updateAccountData:(CDUnknownBlockType)arg1;
@end

