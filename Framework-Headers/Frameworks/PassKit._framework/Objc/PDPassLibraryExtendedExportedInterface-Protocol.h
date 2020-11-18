//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDPassLibraryInAppExportedInterface-Protocol.h>

@class CLLocation, NSArray, NSString, PKCatalog, PKContact, PKDisplayProfile, PKFieldProperties, PKPass;

@protocol PDPassLibraryExtendedExportedInterface <PDPassLibraryInAppExportedInterface>
- (void)enabledValueAddedServicePassesWithHandler:(void (^)(NSArray *))arg1;
- (void)fetchCurrentRelevantPassInfo:(void (^)(NSArray *))arg1;
- (void)fetchHasCandidatePasses:(void (^)(BOOL))arg1;
- (void)getArchivedObjectWithUniqueID:(NSString *)arg1 handler:(void (^)(NSData *))arg2;
- (void)getDiffForPassUpdateUserNotificationWithIdentifier:(NSString *)arg1 handler:(void (^)(PKDiff *))arg2;
- (void)getImageSetContainerForUniqueID:(NSString *)arg1 ofType:(long long)arg2 displayProfile:(PKDisplayProfile *)arg3 handler:(void (^)(PKImageSetXPCContainer *))arg4;
- (void)getPassUniqueIdentifiersForFieldProperties:(PKFieldProperties *)arg1 handler:(void (^)(NSArray *))arg2;
- (void)getPassesWithUniqueIdentifiers:(NSArray *)arg1 handler:(void (^)(NSArray *))arg2;
- (void)getRouteRelevantPassesForLocation:(CLLocation *)arg1 handler:(void (^)(NSArray *, NSDictionary *))arg2;
- (void)introduceDatabaseIntegrityProblem;
- (void)isPassbookVisibleWithHandler:(void (^)(BOOL))arg1;
- (void)isRemovingPassesOfType:(unsigned long long)arg1 handler:(void (^)(BOOL))arg2;
- (void)issueWalletUserNotificationWithTitle:(NSString *)arg1 message:(NSString *)arg2 forPassUniqueIdentifier:(NSString *)arg3 customActionRoute:(NSString *)arg4;
- (void)logDelayExitReasons;
- (void)noteAccountChangedWithHandler:(void (^)(void))arg1;
- (void)noteAccountDeletedWithHandler:(void (^)(void))arg1;
- (void)noteObjectSharedWithUniqueID:(NSString *)arg1;
- (void)notifyPassUsed:(PKPass *)arg1 fromSource:(long long)arg2;
- (void)nukeDatabaseAndExit;
- (void)openPaymentUIWithCompletion:(void (^)(BOOL))arg1;
- (void)openWalletUIWithRelevantPass:(NSString *)arg1;
- (void)personalizePassWithUniqueIdentifier:(NSString *)arg1 contact:(PKContact *)arg2 personalizationToken:(NSString *)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(void (^)(BOOL))arg6;
- (void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 handler:(void (^)(BOOL))arg2;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(NSString *)arg1 fromSource:(long long)arg2 handler:(void (^)(BOOL))arg3;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)removeAllScheduledActivities;
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)requestContactlessInterfaceSuppressionWithHandler:(void (^)(BOOL))arg1;
- (void)rescheduleCommutePlanRenewalReminderForPassWithUniqueID:(NSString *)arg1;
- (void)sendUserEditedCatalog:(PKCatalog *)arg1;
- (void)shuffleGroups:(int)arg1;
- (void)updateObjectWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(BOOL))arg2;
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(NSString *)arg2;
@end

