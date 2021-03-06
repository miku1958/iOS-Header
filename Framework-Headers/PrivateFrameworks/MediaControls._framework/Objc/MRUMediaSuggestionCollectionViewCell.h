//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>
#import <MediaControls/UIPointerInteractionDelegate-Protocol.h>

@class MRUArtworkView, MRUVisualStylingProvider, NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface MRUMediaSuggestionCollectionViewCell : UICollectionViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>
{
    BOOL _showActivityIndicator;
    MRUArtworkView *_artworkView;
    NSString *_title;
    NSString *_subtitle;
    MRUVisualStylingProvider *_stylingProvider;
    long long _layout;
    UIActivityIndicatorView *_activityView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property (readonly, nonatomic) MRUArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layout; // @synthesize layout=_layout;
@property (nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property (strong, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateContentSizeCategory;
- (void)updateVisiblity;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end

