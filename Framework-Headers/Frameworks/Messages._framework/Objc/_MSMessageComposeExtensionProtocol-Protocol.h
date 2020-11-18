//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Messages/NSObject-Protocol.h>

@class MSMessage, _MSConversationState, _MSPresentationState;

@protocol _MSMessageComposeExtensionProtocol <NSObject>
- (void)_becomeActiveWithConversationState:(_MSConversationState *)arg1 presentationState:(_MSPresentationState *)arg2;
- (void)_conversationDidChangeWithConversationState:(_MSConversationState *)arg1;
- (void)_didCancelSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didReceiveMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didStartSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_hostDidBeginDeferredTeardown;
- (void)_presentationDidChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_presentationWillChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_requestSnapshotWithCompletion:(void (^)(NSData *))arg1;
- (void)_resignActive;
- (void)beginDisablingUserInteraction;
- (void)endDisablingUserInteraction;
@end

