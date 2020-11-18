//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetCarLockStatusIntentExport-Protocol.h>

@class INSpeakableString, NSNumber, NSString;

@interface INSetCarLockStatusIntent : INIntent <INSetCarLockStatusIntentExport>
{
}

@property (readonly, copy, nonatomic) INSpeakableString *carName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSNumber *locked;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithLocked:(id)arg1 carName:(id)arg2;
- (id)parametersByName;
- (void)setCarName:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setLocked:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

