//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/IMAssistantMessageHandler.h>

#import <IMAssistantCore/INSendMessageIntentHandling-Protocol.h>

@class NSString;
@protocol IMAssistantMessageSendHandlerDelegate;

@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler <INSendMessageIntentHandling>
{
    NSString *_conversationIdentifierResolvedDuringRecipientResolution;
    id<IMAssistantMessageSendHandlerDelegate> _messageSendHandlerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<IMAssistantMessageSendHandlerDelegate> messageSendHandlerDelegate; // @synthesize messageSendHandlerDelegate=_messageSendHandlerDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)canSendLocationMessageWithLocationManager:(id)arg1 withError:(long long *)arg2;
- (void)confirmSendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)contactResolutionResultForContacts:(id)arg1 matchingRecipient:(id)arg2;
- (id)contactsWithDuplicateNamesAmongContacts:(id)arg1;
- (id)findValidMappingOfRequestedRecipientToChatParticipantAmongMatches:(id)arg1;
- (id)handleResolutionResultForHandles:(id)arg1 resolvedContactForAlternatives:(id)arg2 recipient:(id)arg3;
- (void)handleSendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2 intentIdentifier:(id)arg3;
- (BOOL)isMemberOfChat:(id)arg1;
- (id)recipientDisambiguationResultsFromMultipleRelevantChats:(id)arg1;
- (BOOL)recipientHandleResolutionResultsAllowedByScreentime:(id)arg1 error:(id *)arg2;
- (id)recipientsResolutionFailureResultWithResult:(id)arg1 forRecipient:(id)arg2 amongRecipients:(id)arg3;
- (void)resolveContentForSendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)resolveMessageContentWithString:(id)arg1;
- (void)resolveOutgoingMessageTypeForSendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveRecipients:(id)arg1 forIntent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)resolveRecipientsByFindingExistingRelevantChatsForRecipients:(id)arg1 withMatchingHandlesByRecipient:(id)arg2 fromChats:(id)arg3;
- (void)resolveRecipientsForSendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)resolvedRecipientsFromChat:(id)arg1;
- (id)sendMessageWithText:(id)arg1 currentLocation:(BOOL)arg2 audioMessageAttachment:(id)arg3 expressiveSendStyleID:(id)arg4 idsIdentifier:(id)arg5 executionContext:(long long)arg6 toChat:(id)arg7;
- (BOOL)shouldContinueToExamineRelevantChatsWithMatches:(id)arg1 nextChat:(id)arg2;
- (BOOL)updateSenderIdentityForNewlyCreatedChat:(id)arg1;

@end
