//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NSString, NUIContainerGridView, NUIContainerStackView, TLKEmbossedLabel, TLKImage, TLKImageView, TLKLabel, TLKMultilineText;

@interface TLKSplitHeaderView : TLKView <NUIContainerViewDelegate>
{
    BOOL _useLargeTitle;
    BOOL _shouldBadgeSubtitle;
    BOOL _useCompactWidth;
    TLKMultilineText *_title;
    TLKMultilineText *_subtitle1;
    TLKMultilineText *_subtitle2;
    TLKImage *_leadingImage;
    TLKMultilineText *_leadingTitle;
    TLKMultilineText *_leadingSubtitle;
    TLKImage *_trailingImage;
    TLKMultilineText *_trailingTitle;
    TLKMultilineText *_trailingSubtitle;
    TLKImageView *_leadingImageView;
    TLKLabel *_leadingTitleLabel;
    TLKLabel *_leadingSubtitleLabel;
    TLKImageView *_trailingImageView;
    TLKLabel *_trailingTitleLabel;
    TLKLabel *_trailingSubtitleLabel;
    TLKLabel *_titleLabel;
    NUIContainerStackView *_subtitleStackView;
    TLKLabel *_subtitle1Label;
    TLKEmbossedLabel *_subtitle2Label;
}

@property (strong, nonatomic) NUIContainerGridView *contentView; // @dynamic contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TLKImage *leadingImage; // @synthesize leadingImage=_leadingImage;
@property (strong, nonatomic) TLKImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property (strong, nonatomic) TLKMultilineText *leadingSubtitle; // @synthesize leadingSubtitle=_leadingSubtitle;
@property (strong, nonatomic) TLKLabel *leadingSubtitleLabel; // @synthesize leadingSubtitleLabel=_leadingSubtitleLabel;
@property (strong, nonatomic) TLKMultilineText *leadingTitle; // @synthesize leadingTitle=_leadingTitle;
@property (strong, nonatomic) TLKLabel *leadingTitleLabel; // @synthesize leadingTitleLabel=_leadingTitleLabel;
@property (nonatomic) BOOL shouldBadgeSubtitle; // @synthesize shouldBadgeSubtitle=_shouldBadgeSubtitle;
@property (strong, nonatomic) TLKMultilineText *subtitle1; // @synthesize subtitle1=_subtitle1;
@property (strong, nonatomic) TLKLabel *subtitle1Label; // @synthesize subtitle1Label=_subtitle1Label;
@property (strong, nonatomic) TLKMultilineText *subtitle2; // @synthesize subtitle2=_subtitle2;
@property (strong, nonatomic) TLKEmbossedLabel *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property (strong, nonatomic) NUIContainerStackView *subtitleStackView; // @synthesize subtitleStackView=_subtitleStackView;
@property (readonly) Class superclass;
@property (strong, nonatomic) TLKMultilineText *title; // @synthesize title=_title;
@property (strong, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) TLKImage *trailingImage; // @synthesize trailingImage=_trailingImage;
@property (strong, nonatomic) TLKImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property (strong, nonatomic) TLKMultilineText *trailingSubtitle; // @synthesize trailingSubtitle=_trailingSubtitle;
@property (strong, nonatomic) TLKLabel *trailingSubtitleLabel; // @synthesize trailingSubtitleLabel=_trailingSubtitleLabel;
@property (strong, nonatomic) TLKMultilineText *trailingTitle; // @synthesize trailingTitle=_trailingTitle;
@property (strong, nonatomic) TLKLabel *trailingTitleLabel; // @synthesize trailingTitleLabel=_trailingTitleLabel;
@property (nonatomic) BOOL useCompactWidth; // @synthesize useCompactWidth=_useCompactWidth;
@property (nonatomic) BOOL useLargeTitle; // @synthesize useLargeTitle=_useLargeTitle;

- (void).cxx_destruct;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)firstRowOfViews;
- (id)grid;
- (id)leadingImageInView;
- (void)observedPropertiesChanged;
- (BOOL)secondRowIsHidden;
- (id)secondRowOfViews;
- (id)setupContentView;
- (id)subtitleLabel;
- (id)thirdRowOfViews;
- (id)trailingImageInView;
- (BOOL)usesDefaultLayoutMargins;

@end
