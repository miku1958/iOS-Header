//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicEntityEditableVerticalLockupViewDelegate-Protocol.h>
#import <FuseUI/MusicEntityPlaybackStatusControllerObserving-Protocol.h>
#import <FuseUI/MusicMediaDetailSplitViewController-Protocol.h>
#import <FuseUI/MusicVerticalScrollingContainerViewControllerDelegate-Protocol.h>

@class MPAVController, MusicClientContext, MusicEntityEditableVerticalLockupView, MusicEntityPlaybackStatusController, MusicEntityValueContext, MusicMediaDetailTintInformation, MusicVerticalScrollingContainerViewController, NSString, UIImage;
@protocol MusicEntityProviding, MusicMediaProductSplitDetailViewControllerDelegate;

@interface MusicMediaProductSplitDetailViewController : UIViewController <MusicEntityPlaybackStatusControllerObserving, MusicEntityEditableVerticalLockupViewDelegate, MusicVerticalScrollingContainerViewControllerDelegate, MusicClientContextConsuming, MusicMediaDetailSplitViewController>
{
    id<MusicEntityProviding> _containerEntityProvider;
    MusicEntityValueContext *_containerEntityValueContext;
    MusicClientContext *_clientContext;
    MusicEntityPlaybackStatusController *_playbackStatusController;
    MPAVController *_player;
    MusicEntityEditableVerticalLockupView *_verticalLockupView;
    MusicVerticalScrollingContainerViewController *_verticalScrollingContainerViewController;
    UIImage *_editedContentArtworkImage;
    NSString *_lockupArtworkProperty;
    MusicMediaDetailTintInformation *_mediaDetailTintInformation;
    id<MusicMediaProductSplitDetailViewControllerDelegate> _mediaSplitViewControllerDelegate;
    UIViewController *_relatedContentViewController;
}

@property (strong, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIImage *editedContentArtworkImage; // @synthesize editedContentArtworkImage=_editedContentArtworkImage;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *lockupArtworkProperty; // @synthesize lockupArtworkProperty=_lockupArtworkProperty;
@property (copy, nonatomic) MusicMediaDetailTintInformation *mediaDetailTintInformation; // @synthesize mediaDetailTintInformation=_mediaDetailTintInformation;
@property (weak, nonatomic) id<MusicMediaProductSplitDetailViewControllerDelegate> mediaSplitViewControllerDelegate; // @synthesize mediaSplitViewControllerDelegate=_mediaSplitViewControllerDelegate;
@property (strong, nonatomic) UIViewController *relatedContentViewController; // @synthesize relatedContentViewController=_relatedContentViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyTintInformation;
- (struct UIEdgeInsets)_calculateArtworkDescriptorEdgeInsets;
- (void)_containerEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_reloadVerticalScrollingContainerItems;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)_updatePlaybackStatusForLockupView;
- (void)_updateVerticalLockupViewSize;
- (void)cancelEditing;
- (void)commitEditing;
- (id)contentScrollView;
- (void)dealloc;
- (void)editableVerticalLockupView:(id)arg1 didSelectCameraButton:(id)arg2;
- (id)initWithContainerEntityProvider:(id)arg1 clientContext:(id)arg2;
- (void)playbackStatusControllerPlaybackStatusDidChange:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)verticalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)verticalScrollingContainerViewController:(id)arg1 willEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)verticalScrollingContainerViewControllerContentSizeDidChange:(id)arg1;
- (void)verticalScrollingContainerViewControllerDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

