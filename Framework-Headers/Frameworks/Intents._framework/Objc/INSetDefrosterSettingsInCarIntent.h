//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetDefrosterSettingsInCarIntentExport-Protocol.h>

@class NSNumber, NSString;

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long defroster;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithEnable:(id)arg1 defroster:(long long)arg2;
- (id)parametersByName;
- (void)setDefroster:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setEnable:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

