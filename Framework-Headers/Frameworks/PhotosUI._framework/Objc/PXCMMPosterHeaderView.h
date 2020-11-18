//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, PXCMMImageView, PXCMMPosterHeaderViewSpec, PXGradientView, UIImageView, UILabel;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMPosterHeaderView : UIView
{
    PXCMMPosterHeaderViewSpec *_spec;
    PXCMMImageView *_imageView;
    PXGradientView *_topGradientView;
    PXGradientView *_bottomGradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
    UIImageView *_statusCheckmark;
    BOOL _showStatusCheckmark;
    NSString *_title;
    NSString *_subtitle;
    NSString *_statusString;
}

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;
@property (nonatomic) BOOL showStatusCheckmark; // @synthesize showStatusCheckmark=_showStatusCheckmark;
@property (copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_performLayoutWithSize:(struct CGSize)arg1;
- (void)_updateFonts;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPresentationStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;

@end

