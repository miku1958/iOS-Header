//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKChatControllerDelegate-Protocol.h>
#import <ChatKit/NSObject-Protocol.h>

@class CKComposeChatController, CKComposition, CKConversation;

@protocol CKComposeChatControllerDelegate <NSObject, CKChatControllerDelegate>
- (void)composeChatController:(CKComposeChatController *)arg1 didSelectNewConversation:(CKConversation *)arg2;
- (BOOL)composeChatControllerCanEditRecipients;
- (void)composeChatControllerDidCancelComposition:(CKComposeChatController *)arg1;
- (BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(CKComposeChatController *)arg1;

@optional
- (void)composeChatController:(CKComposeChatController *)arg1 didLoadEntryViewContentWithCompletion:(void (^)(NSValue *))arg2;
- (void)composeChatController:(CKComposeChatController *)arg1 shouldSendComposition:(CKComposition *)arg2 inConversation:(CKConversation *)arg3 completion:(void (^)(BOOL))arg4;
@end
