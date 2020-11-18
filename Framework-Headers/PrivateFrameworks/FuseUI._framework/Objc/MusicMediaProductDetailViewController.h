//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicMediaDetailViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicEntityProviderDownloadInformationControllerObserver-Protocol.h>
#import <FuseUI/MusicJSNativeViewControllerFactory-Protocol.h>
#import <FuseUI/MusicJSProductNativeViewControllerDelegate-Protocol.h>
#import <FuseUI/MusicMediaProductHeaderContentViewControllerDelegate-Protocol.h>
#import <FuseUI/MusicTransferObserver-Protocol.h>
#import <FuseUI/UIViewControllerRestoration-Protocol.h>

@class MPArtworkCatalog, MusicClientContext, MusicEntityProviderDownloadInformationController, MusicEntityValueContext, MusicMediaDetailHeaderViewController, MusicMediaProductDetailHeaderConfiguration, MusicMediaProductHeaderContentViewController, MusicMediaProductSplitDetailViewController, MusicMediaProductSplitMainViewController, MusicTransferAggregator, NSArray, NSMutableArray, NSString, UIBarButtonItem, UIImage, UIScrollView, UIViewController;
@protocol MusicEntityProviding;

@interface MusicMediaProductDetailViewController : MusicMediaDetailViewController <MusicEntityProviderDownloadInformationControllerObserver, MusicJSProductNativeViewControllerDelegate, MusicTransferObserver, UIViewControllerRestoration, MusicMediaProductHeaderContentViewControllerDelegate, MusicClientContextConsuming, MusicJSNativeViewControllerFactory>
{
    BOOL _allowsProductHairline;
    MPArtworkCatalog *_artworkCatalog;
    UIBarButtonItem *_cancelButtonItem;
    MusicMediaProductDetailHeaderConfiguration *_detailHeaderConfiguration;
    struct MusicEntityDownloadInformation _downloadInformation;
    MusicEntityProviderDownloadInformationController *_entityProviderDownloadInformationController;
    BOOL _hasDetailTintInformation;
    BOOL _editingWasCancelled;
    BOOL _hasReceivedViewWillAppearAtLeastOnce;
    BOOL _isObservingClientContextTransferAggregatorDidChangeNotification;
    MusicMediaProductHeaderContentViewController *_mediaProductHeaderContentViewController;
    MusicMediaDetailHeaderViewController *_mediaDetailHeaderViewController;
    BOOL _needsEffectiveNavigationItemUpdateForEditingStateChangeUponViewWillAppear;
    BOOL _needsArtworkCatalogUpdate;
    BOOL _needsColorAnalysisUpdate;
    NSArray *_nonEditingLeftBarButtonItems;
    NSArray *_nonEditingRightBarButtonItems;
    NSMutableArray *_pendingTintInformationDispatchEvents;
    struct CGSize _previousMaximumHeaderSize;
    UIViewController *_relatedContentViewController;
    MusicTransferAggregator *_transferAggregator;
    BOOL _forContentCreation;
    MusicEntityValueContext *_containerEntityValueContext;
    MusicClientContext *_clientContext;
    id<MusicEntityProviding> _containerEntityProvider;
    UIImage *_editedContentArtworkImage;
    long long _presentationSource;
    id<MusicEntityProviding> _tracklistEntityProvider;
}

