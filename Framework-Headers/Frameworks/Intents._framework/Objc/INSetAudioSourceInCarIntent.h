//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetAudioSourceInCarIntentExport-Protocol.h>

@class NSString;

@interface INSetAudioSourceInCarIntent : INIntent <INSetAudioSourceInCarIntentExport>
{
}

@property (readonly, nonatomic) long long audioSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long relativeAudioSourceReference;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithAudioSource:(long long)arg1 relativeAudioSourceReference:(long long)arg2;
- (id)parametersByName;
- (void)setAudioSource:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRelativeAudioSourceReference:(long long)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

