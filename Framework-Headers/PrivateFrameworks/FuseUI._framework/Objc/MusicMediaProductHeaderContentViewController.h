//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicEntityPlaybackStatusControllerObserving-Protocol.h>
#import <FuseUI/MusicEntityProductHeaderLockupViewDelegate-Protocol.h>
#import <FuseUI/MusicMediaDetailHeaderContentViewController-Protocol.h>

@class MPAVController, MusicClientContext, MusicContextualLibraryUpdateAlertAction, MusicEntityPlaybackStatusController, MusicEntityProductHeaderLockupView, MusicEntityValueContext, MusicEntityViewProductHeaderLockupContentDescriptor, MusicHairlineView, MusicMediaDetailTintInformation, NSArray, NSString, SKUIClientContext, UIButton, UIImage;
@protocol MusicEntityProviding, MusicMediaProductHeaderContentViewControllerDelegate;

@interface MusicMediaProductHeaderContentViewController : UIViewController <MusicEntityPlaybackStatusControllerObserving, MusicEntityProductHeaderLockupViewDelegate, MusicMediaDetailHeaderContentViewController, MusicClientContextConsuming>
{
    MusicContextualLibraryUpdateAlertAction *_addRemoveLibraryAlertAction;
    NSArray *_addRemoveNotificationObservers;
    MusicHairlineView *_hairlineView;
    MusicContextualLibraryUpdateAlertAction *_keepLocalAlertAction;
    BOOL _needToMakeTitleFirstResponder;
    MusicEntityPlaybackStatusController *_playbackStatusController;
    MPAVController *_player;
    MusicEntityProductHeaderLockupView *_productHeaderLockupView;
    MusicEntityViewProductHeaderLockupContentDescriptor *_productHeaderLockupContentDecriptor;
    double _transitionProgress;
    BOOL _wantsRefreshActivityIndicator;
    BOOL _allowsEditing;
    BOOL _hairlineVisible;
    BOOL _shouldDelayTransitionProgress;
    BOOL _trailingSeparatorInsetFollowsLayoutInsets;
    MusicEntityValueContext *_containerEntityValueContext;
    MusicClientContext *_clientContext;
    id<MusicEntityProviding> _containerEntityProvider;
    id<MusicEntityProviding> _contextualActionsOverrideTracklistEntityProvider;
    id<MusicMediaProductHeaderContentViewControllerDelegate> _delegate;
    UIImage *_editedContentArtworkImage;
    NSString *_lockupArtworkProperty;
    MusicMediaDetailTintInformation *_mediaDetailTintInformation;
    long long _presentationSource;
    struct MusicEntityDownloadInformation _downloadInformation;
}

@property (readonly, nonatomic) MusicEntityValueContext *_containerEntityValueContext; // @synthesize _containerEntityValueContext;
@property (nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property (strong, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) id<MusicEntityProviding> containerEntityProvider; // @synthesize containerEntityProvider=_containerEntityProvider;
@property (strong, nonatomic) id<MusicEntityProviding> contextualActionsOverrideTracklistEntityProvider; // @synthesize contextualActionsOverrideTracklistEntityProvider=_contextualActionsOverrideTracklistEntityProvider;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MusicMediaProductHeaderContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct MusicEntityDownloadInformation downloadInformation; // @synthesize downloadInformation=_downloadInformation;
@property (readonly, copy, nonatomic) NSString *editableText;
@property (strong, nonatomic) UIImage *editedContentArtworkImage; // @synthesize editedContentArtworkImage=_editedContentArtworkImage;
@property (nonatomic, getter=isHairlineVisible) BOOL hairlineVisible; // @synthesize hairlineVisible=_hairlineVisible;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *lockupArtworkProperty; // @synthesize lockupArtworkProperty=_lockupArtworkProperty;
@property (copy, nonatomic) MusicMediaDetailTintInformation *mediaDetailTintInformation; // @synthesize mediaDetailTintInformation=_mediaDetailTintInformation;
@property (readonly, nonatomic) long long presentationSource; // @synthesize presentationSource=_presentationSource;
@property (readonly, nonatomic) UIButton *shareButton;
@property (nonatomic) BOOL shouldDelayTransitionProgress; // @synthesize shouldDelayTransitionProgress=_shouldDelayTransitionProgress;
@property (readonly) Class superclass;
@property (nonatomic) BOOL trailingSeparatorInsetFollowsLayoutInsets; // @synthesize trailingSeparatorInsetFollowsLayoutInsets=_trailingSeparatorInsetFollowsLayoutInsets;

- (void).cxx_destruct;
- (void)_applyLockupArtworkProperty;
- (void)_applyProductHeaderLayoutInsets;
- (void)_applyTransitionProgress;
- (BOOL)_calculateWantsRefreshButton;
- (void)_configureProductHeaderLockupContentDescriptor:(id)arg1 withTintInformation:(id)arg2;
- (void)_configureWithTintInformation;
- (void)_containerEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (struct CGRect)_hairlineViewFrame;
- (id)_loadProductHeaderLockupContentDescriptor;
- (void)_presentContextualActionsFromButton:(id)arg1;
- (id)_productHeaderLockupContentDescriptor;
- (void)_reloadAddRemoveLibraryAndKeepLocalActions;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_reloadDownloadProgressButtonState;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)_updateContentTaste;
- (void)_updateHairline;
- (void)_updateHairlineLayoutInsets;
- (void)_updateNavigationTitle;
- (void)_updatePlaybackStatusForLockupView;
- (void)_updatePreferredContentSize;
- (void)_updateProductHeaderLockupProperties;
- (void)dealloc;
- (id)initWithContainerEntityProvider:(id)arg1 presentationSource:(long long)arg2;
- (void)makeEditableTitleBecomeFirstResponder;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (void)playbackStatusControllerPlaybackStatusDidChange:(id)arg1;
- (void)productHeaderLockupView:(id)arg1 didSelectCameraButton:(id)arg2;
- (void)productHeaderLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)productHeaderLockupViewDidSelectContextualActionsButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectDownloadProgressButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectEditButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectLikeDislikeButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectRefreshButton:(id)arg1;
- (void)productHeaderLockupViewDidSelectShareButton:(id)arg1;
- (void)productHeaderLockupViewDidUpdateEditableText:(id)arg1;
- (void)productHeaderLockupViewTintColorDidChange:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 transitionProgress:(double)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

