//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTSectionInfoListProviderDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol BLTSectionInfoListDelegate, BLTSectionInfoListProvider;

@interface BLTSectionInfoList : NSObject <BLTSectionInfoListProviderDelegate>
{
    NSMutableDictionary *_sectionInfoListItemsBySectionID;
    struct _opaque_pthread_mutex_t _lock;
    id<BLTSectionInfoListDelegate> _delegate;
    id<BLTSectionInfoListProvider> _overrideProvider;
    id<BLTSectionInfoListProvider> _sectionInfoProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BLTSectionInfoListDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<BLTSectionInfoListProvider> overrideProvider; // @synthesize overrideProvider=_overrideProvider;
@property (strong, nonatomic) id<BLTSectionInfoListProvider> sectionInfoProvider; // @synthesize sectionInfoProvider=_sectionInfoProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_migrateFromExternalDeviceSwitchToOverrides:(id)arg1;
- (void)dealloc;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (id)init;
- (id)originalSettings;
- (id)overriddenSectionInfoForSectionID:(id)arg1;
- (id)overriddenSettings;
- (id)overrides;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (id)sectionIDs;
- (id)sectionInfoForSectionID:(id)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;
- (void)updateOverrides:(id)arg1 forSectionID:(id)arg2;
- (void)updateSectionInfo:(id)arg1 withUniversalSectionID:(id)arg2 displayName:(id)arg3;

@end
