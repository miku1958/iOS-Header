//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__AVPlaybackControlsControllerAccessibility_super.h"

@interface AVPlaybackControlsControllerAccessibility : __AVPlaybackControlsControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_axPlayerControllerIsMuted;
- (BOOL)_axShowVolumeSlider;
- (void)_axUpdateVolumeButtonLabel;
- (void)_updateVolumeButtonGlyph;
- (void)playbackControlsViewDidLoad:(id)arg1;
- (void)playbackControlsVisibilityDidChange;
- (void)volumeButtonTapTriggered:(id)arg1;

@end
