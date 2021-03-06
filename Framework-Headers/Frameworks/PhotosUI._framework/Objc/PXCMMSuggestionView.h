//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXCMMPosterHeaderView, PXCMMSuggestionViewModel, PXRoundedCornerOverlayView, UIFont, UIImageView, UILabel, UIView;
@protocol PXCMMSuggestionViewDelegate;

@interface PXCMMSuggestionView : UICollectionViewCell <PXChangeObserver>
{
    PXCMMPosterHeaderView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_combinedFaceTileImageView;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    UIFont *_titleFont;
    UIFont *_titleBoldFont;
    id<PXCMMSuggestionViewDelegate> _delegate;
    PXCMMSuggestionViewModel *_viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXCMMSuggestionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGRect headerViewBounds;
@property (readonly, nonatomic) UIView *previewView;
@property (readonly) Class superclass;
@property (strong, nonatomic) PXCMMSuggestionViewModel *viewModel; // @synthesize viewModel=_viewModel;

+ (struct CGSize)posterHeaderViewSizeForSize:(struct CGSize)arg1 scale:(double)arg2;
+ (struct CGSize)posterImageSizeThatFits:(struct CGSize)arg1 scale:(double)arg2;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 viewModel:(id)arg2;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2;
- (void)_tapGesture:(id)arg1;
- (BOOL)_updateCombinedFaceTileImage;
- (void)_updateFonts;
- (void)_updateHeaderView;
- (void)_updateOpaqueAncestorBackgroundColor;
- (BOOL)_updateSubtitle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)test_selected;
- (id)test_subtitle;
- (id)test_title;
- (void)traitCollectionDidChange:(id)arg1;

@end

