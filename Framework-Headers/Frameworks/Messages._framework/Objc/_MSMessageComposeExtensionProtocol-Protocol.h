//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Messages/NSObject-Protocol.h>

@class MSMessage, NSDictionary, NSNumber, NSString, NSValue, _MSConversationState, _MSPresentationState;

@protocol _MSMessageComposeExtensionProtocol <NSObject>
- (void)_becomeActiveWithConversationState:(_MSConversationState *)arg1 presentationState:(_MSPresentationState *)arg2;
- (void)_canSendMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2 associatedText:(NSString *)arg3 completion:(void (^)(BOOL, MSMessage *, NSString *))arg4;
- (void)_conversationDidChangeWithConversationState:(_MSConversationState *)arg1;
- (void)_didCancelSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didReceiveMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didStartSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_handleTextInputPayload:(NSDictionary *)arg1 withPayloadID:(NSString *)arg2 completion:(void (^)(BOOL))arg3;
- (void)_hostDidBeginDeferredTeardown;
- (void)_presentationDidChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_presentationWillChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_requestContentSizeThatFits:(NSValue *)arg1 presentationStyle:(NSNumber *)arg2 completionHandler:(void (^)(struct CGSize))arg3;
- (void)_requestSnapshotWithCompletion:(void (^)(NSData *))arg1;
- (void)_resignActive;
- (void)beginDisablingUserInteraction;
- (void)endDisablingUserInteraction;
@end

