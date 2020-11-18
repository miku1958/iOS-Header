//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXTranscriptBubbleViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUICore/PXTouchingUIGestureRecognizerDelegate-Protocol.h>

@class NSError, NSString, NSURL, PHFetchResult, PHMomentShare, PHPhotoLibrary, PXCMMPreviewAsset, PXCMMPreviewUIImageProvider, PXCMMSpecManager, PXCMMTranscriptBubbleStatusView, PXCMMTranscriptBubbleView, PXMomentShareStatusPresentation;
@protocol PXCMMTranscriptBubbleTouchDelegate, PXUIImageProvider;

@interface PXCMMTranscriptBubbleViewController : PXTranscriptBubbleViewController <PXPhotoLibraryUIChangeObserver, PXChangeObserver, PXTouchingUIGestureRecognizerDelegate>
{
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_backingFetchResult;
    PHFetchResult *_keyAssetFetch;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    long long _saveInProgressTotal;
    PXCMMTranscriptBubbleView *_bubbleView;
    PXCMMTranscriptBubbleStatusView *_errorStatusView;
    PXCMMTranscriptBubbleStatusView *_loadingStatusView;
    id<PXUIImageProvider> _mediaProvider;
    PXCMMSpecManager *_specManager;
    PXCMMPreviewAsset *_previewAsset;
    PXCMMPreviewUIImageProvider *_previewImageProvider;
    BOOL _readyForBubbleStateTransitions;
    BOOL _isExpungingAndRefetching;
    BOOL _triggeredForcedSync;
    BOOL _isSender;
    BOOL _isPending;
    BOOL _highlighted;
    NSURL *_url;
    id<PXCMMTranscriptBubbleTouchDelegate> _touchDelegate;
    long long _bubbleState;
    long long _targetState;
    NSError *_error;
}

@property (nonatomic) long long bubbleState; // @synthesize bubbleState=_bubbleState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (readonly, nonatomic) BOOL isPending; // @synthesize isPending=_isPending;
@property (readonly, nonatomic) BOOL isSender; // @synthesize isSender=_isSender;
@property (readonly, nonatomic) PHMomentShare *momentShare;
@property (strong, nonatomic) PXMomentShareStatusPresentation *momentShareStatusPresentation; // @synthesize momentShareStatusPresentation=_momentShareStatusPresentation;
@property (readonly) Class superclass;
@property (nonatomic) long long targetState; // @synthesize targetState=_targetState;
@property (weak, nonatomic) id<PXCMMTranscriptBubbleTouchDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

+ (BOOL)_isPermanentFailureURL:(id)arg1;
+ (void)_registerPermanentFailureURL:(id)arg1;
- (void).cxx_destruct;
- (void)_acceptMomentShareIfNeeded:(id)arg1;
- (void)_autoAcceptMomentShareIfNeeded:(id)arg1;
- (BOOL)_canFetchAssetsFromMomentShare:(id)arg1;
- (id)_debugStatusDescription;
- (void)_doubleTapGesture:(id)arg1;
- (void)_ensureBubbleStateTransition;
- (id)_fetchKeyAssetsFromBackingCollection;
- (void)_fetchMomentShareFromNetworkURL:(id)arg1;
- (void)_longPressGesture:(id)arg1;
- (void)_momentShareURL:(id)arg1 fetchDidFailWithError:(id)arg2;
- (void)_panGesture:(id)arg1;
- (id)_primaryDescription;
- (void)_readyForStateTransition;
- (void)_retryMomentShareFetch;
- (id)_secondaryDescription;
- (BOOL)_shouldNavigateToContent;
- (BOOL)_shouldOpenCloudSettings;
- (BOOL)_shouldOpenInSafari;
- (BOOL)_shouldRetryOnTap;
- (BOOL)_shouldShowContent;
- (void)_tapGesture:(id)arg1;
- (void)_triggerForcedSyncIfNeeded;
- (void)_updateBubbleState;
- (void)_updateBubbleView;
- (void)_updateContent;
- (void)_updateMomentShareStatusPresentation;
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1 isSender:(BOOL)arg2 isPending:(BOOL)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)touchingUIGestureRecognizerWillBeginTouching:(id)arg1;
- (void)touchingUIGestureRecognizerWillEndTouching:(id)arg1;
- (void)viewDidLoad;
- (struct CGSize)workaroundSizeForSize:(struct CGSize)arg1;

@end
