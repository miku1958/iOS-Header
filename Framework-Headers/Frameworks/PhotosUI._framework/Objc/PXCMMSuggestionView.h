//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, PXCMMPosterHeaderView, PXRoundedCornerOverlayView, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface PXCMMSuggestionView : UIView
{
    UIImageView *_combinedFaceTileImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    UIFont *_titleFont;
    UIFont *_titleBoldFont;
    BOOL _containsUnverifiedPersons;
    PXCMMPosterHeaderView *_headerView;
    NSArray *_names;
    NSString *_subtitle;
    UIColor *_opaqueAncestorBackgroundColor;
}

@property (strong, nonatomic) UIImage *combinedFaceTileImage;
@property (nonatomic) BOOL containsUnverifiedPersons; // @synthesize containsUnverifiedPersons=_containsUnverifiedPersons;
@property (readonly, nonatomic) PXCMMPosterHeaderView *headerView; // @synthesize headerView=_headerView;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (copy, nonatomic) NSArray *names; // @synthesize names=_names;
@property (copy, nonatomic) UIColor *opaqueAncestorBackgroundColor; // @synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;

+ (double)faceTileImageDiameter;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2;
- (void)_updateFonts;
- (id)asset;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)mediaProvider;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

