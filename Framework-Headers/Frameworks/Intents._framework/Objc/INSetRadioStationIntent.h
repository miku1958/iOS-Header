//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetRadioStationIntentExport-Protocol.h>

@class NSNumber, NSString;

@interface INSetRadioStationIntent : INIntent <INSetRadioStationIntentExport>
{
}

@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *frequency;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSNumber *presetNumber;
@property (readonly, nonatomic) long long radioType;
@property (readonly, copy, nonatomic) NSString *stationName;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithRadioType:(long long)arg1 frequency:(id)arg2 stationName:(id)arg3 channel:(id)arg4 presetNumber:(id)arg5;
- (id)parametersByName;
- (void)setChannel:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPresetNumber:(id)arg1;
- (void)setRadioType:(long long)arg1;
- (void)setStationName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

