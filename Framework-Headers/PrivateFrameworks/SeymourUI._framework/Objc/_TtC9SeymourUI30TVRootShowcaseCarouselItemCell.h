//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SeymourUI/_TtC9SeymourUI29TVFocusableCollectionViewCell.h>

@class MISSING_TYPE, NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI30TVRootShowcaseCarouselItemCell : _TtC9SeymourUI29TVFocusableCollectionViewCell
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *itemInfo;
    MISSING_TYPE *layout;
    MISSING_TYPE *carouselItemDelegate;
    MISSING_TYPE *artworkView;
    MISSING_TYPE *avPlayer;
    MISSING_TYPE *avPlayerLayer;
    MISSING_TYPE *blurView;
    MISSING_TYPE *buttonStackView;
    MISSING_TYPE *textStackView;
    MISSING_TYPE *captionLabel;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *focusContainerGuide;
    MISSING_TYPE *buttonWidthConstraint;
    MISSING_TYPE *lockup;
    MISSING_TYPE *startWorkoutActions;
}

@property (nonatomic, readonly) UILabel *accessibilityCaptionLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) struct CGSize intrinsicContentSize;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)handleTappedStartWorkoutButton:(id)arg1;
- (void)handleTappedWorkoutDetailsButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)restartVideo;

@end

