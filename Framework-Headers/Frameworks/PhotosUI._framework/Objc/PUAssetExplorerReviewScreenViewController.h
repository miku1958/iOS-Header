//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PUAssetExplorerReviewScreenActionManagerDelegate-Protocol.h>
#import <PhotosUI/PUReviewAssetProvider-Protocol.h>

@class NSIndexPath, NSMutableDictionary, NSSet, NSString, PUActivityProgressController, PUAssetExplorerReviewScreenActionManager, PUAssetExplorerReviewScreenAssetsDataSourceManager, PUAssetsDataSourceManager, PUBrowsingSession, PUJoiningMediaProvider, PUMediaProvider, PUReviewScreenBarsModel, PUReviewScreenSpec, UIAlertController;
@protocol PUAssetExplorerReviewScreenViewControllerDelegate, PUReviewAssetProvider;

@interface PUAssetExplorerReviewScreenViewController : UIViewController <PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider>
{
    struct {
        BOOL respondsToDidPressCancel;
        BOOL respondsToDidPressRetake;
        BOOL respondsToDidPerformCompletionAction;
        BOOL respondsToCanPerformActionType;
        BOOL respondsToShouldEnableActionType;
        BOOL respondsToWillTransitionToSize;
    } _delegateFlags;
    id<PUAssetExplorerReviewScreenViewControllerDelegate> _delegate;
    NSIndexPath *_initialIndexPath;
    NSSet *_initialSelectedAssetUUIDs;
    NSSet *_initialDisabledLivePhotoAssetUUIDs;
    PUReviewScreenBarsModel *_reviewBarsModel;
    unsigned long long _sourceType;
    PUAssetsDataSourceManager *__clientDataSourceManager;
    PUAssetExplorerReviewScreenAssetsDataSourceManager *__reviewDataSourceManager;
    PUMediaProvider *__clientMediaProvider;
    PUJoiningMediaProvider *__reviewMediaProvider;
    id<PUReviewAssetProvider> __reviewAssetProvider;
    PUAssetExplorerReviewScreenActionManager *__actionManager;
    PUBrowsingSession *__browsingSession;
    NSMutableDictionary *__reviewAssetRequestsByUUID;
    NSMutableDictionary *__substituteAssetsByUUID;
    PUActivityProgressController *__requestProgressController;
    UIAlertController *__failedReviewAssetRequestAlertController;
    unsigned long long __options;
    PUReviewScreenSpec *__spec;
}

