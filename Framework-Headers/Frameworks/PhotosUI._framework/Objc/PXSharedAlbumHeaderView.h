//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PXFeedSectionInfo, UIImage, UIImageView, UILabel;

@interface PXSharedAlbumHeaderView : UIView
{
    BOOL _useInPopover;
    BOOL _isNew;
    BOOL _isObservingLastExitedForYou;
    unsigned long long _textColorStyle;
    unsigned long long _tappableArea;
    unsigned long long _layoutStyle;
    PXFeedSectionInfo *_sectionInfo;
    UIImage *_headerImage;
    unsigned long long _headerImageTag;
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_chevronView;
}

@property (strong, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property (strong, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property (nonatomic) unsigned long long headerImageTag; // @synthesize headerImageTag=_headerImageTag;
@property (strong, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property (nonatomic) BOOL isNew; // @synthesize isNew=_isNew;
@property (nonatomic) BOOL isObservingLastExitedForYou; // @synthesize isObservingLastExitedForYou=_isObservingLastExitedForYou;
@property (nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (strong, nonatomic) PXFeedSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (nonatomic) unsigned long long tappableArea; // @synthesize tappableArea=_tappableArea;
@property (nonatomic) unsigned long long textColorStyle; // @synthesize textColorStyle=_textColorStyle;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (nonatomic) BOOL useInPopover; // @synthesize useInPopover=_useInPopover;

+ (void)preloadResources;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_lastExitedForYouDateDidChange:(id)arg1;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(BOOL)arg2;
- (BOOL)_showChevron;
- (BOOL)_showSubtitle;
- (void)_updateAvatar:(unsigned long long)arg1;
- (void)_updateBackgroundColor;
- (void)_updateHeaderImage;
- (void)_updateIsNew;
- (void)_updateSubtitle;
- (void)_updateTitle;
- (void)_updateUI;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

