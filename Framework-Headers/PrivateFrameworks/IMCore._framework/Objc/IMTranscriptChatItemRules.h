//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/IMChatItemRules-Protocol.h>

@class IMChat, IMChatItem, NSArray, NSMutableArray, NSString;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules>
{
    IMChat *_chat;
    NSArray *_items;
    NSMutableArray *_chatItems;
    IMChatItem *_nextStaleChatItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_chatItems;
- (id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
- (void)_didProcessChatItems:(id)arg1;
- (id)_initWithChat:(id)arg1;
- (void)_invalidate;
- (id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
- (id)_items;
- (id)_nextStaleChatItem;
- (void)_setItems:(id)arg1;
- (void)_setNextStaleChatItem:(id)arg1;
- (BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
- (BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
- (id)chatItemForIMChatItem:(id)arg1;
- (void)dealloc;
- (BOOL)shouldShowRaiseMessageStatus;
- (id)testChatItems;

@end

