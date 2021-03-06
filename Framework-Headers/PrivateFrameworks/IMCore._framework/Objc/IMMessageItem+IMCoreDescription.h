//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMMessageItem.h>

@interface IMMessageItem (IMCoreDescription)
+ (id)bestAccountForAddress:(id)arg1;
+ (Class)contextClass;
+ (id)displayNameForAddress:(id)arg1;
+ (id)handleForAddress:(id)arg1;
+ (BOOL)isLoginAddress:(id)arg1;
- (id)_copy;
- (id)_copyWithFlags:(unsigned long long)arg1;
- (BOOL)_hasMessageChatItem;
- (BOOL)_isInvitation;
- (id)_newChatItems;
- (id)_newChatItemsWithLink:(BOOL)arg1 isBusiness:(BOOL)arg2 parentChatIsSpam:(BOOL)arg3 hasKnownParticipants:(BOOL)arg4;
- (id)_service;
- (void)_setInivtation:(BOOL)arg1;
- (id)descriptionForPurpose:(long long)arg1 isGroupMessage:(BOOL)arg2 messageDataSource:(CDUnknownBlockType)arg3 attachmentDataSource:(CDUnknownBlockType)arg4;
- (id)descriptionForPurpose:(long long)arg1 isGroupMessage:(BOOL)arg2 senderDisplayName:(id)arg3 messageDataSource:(CDUnknownBlockType)arg4 attachmentDataSource:(CDUnknownBlockType)arg5;
- (BOOL)isCancelTypingMessage;
- (BOOL)isExtensibleMessageWithPluginPayload:(id *)arg1;
- (BOOL)isIncomingTypingMessage;
- (BOOL)isIncomingTypingOrCancelTypingMessage;
- (BOOL)isSystemMessage;
- (BOOL)isTypingOrCancelTypingMessage;
- (id)message;
@end

