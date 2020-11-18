//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/BBObserverDelegate-Protocol.h>

@class BBObserver, BBSettingsGateway, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface UNSSettingsGateway : NSObject <BBObserverDelegate>
{
    NSMutableArray *_observers;
    BBSettingsGateway *_settingsGateway;
    BBObserver *_settingsObserver;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_addObserver:(id)arg1;
- (id)_queue_allEffectiveSectionInfos;
- (id)_queue_allSectionInfos;
- (id)_queue_effectiveSectionInfoForSectionID:(id)arg1;
- (id)_queue_effectiveSectionInfosForSectionIDs:(id)arg1;
- (void)_queue_getSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (long long)_queue_globalContentPreviewSetting;
- (long long)_queue_globalSpokenNotificationSetting;
- (void)_queue_removeObserver:(id)arg1;
- (id)_queue_sectionInfoForSectionID:(id)arg1;
- (id)_queue_sectionInfosForSectionIDs:(id)arg1;
- (void)_queue_setGlobalContentPreviewSetting:(long long)arg1;
- (void)_queue_setGlobalSpokenNotificationSetting:(long long)arg1;
- (void)_queue_setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)allEffectiveSectionInfo;
- (id)allSectionInfo;
- (void)dealloc;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (id)effectiveSectionInfoForSectionIDs:(id)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (long long)globalContentPreviewSetting;
- (long long)globalSpokenNotificationSetting;
- (id)init;
- (void)observer:(id)arg1 updateGlobalSettings:(id)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)sectionInfoForSectionID:(id)arg1;
- (id)sectionInfoForSectionIDs:(id)arg1;
- (void)setGlobalContentPreviewSetting:(long long)arg1;
- (void)setGlobalSpokenNotificationSetting:(long long)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;

@end
