//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome, NSString;

@interface HFActionSetSuggestionItem : HFItem
{
    HMHome *_home;
    NSString *_builtInActionSetType;
}

@property (readonly, nonatomic) NSString *builtInActionSetType; // @synthesize builtInActionSetType=_builtInActionSetType;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;

- (void).cxx_destruct;
- (id)_actionBuildersToSetLightbulbBrightness:(double)arg1;
- (id)_actionBuildersToSetLightbulbColorWithPaletteColor:(id)arg1;
- (id)_actionBuildersToSetPowerState:(BOOL)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetBlindsPositionOpen:(BOOL)arg1;
- (id)_actionBuildersToSetTargetDoorState:(long long)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetLockState:(long long)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetSecuritySystemState:(long long)arg1;
- (id)_actionSetBuilderForBuiltInActionSetType:(id)arg1 outDependentServiceTypes:(out id *)arg2;
- (id)_builtInActionSetOfType:(id)arg1;
- (id)_controlItemValueSourceForService:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithHome:(id)arg1 builtInActionSetType:(id)arg2;

@end

