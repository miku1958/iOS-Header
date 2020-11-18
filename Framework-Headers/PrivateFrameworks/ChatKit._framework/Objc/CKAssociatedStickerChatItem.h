//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAssociatedMessageChatItem.h>

@class CKMediaObject, NSString;

@interface CKAssociatedStickerChatItem : CKAssociatedMessageChatItem
{
    CKMediaObject *_mediaObject;
}

@property (strong, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
@property (readonly, copy, nonatomic) NSString *transferGUID;

- (void).cxx_destruct;
- (id)IMAssociatedStickerChatItem;
- (Class)cellClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;

@end
