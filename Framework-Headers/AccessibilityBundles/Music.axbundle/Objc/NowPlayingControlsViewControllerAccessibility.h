//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__NowPlayingControlsViewControllerAccessibility_super.h"

@interface NowPlayingControlsViewControllerAccessibility : __NowPlayingControlsViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityLeftButtonLabelString;
- (id)_accessibilityLeftbuttonValueString;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityPlayPauseButtonString;
- (void)_axAudioRouteNameCommandChanged:(id)arg1;
- (id)_axLikedBannedValueForState:(long long)arg1;
- (void)_axLikedStateCommandChanged:(id)arg1;
- (void)_axMediaRemoteCommandChanged:(id)arg1;
- (id)_axTrackList;
- (BOOL)accessibilityPerformEscape;
- (BOOL)axAudioRouteNotificationRegistered;
- (BOOL)axLikedStateNotificationRegistered;
- (BOOL)axMediaCommandNotificationRegistered;
- (void)axSetAudioRouteNotificationRegistered:(BOOL)arg1;
- (void)axSetLikedStateNotificationRegistered:(BOOL)arg1;
- (void)axSetMediaCommandNotificationRegistered:(BOOL)arg1;
- (void)viewDidLoad;

@end

