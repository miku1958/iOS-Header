//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class CNAvatarView;

__attribute__((visibility("hidden")))
@interface CKSharedContactsCollectionViewCell : CKSharedContentsCollectionViewCell
{
    CNAvatarView *_avatarView;
}

@property (strong, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)configureWithContact:(id)arg1;
- (void)layoutSubviews;

@end
