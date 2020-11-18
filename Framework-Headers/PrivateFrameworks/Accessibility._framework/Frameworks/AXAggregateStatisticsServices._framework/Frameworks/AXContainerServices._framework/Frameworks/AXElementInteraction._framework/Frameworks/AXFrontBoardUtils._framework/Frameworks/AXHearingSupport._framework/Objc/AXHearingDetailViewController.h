//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class AXRemoteHearingAidDevice;

@interface AXHearingDetailViewController : PSListController
{
    BOOL _isLiveListening;
    AXRemoteHearingAidDevice *_device;
}

@property (strong, nonatomic) AXRemoteHearingAidDevice *device; // @synthesize device=_device;

- (void).cxx_destruct;
- (id)_combinedProgramSpecifiers;
- (id)_leftProgramSpecifiers;
- (id)_mergeLeftAndRightPrograms;
- (id)_programSpecifiers;
- (void)_reloadProgramSpecifiers;
- (id)_rightProgramSpecifiers;
- (void)_updatePrograms:(id)arg1 atLocation:(long long)arg2;
- (id)_volumeSpecifiers;
- (void)dealloc;
- (id)deviceSpecifiers;
- (id)disconnectedSpecifiers;
- (id)init;
- (void)liveListenToggle:(id)arg1;
- (struct _NSRange)programRangeForPresetId:(id)arg1;
- (id)programSpecFromAvailablePrograms:(id)arg1 modeGroupSpec:(id)arg2;
- (struct _NSRange)programsRange;
- (void)selectCommonProgramsForLeftAndRightDevices;
- (id)specifierForKey:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateLiveListenCell:(id)arg1;
- (void)updateLiveListenWithState:(BOOL)arg1 andLevel:(double)arg2;
- (void)updateView;
- (void)viewDidDisappear:(BOOL)arg1;

@end
