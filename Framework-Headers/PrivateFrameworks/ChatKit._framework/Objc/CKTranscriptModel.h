//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKConversation, NSArray, NSDictionary, NSDiffableDataSourceSnapshot;
@protocol CKTranscriptModelDelegate;

@interface CKTranscriptModel : NSObject
{
    id<CKTranscriptModelDelegate> _delegate;
    CKConversation *_conversation;
    NSArray *_chatItems;
    NSDictionary *_supplementaryKindToChatItemMap;
}

@property (strong, nonatomic) NSArray *chatItems; // @synthesize chatItems=_chatItems;
@property (strong, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property (weak, nonatomic) id<CKTranscriptModelDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (strong, nonatomic) NSDictionary *supplementaryKindToChatItemMap; // @synthesize supplementaryKindToChatItemMap=_supplementaryKindToChatItemMap;

+ (id)transcriptSectionIdentifier;
- (void).cxx_destruct;
- (id)chatItemWithIMChatItem:(id)arg1 traitCollection:(id)arg2;
- (id)chatItemsWithIMChatItems:(id)arg1;
- (id)initWithConversation:(id)arg1 delegate:(id)arg2;
- (void)reload;

@end

