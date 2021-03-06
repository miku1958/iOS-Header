//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlayUI/_CPUIBaseTableCell.h>

@class CPUIHighlightButton, NSArray, NSLayoutConstraint, NSMutableArray, UIActivityIndicatorView, UIImage, UIImageView, UIStackView;

@interface CPUIImageRowCell : _CPUIBaseTableCell
{
    NSMutableArray *_reusableMediaViews;
    NSArray *_artworkCatalogs;
    CPUIHighlightButton *_focusIndicator;
    UIImageView *_chevronView;
    UIImage *_fallbackImage;
    UIActivityIndicatorView *_activityIndicator;
    CDUnknownBlockType _selectGridItemBlock;
    CDUnknownBlockType _selectTitleBlock;
    UIStackView *_stackView;
    NSLayoutConstraint *_stackViewWidthConstraint;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (copy, nonatomic) NSArray *artworkCatalogs; // @synthesize artworkCatalogs=_artworkCatalogs;
@property (strong, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property (strong, nonatomic) UIImage *fallbackImage; // @synthesize fallbackImage=_fallbackImage;
@property (strong, nonatomic) CPUIHighlightButton *focusIndicator; // @synthesize focusIndicator=_focusIndicator;
@property (strong, nonatomic) NSMutableArray *reusableMediaViews; // @synthesize reusableMediaViews=_reusableMediaViews;
@property (copy, nonatomic) CDUnknownBlockType selectGridItemBlock; // @synthesize selectGridItemBlock=_selectGridItemBlock;
@property (copy, nonatomic) CDUnknownBlockType selectTitleBlock; // @synthesize selectTitleBlock=_selectTitleBlock;
@property (strong, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (strong, nonatomic) NSLayoutConstraint *stackViewWidthConstraint; // @synthesize stackViewWidthConstraint=_stackViewWidthConstraint;

+ (double)minimumHeight;
+ (double)rowHeight;
- (void).cxx_destruct;
- (void)_layoutArtworkImages;
- (void)applyConfiguration:(id)arg1;
- (long long)artworkViewCountThatFits:(struct CGSize)arg1;
- (BOOL)canBecomeFocused;
- (void)configureCell;
- (void)coreCellItemTapped:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)gridCellItemTapped:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLoading:(BOOL)arg1;

@end

