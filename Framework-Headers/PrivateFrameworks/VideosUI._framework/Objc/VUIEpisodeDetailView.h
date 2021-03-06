//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <VideosUI/VUILibraryEpisodeFrameViewDelegate-Protocol.h>

@class NSString, UIFont, VUIFocusableTextView, VUILabel, VUILibraryEpisodeFrameView, VUIMediaItem, VUIMediaTagsView;
@protocol VUIEpisodeDetailViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIEpisodeDetailView : UIScrollView <VUILibraryEpisodeFrameViewDelegate>
{
    id<VUIEpisodeDetailViewDelegate> _episodeViewDelegate;
    VUILibraryEpisodeFrameView *_imageFrameView;
    VUILabel *_episodeTitleLabel;
    VUILabel *_seasonNumberLabel;
    VUILabel *_episodeNumberLabel;
    VUILabel *_releaseDateLabel;
    VUILabel *_dotSeparatorLabel;
    VUIFocusableTextView *_contentDescriptionView;
    UIFont *_contentDescriptionFont;
    VUIMediaItem *_mediaItem;
    VUIMediaTagsView *_mediaBadgeTagsView;
}

@property (strong, nonatomic) UIFont *contentDescriptionFont; // @synthesize contentDescriptionFont=_contentDescriptionFont;
@property (strong, nonatomic) VUIFocusableTextView *contentDescriptionView; // @synthesize contentDescriptionView=_contentDescriptionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) VUILabel *dotSeparatorLabel; // @synthesize dotSeparatorLabel=_dotSeparatorLabel;
@property (strong, nonatomic) VUILabel *episodeNumberLabel; // @synthesize episodeNumberLabel=_episodeNumberLabel;
@property (strong, nonatomic) VUILabel *episodeTitleLabel; // @synthesize episodeTitleLabel=_episodeTitleLabel;
@property (weak, nonatomic) id<VUIEpisodeDetailViewDelegate> episodeViewDelegate; // @synthesize episodeViewDelegate=_episodeViewDelegate;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VUILibraryEpisodeFrameView *imageFrameView; // @synthesize imageFrameView=_imageFrameView;
@property (strong, nonatomic) VUIMediaTagsView *mediaBadgeTagsView; // @synthesize mediaBadgeTagsView=_mediaBadgeTagsView;
@property (strong, nonatomic) VUIMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property (strong, nonatomic) VUILabel *releaseDateLabel; // @synthesize releaseDateLabel=_releaseDateLabel;
@property (strong, nonatomic) VUILabel *seasonNumberLabel; // @synthesize seasonNumberLabel=_seasonNumberLabel;
@property (readonly) Class superclass;

+ (struct CGSize)_episodeFrameImageSizeWithViewSize:(struct CGSize)arg1;
+ (void)configureEpisodeDetailView:(id)arg1 withMedia:(id)arg2 viewSize:(struct CGSize)arg3;
- (void).cxx_destruct;
- (void)_configureDotSeparator;
- (void)_configureViewElementsForAX;
- (double)_descriptionBottomMarginWithBaselineMargin:(double)arg1;
- (double)_descriptionTopMarginWithBaselineMargin:(double)arg1 otherFont:(id)arg2;
- (void)didTapButtonForEpisodeFrameView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

