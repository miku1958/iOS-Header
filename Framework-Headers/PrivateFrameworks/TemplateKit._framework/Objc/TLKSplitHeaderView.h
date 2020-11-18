//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import <TemplateKit/NUIContainerGridViewDelegate-Protocol.h>

@class NSString, NUIContainerGridView, TLKImage, TLKImageView, TLKMultilineText, TLKVibrantLabel;

@interface TLKSplitHeaderView : TLKView <NUIContainerGridViewDelegate>
{
    TLKMultilineText *_title;
    TLKMultilineText *_subtitle1;
    TLKMultilineText *_subtitle2;
    TLKImage *_leadingImage;
    TLKMultilineText *_leadingTitle;
    TLKMultilineText *_leadingSubtitle;
    TLKImage *_trailingImage;
    TLKMultilineText *_trailingTitle;
    TLKMultilineText *_trailingSubtitle;
    NUIContainerGridView *_gridView;
    TLKImageView *_leadingImageView;
    TLKVibrantLabel *_leadingTitleLabel;
    TLKVibrantLabel *_leadingSubtitleLabel;
    TLKImageView *_trailingImageView;
    TLKVibrantLabel *_trailingTitleLabel;
    TLKVibrantLabel *_trailingSubtitleLabel;
    TLKVibrantLabel *_titleLabel;
    TLKVibrantLabel *_subtitle1Label;
    TLKVibrantLabel *_subtitle2Label;
    struct CGSize _fittingSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property (strong) NUIContainerGridView *gridView; // @synthesize gridView=_gridView;
@property (readonly) unsigned long long hash;
@property (strong) TLKImage *leadingImage; // @synthesize leadingImage=_leadingImage;
@property (strong) TLKImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property (strong) TLKMultilineText *leadingSubtitle; // @synthesize leadingSubtitle=_leadingSubtitle;
@property (strong) TLKVibrantLabel *leadingSubtitleLabel; // @synthesize leadingSubtitleLabel=_leadingSubtitleLabel;
@property (strong) TLKMultilineText *leadingTitle; // @synthesize leadingTitle=_leadingTitle;
@property (strong) TLKVibrantLabel *leadingTitleLabel; // @synthesize leadingTitleLabel=_leadingTitleLabel;
@property (strong) TLKMultilineText *subtitle1; // @synthesize subtitle1=_subtitle1;
@property (strong) TLKVibrantLabel *subtitle1Label; // @synthesize subtitle1Label=_subtitle1Label;
@property (strong) TLKMultilineText *subtitle2; // @synthesize subtitle2=_subtitle2;
@property (strong) TLKVibrantLabel *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property (readonly) Class superclass;
@property (strong) TLKMultilineText *title; // @synthesize title=_title;
@property (strong) TLKVibrantLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong) TLKImage *trailingImage; // @synthesize trailingImage=_trailingImage;
@property (strong) TLKImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property (strong) TLKMultilineText *trailingSubtitle; // @synthesize trailingSubtitle=_trailingSubtitle;
@property (strong) TLKVibrantLabel *trailingSubtitleLabel; // @synthesize trailingSubtitleLabel=_trailingSubtitleLabel;
@property (strong) TLKMultilineText *trailingTitle; // @synthesize trailingTitle=_trailingTitle;
@property (strong) TLKVibrantLabel *trailingTitleLabel; // @synthesize trailingTitleLabel=_trailingTitleLabel;

+ (id)footnoteFont;
- (void).cxx_destruct;
- (void)centerWithView:(id)arg1 forColumn:(unsigned long long)arg2;
- (long long)containerGridView:(id)arg1 horizontalAlignmentForArrangedSubview:(id)arg2;
- (long long)containerGridView:(id)arg1 verticalAlignmentForArrangedSubview:(id)arg2;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)firstRowOfViews;
- (id)grid;
- (id)init;
- (id)leadingImageInView;
- (id)leadingSubtitleText;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (BOOL)secondRowIsHidden;
- (id)secondRowOfViews;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)subtitleLabelText;
- (id)thirdRowOfViews;
- (id)titleFont;
- (id)titleLabelText;
- (id)trailingImageInView;
- (id)trailingSubtitleText;
- (id)vibrantFootnoteLabel:(BOOL)arg1;

@end

