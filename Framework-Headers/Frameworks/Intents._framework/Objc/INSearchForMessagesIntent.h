//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSearchForMessagesIntentExport-Protocol.h>

@class INDateComponentsRange, NSArray, NSString;

@interface INSearchForMessagesIntent : INIntent <INSearchForMessagesIntentExport>
{
}

@property (readonly, nonatomic) unsigned long long attributes;
@property (readonly, copy, nonatomic) NSArray *conversationIdentifiers;
@property (readonly, nonatomic) long long conversationIdentifiersOperator;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) long long identifiersOperator;
@property (readonly, copy, nonatomic) NSArray *notificationIdentifiers;
@property (readonly, nonatomic) long long notificationIdentifiersOperator;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) long long recipientsOperator;
@property (readonly, copy, nonatomic) NSArray *searchTerms;
@property (readonly, nonatomic) long long searchTermsOperator;
@property (readonly, copy, nonatomic) NSArray *senders;
@property (readonly, nonatomic) long long sendersOperator;
@property (readonly, copy, nonatomic) NSArray *speakableGroupNames;
@property (readonly, nonatomic) long long speakableGroupNamesOperator;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)attributeSet;
- (id)contentPredicate;
- (id)contents;
- (long long)contentsOperator;
- (id)domain;
- (id)groupNames;
- (long long)groupNamesOperator;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 groupNames:(id)arg8;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8 conversationIdentifiers:(id)arg9;
- (id)parametersByName;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setContents:(id)arg1;
- (void)setConversationIdentifiers:(id)arg1;
- (void)setDateTimeRange:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setGroupNames:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setNotificationIdentifiers:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setSenders:(id)arg1;
- (void)setSpeakableGroupNames:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

