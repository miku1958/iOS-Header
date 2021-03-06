//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/BBRemoteDataProvider-Protocol.h>
#import <UserNotificationsServer/UNSNotificationCategoryRepositoryObserver-Protocol.h>
#import <UserNotificationsServer/UNSNotificationRepositoryObserver-Protocol.h>
#import <UserNotificationsServer/UNSNotificationTopicRepositoryObserver-Protocol.h>

@class BBDataProviderProxy, BBSectionIcon, BBSectionInfo, BSCFBundle, NSMutableDictionary, NSString, UNSApplicationLauncher, UNSAttachmentsService, UNSDaemonLauncher, UNSLocalizationService, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationSourceDescription, UNSNotificationTopicRepository;
@protocol OS_dispatch_queue;

@interface UNSDefaultDataProvider : NSObject <UNSNotificationRepositoryObserver, UNSNotificationCategoryRepositoryObserver, UNSNotificationTopicRepositoryObserver, BBRemoteDataProvider>
{
    BBSectionIcon *_sectionIcon;
    BBSectionInfo *_effectiveSectionInfo;
    BSCFBundle *_bundle;
    BOOL _suppressUserAuthorizationPrompt;
    UNSNotificationSourceDescription *_notificationSourceDescription;
    UNSApplicationLauncher *_appLauncher;
    UNSDaemonLauncher *_daemonLauncher;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSAttachmentsService *_attachmentsService;
    UNSLocalizationService *_localizationService;
    BBDataProviderProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_categoryToParamSubType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) BBDataProviderProxy *proxy; // @synthesize proxy=_proxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionFromActionRecord:(id)arg1;
- (id)_actionsFromActionRecords:(id)arg1;
- (void)_addAttachments:(id)arg1 toBulletinRequest:(id)arg2;
- (id)_allBulletinsWithMaxCount:(unsigned long long)arg1 sinceDate:(id)arg2;
- (id)_allCategories;
- (id)_categoryForIdentifier:(id)arg1;
- (id)_defaultActionWithNotification:(id)arg1;
- (id)_dismissActionForCategory:(id)arg1;
- (void)_handleBulletinActionResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2;
- (id)_localizeClientString:(id)arg1 inBundle:(id)arg2;
- (id)_pathForSoundName:(id)arg1;
- (void)_queue_addBulletinForNotification:(id)arg1;
- (id)_queue_applicableSectionInfosForSubsectionIDs:(id)arg1;
- (id)_queue_bulletinForNotification:(id)arg1;
- (void)_queue_modifyBulletinForNotification:(id)arg1;
- (void)_queue_notificationRepositoryDidPerformUpdates:(id)arg1;
- (BOOL)_queue_supportsCriticalAlertsForSubsectionIDs:(id)arg1;
- (void)_queue_withdrawBulletinForNotification:(id)arg1;
- (id)_sectionIconForNotificationSourceDescription:(id)arg1;
- (id)_sectionIconVariantForImageName:(id)arg1 bundlePath:(id)arg2 format:(long long)arg3 precomposed:(BOOL)arg4;
- (void)_setNotificationSourceDescription:(id)arg1;
- (id)_silenceActionForCategory:(id)arg1;
- (id)_soundsDirectoryPathForContainerBasePath:(id)arg1;
- (id)_supplementaryActionsForForCategoryRecord:(id)arg1;
- (id)_topicForIdentifier:(id)arg1;
- (id)_unarchiveNotificationFromData:(id)arg1;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (void)categoryRepository:(id)arg1 didChangeCategoriesForBundleIdentifier:(id)arg2;
- (id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)defaultSectionInfo;
- (id)defaultSubsectionInfos;
- (id)displayNameForSubsectionID:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithNotificationSourceDescription:(id)arg1 applicationLauncher:(id)arg2 daemonLauncher:(id)arg3 categoryRepository:(id)arg4 notificationRepository:(id)arg5 topicRepository:(id)arg6 attachmentsService:(id)arg7 localizationService:(id)arg8 queue:(id)arg9;
- (void)invalidate;
- (id)notificationRecords;
- (void)notificationRepository:(id)arg1 didDiscoverContentOnFirstUnlockForBundleIdentifier:(id)arg2;
- (void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;
- (id)sectionDisplayName;
- (id)sectionIcon;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (void)setEffectiveSectionInfo:(id)arg1;
- (void)setNotificationSourceDescription:(id)arg1;
- (id)sortDescriptors;
- (BOOL)syncsBulletinDismissal;
- (void)topicRepository:(id)arg1 didChangeTopicsForBundleIdentifier:(id)arg2;
- (void)uninstall;
- (id)universalSectionIdentifier;

@end

