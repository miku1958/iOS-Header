//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INPlayMediaIntentExport-Protocol.h>

@class INMediaItem, NSArray, NSDate, NSNumber, NSString;

@interface INPlayMediaIntent : INIntent <INPlayMediaIntentExport>
{
}

@property (copy, nonatomic) NSArray *buckets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) INMediaItem *mediaContainer;
@property (readonly, copy, nonatomic) NSArray *mediaItems;
@property (readonly, copy, nonatomic) NSNumber *playShuffled;
@property (readonly, nonatomic) long long playbackRepeatMode;
@property (copy, nonatomic) NSString *recoID;
@property (readonly, copy, nonatomic) NSNumber *resumePlayback;
@property (readonly) Class superclass;

+ (id)_ignoredParameters;
- (id)_categoryVerb;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_spotlightContentType;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (id)domain;
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setMediaContainer:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPlayShuffled:(id)arg1;
- (void)setPlaybackRepeatMode:(long long)arg1;
- (void)setResumePlayback:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

