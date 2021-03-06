//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INStartAudioCallIntentExport-Protocol.h>

@class NSArray, NSString;

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>
{
}

@property (nonatomic) long long audioRoute;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long destinationType;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long preferredCallProvider;
@property (nonatomic) long long recordTypeForRedialing;
@property (readonly) Class superclass;
@property (nonatomic, setter=setTTYType:) long long ttyType;
@property (readonly, nonatomic) BOOL useSpeaker;

+ (id)_ignoredParameters;
- (id)_categoryVerb;
- (id)_currentParameterCombination;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_spotlightContentType;
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2;
- (id)domain;
- (id)initWithContacts:(id)arg1;
- (id)initWithDestinationType:(long long)arg1 contacts:(id)arg2;
- (id)parametersByName;
- (void)setContacts:(id)arg1;
- (void)setDestinationType:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setUseSpeaker:(BOOL)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

