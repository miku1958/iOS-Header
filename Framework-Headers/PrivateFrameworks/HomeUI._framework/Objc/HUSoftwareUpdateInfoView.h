//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUInlineWebContainerViewDelegate-Protocol.h>
#import <HomeUI/UIScrollViewDelegate-Protocol.h>

@class HFItem, HUInlineWebContainerView, HUSoftwareUpdateAnimatedIcon, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UIStackView;
@protocol HUResizableCellDelegate, HUSoftwareUpdateInternalResizingDelegate;

@interface HUSoftwareUpdateInfoView : UIView <UIScrollViewDelegate, HUInlineWebContainerViewDelegate, HUCellProtocol>
{
    HFItem *_item;
    id<HUSoftwareUpdateInternalResizingDelegate> _internalViewResizingDelegate;
    HUSoftwareUpdateAnimatedIcon *_animatedGearView;
    UIImage *_gearBackgroundImage;
    UIImageView *_gearBackgroundImageView;
    UIStackView *_labelStackView;
    UILabel *_updateNameLabel;
    UILabel *_publisherNameLabel;
    UILabel *_sizeLabel;
    HUInlineWebContainerView *_releaseNotesSummaryView;
    NSLayoutConstraint *_releaseNotesHeightConstraint;
}

@property (strong, nonatomic) HUSoftwareUpdateAnimatedIcon *animatedGearView; // @synthesize animatedGearView=_animatedGearView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIImage *gearBackgroundImage; // @synthesize gearBackgroundImage=_gearBackgroundImage;
@property (strong, nonatomic) UIImageView *gearBackgroundImageView; // @synthesize gearBackgroundImageView=_gearBackgroundImageView;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HUSoftwareUpdateInternalResizingDelegate> internalViewResizingDelegate; // @synthesize internalViewResizingDelegate=_internalViewResizingDelegate;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (strong, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property (strong, nonatomic) UILabel *publisherNameLabel; // @synthesize publisherNameLabel=_publisherNameLabel;
@property (strong, nonatomic) NSLayoutConstraint *releaseNotesHeightConstraint; // @synthesize releaseNotesHeightConstraint=_releaseNotesHeightConstraint;
@property (strong, nonatomic) HUInlineWebContainerView *releaseNotesSummaryView; // @synthesize releaseNotesSummaryView=_releaseNotesSummaryView;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (strong, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *updateNameLabel; // @synthesize updateNameLabel=_updateNameLabel;

- (void).cxx_destruct;
- (void)_updateReleaseNotesHeightIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)inlineWebContainerViewDidFinishLoadingContent:(id)arg1;
- (void)layoutSubviews;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end
