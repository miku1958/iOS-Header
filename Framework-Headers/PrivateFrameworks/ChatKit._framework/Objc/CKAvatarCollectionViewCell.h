//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CKAvatarView;

__attribute__((visibility("hidden")))
@interface CKAvatarCollectionViewCell : UICollectionViewCell
{
    CKAvatarView *_avatarView;
}

@property (strong, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)configureWithEntity:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