@property (readonly, nonatomic) PUAssetExplorerReviewScreenActionManager *_actionManager; // @synthesize _actionManager=__actionManager;
@property (readonly, nonatomic) PUBrowsingSession *_browsingSession; // @synthesize _browsingSession=__browsingSession;
@property (readonly, nonatomic) PUAssetsDataSourceManager *_clientDataSourceManager; // @synthesize _clientDataSourceManager=__clientDataSourceManager;
@property (readonly, nonatomic) PUMediaProvider *_clientMediaProvider; // @synthesize _clientMediaProvider=__clientMediaProvider;
@property (strong, nonatomic, setter=_setFailedReviewAssetRequestAlertController:) UIAlertController *_failedReviewAssetRequestAlertController; // @synthesize _failedReviewAssetRequestAlertController=__failedReviewAssetRequestAlertController;
@property (readonly, nonatomic) unsigned long long _options; // @synthesize _options=__options;
@property (strong, nonatomic, setter=_setRequestProgressController:) PUActivityProgressController *_requestProgressController; // @synthesize _requestProgressController=__requestProgressController;
@property (readonly, nonatomic) id<PUReviewAssetProvider> _reviewAssetProvider; // @synthesize _reviewAssetProvider=__reviewAssetProvider;
@property (readonly, nonatomic) NSMutableDictionary *_reviewAssetRequestsByUUID; // @synthesize _reviewAssetRequestsByUUID=__reviewAssetRequestsByUUID;
@property (readonly, nonatomic) PUAssetExplorerReviewScreenAssetsDataSourceManager *_reviewDataSourceManager; // @synthesize _reviewDataSourceManager=__reviewDataSourceManager;
@property (readonly, nonatomic) PUJoiningMediaProvider *_reviewMediaProvider; // @synthesize _reviewMediaProvider=__reviewMediaProvider;
@property (readonly, nonatomic) PUReviewScreenSpec *_spec; // @synthesize _spec=__spec;
@property (readonly, nonatomic) NSMutableDictionary *_substituteAssetsByUUID; // @synthesize _substituteAssetsByUUID=__substituteAssetsByUUID;
@property (readonly, nonatomic) PUAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUAssetExplorerReviewScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSSet *initialDisabledLivePhotoAssetUUIDs; // @synthesize initialDisabledLivePhotoAssetUUIDs=_initialDisabledLivePhotoAssetUUIDs;
@property (readonly, copy, nonatomic) NSIndexPath *initialIndexPath; // @synthesize initialIndexPath=_initialIndexPath;
@property (readonly, copy, nonatomic) NSSet *initialSelectedAssetUUIDs; // @synthesize initialSelectedAssetUUIDs=_initialSelectedAssetUUIDs;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (readonly, nonatomic) PUReviewScreenBarsModel *reviewBarsModel; // @synthesize reviewBarsModel=_reviewBarsModel;
@property (readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelReviewAssetRequestForAssetUUID:(id)arg1;
- (void)_cancelReviewAssetRequests;
- (id)_createBrowsingSessionIfNecessary;
- (id)_createProgressControllerForRemainingRequests:(id)arg1;
- (id)_createReviewAssetRequestForAsset:(id)arg1;
- (void)_deleteAllLinkedFiles;
- (id)_getSelectedSubstituteAssetsAndRemoveFilesForUnneededAssets;
- (void)_handleCompletionAction:(unsigned long long)arg1;
- (void)_handleFailedReviewAssetRequestAlertControllerDismissal;
- (void)_handleProgressControllerCanceled:(id)arg1;
- (void)_handleReviewAssetRequest:(id)arg1 completedWithSuccess:(BOOL)arg2 canceled:(BOOL)arg3 error:(id)arg4 reviewAsset:(id)arg5;
- (void)_performCancelAction;
- (void)_performCompletionAction:(unsigned long long)arg1;
- (void)_performCompletionActionSteps:(unsigned long long)arg1;
- (void)_performRetakeAction;
- (void)_presentConfidentialityAlertWithConfirmAction:(CDUnknownBlockType)arg1 abortAction:(CDUnknownBlockType)arg2;
- (id)_remainingReviewAssetRequests;
- (void)_requestReviewAssetForAsset:(id)arg1;
- (id)_reviewAssetRequestForAssetUUID:(id)arg1;
- (void)_setSubstituteAsset:(id)arg1;
- (void)_showFailedReviewAssetRequestAlert;
- (id)_substituteAssetForUUID:(id)arg1;
- (void)_tearDownProgressController;
- (void)_updateForCompletedReviewAssetRequest:(id)arg1;
- (void)_updateWithSubstituteAsset:(id)arg1 shouldSelect:(BOOL)arg2;
- (BOOL)assetExplorerReviewScreenActionManager:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenActionManager:(id)arg1 didPressFunEffectsForAsset:(id)arg2;
- (void)assetExplorerReviewScreenActionManager:(id)arg1 didPressSelectForAsset:(id)arg2;
- (void)assetExplorerReviewScreenActionManager:(id)arg1 didToggleLivePhoto:(id)arg2;
- (BOOL)assetExplorerReviewScreenActionManager:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenActionManagerDidPressCancel:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressDone:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressRetake:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressSend:(id)arg1;
- (void)funEffectsViewController:(id)arg1 didSaveAsset:(id)arg2 withCompletion:(unsigned long long)arg3;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 sourceType:(unsigned long long)arg7;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 sourceType:(unsigned long long)arg7 reviewBarsModel:(id)arg8 options:(unsigned long long)arg9;
- (void)loadView;
- (void)photoEditController:(id)arg1 didFinishEditingSessionForAsset:(id)arg2 completed:(BOOL)arg3;
- (void)photoMarkupController:(id)arg1 didFinishWithSavedAsset:(id)arg2;
- (id)reviewAssetProviderRequestForDisplayAsset:(id)arg1;
- (id)reviewScreenBarsModelForAssetExplorerReviewScreenActionManager:(id)arg1;
- (void)videoEditViewController:(id)arg1 didFinishEditingSessionForAsset:(id)arg2 completed:(BOOL)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

