//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicMediaDetailViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicJSNativeViewControllerFactory-Protocol.h>
#import <FuseUI/MusicJSProfileNativeViewControllerDelegate-Protocol.h>
#import <FuseUI/MusicMediaProfileHeaderContentViewControllerDelegate-Protocol.h>
#import <FuseUI/SKUIModalSourceViewProvider-Protocol.h>
#import <FuseUI/UIViewControllerRestoration-Protocol.h>

@class MPArtworkCatalog, MPMediaItemCollection, MusicClientContext, MusicEntityValueContext, MusicMediaDetailHeaderViewController, MusicMediaProfileHeaderContentViewController, MusicMediaProfileSplitDetailViewController, MusicMediaProfileSplitMainViewController, NSArray, NSMutableArray, NSNumber, NSString, UIViewController;
@protocol MusicEntityProviding;

@interface MusicMediaProfileDetailViewController : MusicMediaDetailViewController <MusicJSNativeViewControllerFactory, MusicJSProfileNativeViewControllerDelegate, MusicMediaProfileHeaderContentViewControllerDelegate, SKUIModalSourceViewProvider, UIViewControllerRestoration, MusicClientContextConsuming>
{
    MPMediaItemCollection *_artistMediaItemCollection;
    MPArtworkCatalog *_artworkCatalog;
    id<MusicEntityProviding> _containerEntityProvider;
    MusicEntityValueContext *_containerEntityValueContext;
    BOOL _didDispatchLoadEvent;
    NSString *_followerCountText;
    NSString *_followersText;
    BOOL _hasDetailTintInformation;
    BOOL _isAdminEnabled;
    BOOL _isAlbumArtist;
    BOOL _isExpectingRelatedContentDocument;
    BOOL _isUsingHeaderLockupProfileImage;
    BOOL _isUsingUberArtistHeroImage;
    BOOL _isWaitingToPushMoreRelatedContentView;
    NSArray *_jsVisibleSegments;
    BOOL _needsArtworkCatalogUpdate;
    BOOL _needsColorAnalysisUpdate;
    long long _numberOfFollowers;
    NSMutableArray *_pendingTintInformationDispatchEvents;
    struct CGSize _previousMaximumHeaderSize;
    unsigned long long _profileType;
    UIViewController *_relatedContentViewController;
    NSString *_segmentIdentifierNeedingContent;
    BOOL _socialHidden;
    BOOL _sharingHidden;
    NSNumber *_storeAdamID;
    MusicClientContext *_clientContext;
}

@property (strong, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MusicMediaProfileHeaderContentViewController *headerContentViewController; // @dynamic headerContentViewController;
@property (strong, nonatomic) MusicMediaDetailHeaderViewController *headerViewController; // @dynamic headerViewController;
@property (nonatomic) BOOL shouldAutomaticallySelectMyMusicSegment;
@property (readonly, nonatomic) MusicMediaProfileSplitDetailViewController *splitDetailViewController; // @dynamic splitDetailViewController;
@property (strong, nonatomic) MusicMediaProfileSplitMainViewController *splitMainViewController; // @dynamic splitMainViewController;
@property (readonly) Class superclass;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void).cxx_destruct;
- (void)_accessMoreRelatedContentDocumentUsingBlock:(CDUnknownBlockType)arg1;
- (id)_activeDocumentContainerViewController;
- (void)_checkAdminPermission;
- (void)_checkAdminPermissionForCurrentProfile;
- (void)_containerEntityValueProviderDidInvalidateNotification:(id)arg1;
- (void)_dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dispatchNeedsContentForDocumentIdentifier:(id)arg1;
- (void)_dispatchNeedsContentForSegmentWithIdentifier:(id)arg1;
- (void)_pushMoreRelatedContentDocument:(id)arg1 options:(id)arg2;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_sendPendingTintInformationDispatchEvents;
- (BOOL)_shouldUseAvailableContent;
- (void)_updateColorAnalysisIfNeededWithShouldTemporarilyWait:(BOOL)arg1;
- (void)_updateFollowText;
- (void)_updateHeaderProperties;
- (void)_updateProfileTitle;
- (void)_updateStoreCapabilities;
- (BOOL)allowsHairline;
- (BOOL)allowsShowingSplitDetailViewController;
- (void)dealloc;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithContainerEntityProvider:(id)arg1 clientContext:(id)arg2 existingJSProfileNativeViewController:(id)arg3 profileType:(unsigned long long)arg4;
- (void)jsProfileNativeViewController:(id)arg1 presentBiographyEditorDocument:(id)arg2 options:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 presentShareDocument:(id)arg2 options:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 setAvailableContentFlags:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setDocument:(id)arg2 options:(id)arg3 forSegmentIdentifier:(id)arg4;
- (void)jsProfileNativeViewController:(id)arg1 setFollowerCountText:(id)arg2 followersText:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 setMoreRelatedContentDocument:(id)arg2 options:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 setNumberOfFollowers:(long long)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setProfileEntityValueProviderData:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setRelatedContentDocument:(id)arg2 options:(id)arg3;
- (void)jsProfileNativeViewController:(id)arg1 setReportingInformation:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setSelectedSegmentIdentifier:(id)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setSocialHidden:(BOOL)arg2;
- (void)jsProfileNativeViewController:(id)arg1 setVisibleSegments:(id)arg2;
- (BOOL)jsProfileNativeViewControllerSupportsRelatedContentDocument:(id)arg1;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (void)mediaProfileHeaderContentViewController:(id)arg1 didSelectContextualActionsButton:(id)arg2;
- (void)mediaProfileHeaderContentViewController:(id)arg1 didSelectEditButton:(id)arg2;
- (void)mediaProfileHeaderContentViewController:(id)arg1 didSelectShareButton:(id)arg2;
- (void)mediaProfileHeaderContentViewController:(id)arg1 didUpdateFollowingState:(BOOL)arg2 forStoreID:(long long)arg3;
- (void)mediaProfileHeaderContentViewControllerDidSelectProfileTitle:(id)arg1;
- (void)mediaProfileSplitMainViewController:(id)arg1 needsContentForSegmentWithIdentifier:(id)arg2;
- (void)mediaProfileSplitMainViewControllerSegmentedControlVisibleDidChange:(id)arg1;
- (void)showingSplitDetailViewControllerDidChange;
- (void)supportsSplitDetailViewControllerDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithHeaderHeight:(double)arg1 maximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)visuallyInsetDidChange;

@end
