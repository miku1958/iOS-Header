//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSendMessageIntentExport-Protocol.h>

@class INPerson, INSpeakableString, NSArray, NSString;

@interface INSendMessageIntent : INIntent <INSendMessageIntentExport>
{
}

@property (readonly, copy, nonatomic) NSArray *attachments;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long effect;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long outgoingMessageType;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) INPerson *sender;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) INSpeakableString *speakableGroupName;
@property (readonly) Class superclass;

+ (id)_ignoredParameters;
- (id)_categoryVerb;
- (id)_currentParameterCombination;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (void)_intents_resolveOutgoingMessageTypeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_isUserConfirmationRequired;
- (BOOL)_isValidSubProducer:(id)arg1;
- (id)_keyCodableAttributes;
- (id)_metadata;
- (long long)_preferredInteractionDirection;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_redactedDictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (id)_spotlightContentType;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2;
- (id)domain;
- (id)groupName;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6;
- (id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7;
- (id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7 attachments:(id)arg8;
- (id)parametersByName;
- (void)setAttachments:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setOutgoingMessageType:(long long)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSpeakableGroupName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