@property (readonly, nonatomic) MusicEntityValueContext *_containerEntityValueContext; // @synthesize _containerEntityValueContext;
@property (strong, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, nonatomic) id<MusicEntityProviding> containerEntityProvider; // @synthesize containerEntityProvider=_containerEntityProvider;
@property (readonly, nonatomic) UIScrollView *containerScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIImage *editedContentArtworkImage; // @synthesize editedContentArtworkImage=_editedContentArtworkImage;
@property (readonly, nonatomic, getter=isForContentCreation) BOOL forContentCreation; // @synthesize forContentCreation=_forContentCreation;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MusicMediaProductHeaderContentViewController *headerContentViewController; // @dynamic headerContentViewController;
@property (strong, nonatomic) MusicMediaDetailHeaderViewController *headerViewController; // @dynamic headerViewController;
@property (readonly, nonatomic) long long presentationSource; // @synthesize presentationSource=_presentationSource;
@property (readonly, nonatomic) MusicMediaProductSplitDetailViewController *splitDetailViewController; // @dynamic splitDetailViewController;
@property (strong, nonatomic) MusicMediaProductSplitMainViewController *splitMainViewController; // @dynamic splitMainViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<MusicEntityProviding> tracklistEntityProvider; // @synthesize tracklistEntityProvider=_tracklistEntityProvider;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void).cxx_destruct;
- (BOOL)_calculateHeaderContentViewControllerEditing;
- (void)_cancelEditing;
- (void)_commitEditing;
- (id)_containerMetadataContextWithContainerJSDictionary:(id)arg1 tracklistItemJSDictionaries:(id)arg2;
- (void)_dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_effectiveNavigationItem;
- (void)_handleCancelButtonTapped:(id)arg1;
- (void)_handleClientContextTransferAggregatorDidChangeNotification:(id)arg1;
- (void)_handleContainerEntityProviderDidInvalidateNotification:(id)arg1;
- (id)_loadDetailHeaderConfiguration;
- (id)_loadProductHeaderContentViewController;
- (id)_loadProductSplitDetailViewController;
- (id)_loadProductSplitMainViewController;
- (id)_mediaDetailHeaderViewController;
- (id)_mediaProductHeaderContentViewController;
- (long long)_productDescriptionTextStyle;
- (void)_registerForClientContextTransferAggregatorDidChangeNotification;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_reloadTransferAggregator;
- (void)_sendPendingTintInformationDispatchEvents;
- (void)_setNeedsDetailHeaderConfigurationUpdate;
- (BOOL)_shouldAutomaticallyPopForMissingContainerEntityValueProvider;
- (void)_unregisterForClientContextTransferAggregatorDidChangeNotification;
- (void)_updateAllowsProductHairline;
- (void)_updateColorAnalysisIfNeededWithShouldTemporarilyWait:(BOOL)arg1;
- (void)_updateDetailHeaderConfiguration;
- (void)_updateEffectiveNavigationItemForEditingStateChangeAnimated:(BOOL)arg1;
- (void)_updateRelatedContentViewControllerPlacement;
- (BOOL)allowsHairline;
- (BOOL)allowsShowingSplitDetailViewController;
- (void)dealloc;
- (void)detailTintInformationDidChange;
- (void)downloadInformationController:(id)arg1 downloadInformationDidChange:(struct MusicEntityDownloadInformation)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 forContentCreation:(BOOL)arg5;
- (void)jsProductNativeViewController:(id)arg1 presentShareDocument:(id)arg2 options:(id)arg3;
- (void)jsProductNativeViewController:(id)arg1 setProductEntityValueProviderData:(id)arg2;
- (void)jsProductNativeViewController:(id)arg1 setProminentTrackStoreID:(long long)arg2;
- (void)jsProductNativeViewController:(id)arg1 setRelatedContentDocument:(id)arg2 options:(id)arg3;
- (void)jsProductNativeViewController:(id)arg1 setReportingInformation:(id)arg2;
- (void)jsProductNativeViewController:(id)arg1 setTracklistItems:(id)arg2;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (void)mediaProductHeaderContentViewController:(id)arg1 didSelectShareButton:(id)arg2;
- (void)mediaProductHeaderContentViewControllerDidTapEdit:(id)arg1;
- (void)mediaProductHeaderContentViewControllerDidUpdateEditableText:(id)arg1;
- (BOOL)music_allowsMetricsEvents;
- (BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (id)previewMenuItems;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showingSplitDetailViewControllerDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transferAggregator:(id)arg1 downloadStatusChangedAtIndexes:(id)arg2;
- (void)transferAggregatorDownloadsDidChange:(id)arg1;
- (void)updateWithHeaderHeight:(double)arg1 maximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

