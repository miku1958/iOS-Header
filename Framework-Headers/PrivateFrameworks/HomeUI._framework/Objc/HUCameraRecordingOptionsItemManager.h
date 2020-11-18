//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUCameraRecordingSettingsModuleDelegate-Protocol.h>

@class HUCameraRecordingSettingsModule, NSString;

@interface HUCameraRecordingOptionsItemManager : HFItemManager <HUCameraRecordingSettingsModuleDelegate>
{
    HUCameraRecordingSettingsModule *_cameraRecordingItemModule;
}

@property (strong, nonatomic) HUCameraRecordingSettingsModule *cameraRecordingItemModule; // @synthesize cameraRecordingItemModule=_cameraRecordingItemModule;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)cameraRecordingSettingsModule:(id)arg1 didUpdateItem:(id)arg2;

@end
