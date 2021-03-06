//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INCreateNoteIntentExport-Protocol.h>

@class INNoteContent, INSpeakableString, NSString;

@interface INCreateNoteIntent : INIntent <INCreateNoteIntentExport>
{
}

@property (readonly, copy, nonatomic) INNoteContent *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INSpeakableString *title;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithTitle:(id)arg1 content:(id)arg2 groupName:(id)arg3;
- (id)parametersByName;
- (void)setContent:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

