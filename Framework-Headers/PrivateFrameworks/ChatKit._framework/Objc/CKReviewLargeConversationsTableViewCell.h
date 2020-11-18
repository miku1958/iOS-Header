//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAbstractReviewTableViewCell.h>

@class CNAvatarView, IMChat;

__attribute__((visibility("hidden")))
@interface CKReviewLargeConversationsTableViewCell : CKAbstractReviewTableViewCell
{
    IMChat *_chat;
    CNAvatarView *_avatarView;
}

@property (strong, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property (strong, nonatomic) IMChat *chat; // @synthesize chat=_chat;

+ (struct CGSize)leftHandSideViewSize;
+ (double)requestedHeight;
- (void).cxx_destruct;
- (id)leftHandSideView;
- (void)prepareForReuse;
- (void)setModelObject:(id)arg1;

@end
