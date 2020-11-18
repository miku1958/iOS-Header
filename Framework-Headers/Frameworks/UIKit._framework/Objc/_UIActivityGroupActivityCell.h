//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, _UIActivityGroupActivityCellTitleLabel;

__attribute__((visibility("hidden")))
@interface _UIActivityGroupActivityCell : UICollectionViewCell
{
    _UIActivityGroupActivityCellTitleLabel *_titleLabel;
    UIImageView *_imageView;
    UIImageView *_highlightedImageView;
}

@property (strong, nonatomic) UIImageView *highlightedImageView; // @synthesize highlightedImageView=_highlightedImageView;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) _UIActivityGroupActivityCellTitleLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (struct CGSize)preferredSizeForTitleLabelText:(id)arg1 screenScale:(double)arg2;
- (void).cxx_destruct;
- (id)draggingView;
- (void)initHighlightedImageViewIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateHighlightedImageViewIfNeeded;

@end
