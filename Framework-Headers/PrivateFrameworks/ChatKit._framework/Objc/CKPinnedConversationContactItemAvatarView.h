//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAvatarView.h>

#import <ChatKit/CKPinnedConversationContactItemView-Protocol.h>

@protocol CKPinnedConversationContactItem;

__attribute__((visibility("hidden")))
@interface CKPinnedConversationContactItemAvatarView : CKAvatarView <CKPinnedConversationContactItemView>
{
    id<CKPinnedConversationContactItem> _pinnedConversationContactItem;
}

@property (strong, nonatomic) id<CKPinnedConversationContactItem> pinnedConversationContactItem; // @synthesize pinnedConversationContactItem=_pinnedConversationContactItem;

- (void).cxx_destruct;
- (void)_updateContactItemViewShadows;
- (id)init;
- (void)traitCollectionDidChange:(id)arg1;

@end
