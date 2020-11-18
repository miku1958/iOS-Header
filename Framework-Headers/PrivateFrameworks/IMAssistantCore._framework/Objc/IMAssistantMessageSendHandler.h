//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/IMAssistantMessageHandler.h>

#import <IMAssistantCore/INSendMessageIntentHandling-Protocol.h>

@class IMChatRegistry, NSString;

@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler <INSendMessageIntentHandling>
{
    IMChatRegistry *_chatRegistry;
}

@property (strong, nonatomic) IMChatRegistry *chatRegistry; // @synthesize chatRegistry=_chatRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleSendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveContentForSendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)resolveMessageContentWithString:(id)arg1;
- (void)resolveRecipients:(id)arg1 forIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resolveRecipientsForSendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (long long)sendMessageWithText:(id)arg1 toChat:(id)arg2;

@end
