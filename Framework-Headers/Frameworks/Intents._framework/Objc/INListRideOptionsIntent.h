//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INListRideOptionsIntentExport-Protocol.h>

@class CLPlacemark, NSString;

@interface INListRideOptionsIntent : INIntent <INListRideOptionsIntentExport>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) CLPlacemark *dropOffLocation;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) CLPlacemark *pickupLocation;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

