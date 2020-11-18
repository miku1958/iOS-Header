//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSearchCallHistoryIntentExport-Protocol.h>

@class INDateComponentsRange, INPerson, NSString;

@interface INSearchCallHistoryIntent : INIntent <INSearchCallHistoryIntentExport>
{
}

@property (readonly, nonatomic) unsigned long long callCapabilities;
@property (readonly, nonatomic) long long callType;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) INPerson *recipient;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)initWithCallType:(long long)arg1 dateCreated:(id)arg2 recipient:(id)arg3 callCapabilities:(unsigned long long)arg4;
- (void)setCallCapabilities:(unsigned long long)arg1;
- (void)setCallType:(long long)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setRecipient:(id)arg1;

@end

