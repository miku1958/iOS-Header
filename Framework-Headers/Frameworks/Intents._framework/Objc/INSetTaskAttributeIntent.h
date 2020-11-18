//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetTaskAttributeIntentExport-Protocol.h>

@class INSpatialEventTrigger, INTask, INTemporalEventTrigger, NSString;

@interface INSetTaskAttributeIntent : INIntent <INSetTaskAttributeIntentExport>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
@property (readonly, nonatomic) long long status;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INTask *targetTask;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithTargetTask:(id)arg1 status:(long long)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTargetTask:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
