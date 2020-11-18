//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MCDButton, NSString, UIImage, UIImageView, UILabel, UIView;

@interface MCDAlbumsDetailTableHeaderView : UITableViewHeaderFooterView
{
    UIImageView *_artworkImageView;
    UILabel *_titleLabel;
    UIView *_separatorView;
    UILabel *_subtitleLabel;
    MCDButton *_shuffleButton;
    CDUnknownBlockType _shuffleActionBlock;
}

@property (strong, nonatomic) UIImage *artworkImage;
@property (copy, nonatomic) CDUnknownBlockType shuffleActionBlock; // @synthesize shuffleActionBlock=_shuffleActionBlock;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)_shuffleButtonAction:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setDuration:(double)arg1 count:(unsigned long long)arg2;

@end

