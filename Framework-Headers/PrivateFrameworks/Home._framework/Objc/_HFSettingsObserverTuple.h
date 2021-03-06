//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeKitSettingsObserver-Protocol.h>
#import <Home/NAIdentifiable-Protocol.h>

@class HMSetting, HMSettings, NADeallocationSentinel, NSString;
@protocol HFHomeKitSettingsObserver, _HFSettingsObserverTupleOwning;

@interface _HFSettingsObserverTuple : NSObject <HFHomeKitSettingsObserver, NAIdentifiable>
{
    HMSettings *_settings;
    HMSetting *_setting;
    id<HFHomeKitSettingsObserver> _observer;
    id<_HFSettingsObserverTupleOwning> _owner;
    NADeallocationSentinel *_observerDeallocationSentinel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HFHomeKitSettingsObserver> observer; // @synthesize observer=_observer;
@property (strong, nonatomic) NADeallocationSentinel *observerDeallocationSentinel; // @synthesize observerDeallocationSentinel=_observerDeallocationSentinel;
@property (weak, nonatomic) id<_HFSettingsObserverTupleOwning> owner; // @synthesize owner=_owner;
@property (strong, nonatomic) HMSetting *setting; // @synthesize setting=_setting;
@property (strong, nonatomic) HMSettings *settings; // @synthesize settings=_settings;
@property (readonly) Class superclass;

+ (id)na_identity;
+ (id)tupleForSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4;
- (void).cxx_destruct;
- (void)_accessorySettingDidUpdate:(id)arg1;
- (void)_accessorySettingReflectionStateDidUpdate:(id)arg1;
- (id)initWithSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)settingsDidUpdate:(id)arg1;
- (void)settingsWillUpdate:(id)arg1;

@end

