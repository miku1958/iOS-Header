//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INShareETAIntentExport-Protocol.h>

@class NSArray, NSString;

@interface INShareETAIntent : INIntent <INShareETAIntentExport>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithRecipients:(id)arg1;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
