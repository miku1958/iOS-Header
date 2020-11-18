//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVSystemController : NSObject
{
    struct AVSystemControllerPrivate *_priv;
}

+ (void)initialize;
+ (id)sharedAVSystemController;
- (BOOL)allowUserToExceedEUVolumeLimit;
- (id)attributeForKey:(id)arg1;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float *)arg3 affectedCategory:(id *)arg4;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)changeVolumeBy:(float)arg1 forCategory:(id)arg2;
- (BOOL)changeVolumeForAccessoryBy:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (BOOL)currentRouteHasVolumeControl;
- (void)dealloc;
- (BOOL)didCancelRoutePicking:(id)arg1;
- (BOOL)enablePortDiscovery:(BOOL)arg1;
- (BOOL)getActiveCategoryMuted:(BOOL *)arg1;
- (BOOL)getActiveCategoryMuted:(BOOL *)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2;
- (BOOL)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2 fallbackCategory:(id)arg3;
- (BOOL)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4;
- (BOOL)getPortDiscoveryEnabled;
- (BOOL)getVibeIntensity:(float *)arg1;
- (BOOL)getVolume:(float *)arg1 forCategory:(id)arg2;
- (BOOL)getVolumeForAccessory:(float *)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (void)handleServerDied;
- (id)init;
- (void)makeError:(id *)arg1 withDescription:(id)arg2 code:(int)arg3;
- (BOOL)okToNotifyFromThisThread;
- (id)pickableRoutesForCategory:(id)arg1;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (void)postEffectiveVolumeNotification:(void *)arg1;
- (void)postFullMuteDidChangeNotification:(void *)arg1;
- (id)routeForCategory:(id)arg1;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float *)arg3 affectedCategory:(id *)arg4;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (BOOL)setBTHFPRoute:(id)arg1 availableForVoicePrompts:(BOOL)arg2;
- (BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (BOOL)setVibeIntensityTo:(float)arg1;
- (BOOL)setVolumeForAccessoryTo:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (BOOL)setVolumeTo:(float)arg1 forCategory:(id)arg2;
- (BOOL)toggleActiveCategoryMuted;
- (BOOL)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2;
- (id)volumeCategoryForAudioCategory:(id)arg1;
- (BOOL)willStartRoutePicking:(id)arg1;

@end

