//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMItem.h>

@interface IMItem (IMChat_Internal)
+ (Class)contextClass;
- (id)_copy;
- (BOOL)_hasMessageChatItem;
- (BOOL)_isInvitation;
- (id)_newChatItems;
- (id)_otherHandle;
- (id)_senderHandle;
- (id)_service;
- (id)_serviceHandle;
- (void)_setInvitation:(BOOL)arg1;
- (void)_updateContextWithSenderHandle:(id)arg1 otherHandle:(id)arg2;
- (BOOL)isIncomingTypingOrCancelTypingMessage;
- (BOOL)isTypingOrCancelTypingMessage;
- (id)message;
- (BOOL)shouldGenerateTopLevelChatItem;
@end

