//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IKLockupElement, MPUContentSizeLayoutConstraint, NSLayoutConstraint, UILabel, UIView, VideosExtrasConstrainedArtworkContainerView;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridCollectionViewCell : UICollectionViewCell
{
    UIView *_spacerView;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    MPUContentSizeLayoutConstraint *_topLineHeight;
    MPUContentSizeLayoutConstraint *_subtitleLineHeight;
    NSLayoutConstraint *_spacerHeight;
    NSLayoutConstraint *_spacerTop;
    IKLockupElement *_lockupElement;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    VideosExtrasConstrainedArtworkContainerView *_artworkContainer;
}

@property (readonly, nonatomic) VideosExtrasConstrainedArtworkContainerView *artworkContainer; // @synthesize artworkContainer=_artworkContainer;
@property (weak, nonatomic) IKLockupElement *lockupElement; // @synthesize lockupElement=_lockupElement;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2 withSizing:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;

@end

