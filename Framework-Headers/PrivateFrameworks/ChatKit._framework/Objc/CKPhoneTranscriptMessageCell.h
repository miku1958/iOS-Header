//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptMessageCell.h>

@class CKAvatarView, UIImageView;

@interface CKPhoneTranscriptMessageCell : CKTranscriptMessageCell
{
    CKAvatarView *_avatarView;
    UIImageView *_printableAvatarView;
}

@property (strong, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property (strong, nonatomic) UIImageView *printableAvatarView; // @synthesize printableAvatarView=_printableAvatarView;

- (void).cxx_destruct;
- (id)contactImageView;
- (void)dealloc;
- (void)layoutSubviewsForContents;
- (void)setShowAvatarView:(BOOL)arg1 withContact:(id)arg2 preferredHandle:(id)arg3 avatarViewDelegate:(id)arg4;

@end
