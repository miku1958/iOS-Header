//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMCommLimitsPolicyCache : NSObject
{
    NSMutableDictionary *_conversationContextToParticipantIDsHash;
    NSMutableDictionary *_participantIDsHashToConversationContext;
    NSMutableDictionary *_participantIDsHashToChatIdentifier;
    NSMutableDictionary *_chatIdentifierToParticipantIDsHash;
}

@property (strong, nonatomic) NSMutableDictionary *chatIdentifierToParticipantIDsHash; // @synthesize chatIdentifierToParticipantIDsHash=_chatIdentifierToParticipantIDsHash;
@property (strong, nonatomic) NSMutableDictionary *conversationContextToParticipantIDsHash; // @synthesize conversationContextToParticipantIDsHash=_conversationContextToParticipantIDsHash;
@property (strong, nonatomic) NSMutableDictionary *participantIDsHashToChatIdentifier; // @synthesize participantIDsHashToChatIdentifier=_participantIDsHashToChatIdentifier;
@property (strong, nonatomic) NSMutableDictionary *participantIDsHashToConversationContext; // @synthesize participantIDsHashToConversationContext=_participantIDsHashToConversationContext;

- (void).cxx_destruct;
- (void)addSentinelContextForParticipantIDsHash:(id)arg1;
- (void)addTrackingForChat:(id)arg1 participantIDsHash:(id)arg2;
- (void)addTrackingForConversationContext:(id)arg1 forParticipantIDsHash:(id)arg2;
- (id)chatForConversationContext:(id)arg1;
- (id)chatForParticipantIDsHash:(id)arg1;
- (id)contextForParticipantIDsHash:(id)arg1;
- (id)conversationContextForChat:(id)arg1;
- (id)init;
- (BOOL)isFetchingCommLimitsPolicyForChat:(id)arg1;
- (void)removeTrackingForChat:(id)arg1;

@end

