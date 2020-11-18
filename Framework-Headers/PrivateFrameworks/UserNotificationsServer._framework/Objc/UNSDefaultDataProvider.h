//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/BBRemoteDataProvider-Protocol.h>
#import <UserNotificationsServer/UNSNotificationRepositoryObserver-Protocol.h>

@class BBDataProviderProxy, BSCFBundle, NSMutableDictionary, NSString, NSURL, UNSApplicationLauncher, UNSAttachmentsService, UNSNotificationCategoryRepository, UNSNotificationRepository;
@protocol OS_dispatch_queue;

@interface UNSDefaultDataProvider : NSObject <UNSNotificationRepositoryObserver, BBRemoteDataProvider>
{
    NSString *_sectionID;
    NSString *_displayName;
    BSCFBundle *_appBundle;
    NSURL *_dataContainerURL;
    UNSApplicationLauncher *_appLauncher;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSAttachmentsService *_attachmentsService;
    BBDataProviderProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_primaryAttachments;
    NSMutableDictionary *_primaryAttachmentMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) BBDataProviderProxy *proxy; // @synthesize proxy=_proxy;
@property (readonly) Class superclass;

+ (struct CGSize)_sizeFromSizeConstraint:(id)arg1 originalSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (long long)_BBActionBehaviorForUNAction:(id)arg1;
- (id)_BBActionBehaviorParametersForUNAction:(id)arg1;
- (id)_BBActionFromUIUserNotificationAction:(id)arg1;
- (id)_BBActionsFromUIUserNotificationActions:(id)arg1;
- (unsigned long long)_BBActivationModeForUNAction:(id)arg1;
- (id)_UNActionsForCompactLayoutForCategory:(id)arg1;
- (id)_UNActionsForNormalLayoutForCategory:(id)arg1;
- (id)_actionsForCompactLayoutForCategory:(id)arg1;
- (id)_actionsForNormalLayoutForCategory:(id)arg1;
- (void)_addAttachments:(id)arg1 toBulletinRequest:(id)arg2;
- (id)_allBulletinsWithMaxCount:(unsigned long long)arg1 sinceDate:(id)arg2;
- (BOOL)_allowInCarPlayForCategoryIdentifier:(id)arg1;
- (id)_categoryForIdentifier:(id)arg1;
- (id)_defaultActionWithTitle:(id)arg1;
- (unsigned long long)_destinationsForNotification:(id)arg1;
- (id)_dismissActionForCategory:(id)arg1;
- (void)_handleBulletinActionResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_isAuthenticationRequiredForUNAction:(id)arg1;
- (BOOL)_isDestructiveForUNAction:(id)arg1;
- (BOOL)_isPushDataProvider;
- (BOOL)_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2;
- (void)_logNotification:(id)arg1;
- (id)_pathForSoundName:(id)arg1;
- (void)_queue_addBulletinForNotification:(id)arg1;
- (id)_queue_bulletinForNotification:(id)arg1;
- (void)_queue_modifyBulletinForNotification:(id)arg1;
- (void)_queue_notificationRepositoryDidPerformUpdates:(id)arg1;
- (void)_queue_withdrawBulletinForNotification:(id)arg1;
- (void)_setBadgeForNotification:(id)arg1;
- (id)_sortKey;
- (id)_unachiveNotificationFromData:(id)arg1;
- (float)attachmentAspectRatioForRecordID:(id)arg1;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)defaultSectionInfo;
- (void)handleBulletinActionResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithApplicationDescription:(id)arg1 applicationLauncher:(id)arg2 categoryRepository:(id)arg3 notificationRepository:(id)arg4 attachmentsService:(id)arg5 queue:(id)arg6;
- (void)invalidate;
- (void)noteSectionInfoDidChange:(id)arg1;
- (id)notificationRecords;
- (void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;
- (id)primaryAttachmentDataForRecordID:(id)arg1;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (id)sortDescriptors;
- (BOOL)syncsBulletinDismissal;
- (void)uninstall;

@end

