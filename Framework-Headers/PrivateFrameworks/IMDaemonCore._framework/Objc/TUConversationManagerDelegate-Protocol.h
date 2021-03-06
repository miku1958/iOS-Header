//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class TUConversation, TUConversationManager;

@protocol TUConversationManagerDelegate <NSObject>

@optional
- (void)conversationManager:(TUConversationManager *)arg1 activeRemoteParticipantsChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 addedActiveConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 localVideoToggledForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 remoteMembersChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 removedActiveConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 stateChangedForConversation:(TUConversation *)arg2;
- (void)conversationsChangedForConversationManager:(TUConversationManager *)arg1;
- (void)serverDisconnectedForConversationManager:(TUConversationManager *)arg1;
@end

