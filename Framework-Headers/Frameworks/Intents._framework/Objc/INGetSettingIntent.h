//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INGetSettingIntentExport-Protocol.h>

@class INSettingMetadata, NSString;

@interface INGetSettingIntent : INIntent <INGetSettingIntentExport>
{
}

@property (readonly, nonatomic) long long confirmationValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithSettingMetadata:(id)arg1;
- (id)initWithSettingMetadata:(id)arg1 confirmationValue:(long long)arg2;
- (id)parametersByName;
- (void)setConfirmationValue:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
