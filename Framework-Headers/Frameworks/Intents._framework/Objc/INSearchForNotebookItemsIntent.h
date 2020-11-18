//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSearchForNotebookItemsIntentExport-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INSpeakableString, NSString;

@interface INSearchForNotebookItemsIntent : INIntent <INSearchForNotebookItemsIntentExport>
{
}

@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) long long dateSearchType;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long itemType;
@property (readonly, copy, nonatomic) CLPlacemark *location;
@property (readonly, nonatomic) long long locationSearchType;
@property (readonly, copy, nonatomic) NSString *notebookItemIdentifier;
@property (readonly, nonatomic) long long status;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INSpeakableString *title;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 notebookItemIdentifier:(id)arg9;
- (id)parametersByName;
- (void)setContent:(id)arg1;
- (void)setDateSearchType:(long long)arg1;
- (void)setDateTime:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setItemType:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationSearchType:(long long)arg1;
- (void)setNotebookItemIdentifier:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

