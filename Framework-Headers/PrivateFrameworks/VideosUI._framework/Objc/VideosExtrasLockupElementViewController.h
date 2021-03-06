//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VideosExtrasViewElementViewController.h>

@class IKLockupElement, MPUContentSizeLayoutConstraint, NSLayoutConstraint, NSString, UILabel, UIView, VideosExtrasConstrainedArtworkContainerView;

__attribute__((visibility("hidden")))
@interface VideosExtrasLockupElementViewController : VideosExtrasViewElementViewController
{
    VideosExtrasConstrainedArtworkContainerView *_artworkContainerView;
    UIView *_textContainmentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    NSLayoutConstraint *_artworkContainerTopConstraint;
    NSLayoutConstraint *_artworkContainerXConstraint;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    struct CGSize _artworkSize;
    NSLayoutConstraint *_textTopConstraint;
    NSLayoutConstraint *_textHeightConstraint;
    NSLayoutConstraint *_textCenterYConstraint;
    NSLayoutConstraint *_textLeadingConstraint;
    NSLayoutConstraint *_textTrailingConstraint;
    NSLayoutConstraint *_textBottomConstraint;
    NSLayoutConstraint *_titleVerticalConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    MPUContentSizeLayoutConstraint *_descriptionBaselineConstraint;
}

@property (readonly) NSString *descriptionTextStyle;
@property (readonly) IKLockupElement *viewElement; // @dynamic viewElement;

- (void).cxx_destruct;
- (void)_configureArtworkViewForImageElement:(id)arg1 overlays:(id)arg2;
- (void)_configureDescriptionLabelForTextElement:(id)arg1;
- (void)_configureSubtitleLabelForTextElement:(id)arg1;
- (void)_configureTitleLabelForTextElement:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_prepareLayout;
- (id)initWithViewElement:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

