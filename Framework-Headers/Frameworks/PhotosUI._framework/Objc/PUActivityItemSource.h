//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/UIActivityItemApplicationExtensionSource-Protocol.h>
#import <PhotosUI/UIActivityItemDeferredSource-Protocol.h>
#import <PhotosUI/UIActivityItemSource-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSProgress, NSString, NSURL, PFSharingRemaker, PHAsset, PHAssetExportRequest, PLVideoRemaker, _PUActivityItemSourceOperation;

@interface PUActivityItemSource : NSObject <UIActivityItemDeferredSource, UIActivityItemApplicationExtensionSource, UIActivityItemSource>
{
    PHAsset *_asset;
    NSDictionary *_cachedSharingVariants;
    NSMutableSet *_onDemandExports;
    NSMutableDictionary *_sharingURLs;
    NSString *_sharingUUID;
    NSString *_assetOriginalFilename;
    BOOL _hasRecognizedVideoAdjustments;
    _PUActivityItemSourceOperation *_currentOperation;
    PLVideoRemaker *_remaker;
    CDUnknownBlockType _remakerCompletionHandler;
    id _strongSelf;
    PFSharingRemaker *_photoRemaker;
    NSArray *_nonLocalAssetsActivities;
    BOOL _useStillImage;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _postCompletionHandler;
    long long __remakerWasCancelled;
    PHAssetExportRequest *__assetExportRequest;
    NSProgress *__exportProgress;
    CDUnknownBlockType __exportProgressHandler;
    NSDictionary *__pasteboardRepresentation;
    NSURL *__assetsLibraryURL;
}

@property (strong, nonatomic, setter=_setAssetExportRequest:) PHAssetExportRequest *_assetExportRequest; // @synthesize _assetExportRequest=__assetExportRequest;
@property (strong, setter=_setAssetsLibraryURL:) NSURL *_assetsLibraryURL; // @synthesize _assetsLibraryURL=__assetsLibraryURL;
@property (strong, nonatomic, setter=_setExportProgress:) NSProgress *_exportProgress; // @synthesize _exportProgress=__exportProgress;
@property (copy, nonatomic, setter=_setExportProgressHandler:) CDUnknownBlockType _exportProgressHandler; // @synthesize _exportProgressHandler=__exportProgressHandler;
@property (strong, setter=_setPasteboardRepresentation:) NSDictionary *_pasteboardRepresentation; // @synthesize _pasteboardRepresentation=__pasteboardRepresentation;
@property (setter=_setRemakerWasCancelled:) long long _remakerWasCancelled; // @synthesize _remakerWasCancelled=__remakerWasCancelled;
@property (readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) CDUnknownBlockType postCompletionHandler; // @synthesize postCompletionHandler=_postCompletionHandler;
@property (copy) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useStillImage; // @synthesize useStillImage=_useStillImage;

+ (id)_photosInternalActivities;
+ (id)_sharingErrorWithCode:(long long)arg1 underlyingError:(id)arg2 localizedDescription:(id)arg3 additionalInfo:(id)arg4;
+ (BOOL)supportsAssetLocalIdentifierForActivityType:(id)arg1;
+ (BOOL)supportsPhotoIrisBundleForActivityType:(id)arg1;
- (void).cxx_destruct;
- (id)_activityOperationQueue;
- (void)_beginObservingExportRequest:(id)arg1 withProgressHandler:(CDUnknownBlockType)arg2;
- (void)_cancelVideoRemaking:(id)arg1;
- (void)_cleanupPhotoRemaker;
- (void)_cleanupProgress;
- (void)_cleanupRemaker;
- (BOOL)_copyResourceAtURL:(id)arg1 toURL:(id)arg2 shouldMove:(BOOL)arg3;
- (id)_createManagedURLForResourceAtURL:(id)arg1 shouldMove:(BOOL)arg2 forType:(long long)arg3;
- (id)_createTempPhotoIrisBundle;
- (id)_customAccessibilityLabel;
- (void)_fetchAlternateForActivityType:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchImageForActivityType:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchPhotoIrisForActivityType:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchVideoForActivityType:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_generateURLForType:(long long)arg1 desiredPathExtension:(id)arg2;
- (BOOL)_isColorOptimizationNeededForAsset:(id)arg1 imageURL:(id)arg2;
- (id)_itemForActivityType:(id)arg1;
- (unsigned long long)_maxFileSizeLimitForActivityType:(id)arg1 asset:(id)arg2;
- (id)_newOperationForActivityType:(id)arg1;
- (id)_newPasteboardRepresentationForURL:(id)arg1;
- (void)_operation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)_outboundResourcesDirectoryURL;
- (void)_removeTempFiles;
- (void)_removeTempIrisBundleFile;
- (void)_removeTempPhotoRemakerFile;
- (void)_removeTempVideoRemakerFile;
- (id)_resourceURLForType:(long long)arg1;
- (void)_runExportRequestWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_runOnDemandExportForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setResourceURL:(id)arg1 forType:(long long)arg2;
- (id)_sharingVariants;
- (BOOL)_shouldExcludeAlternateVariantForActivityType:(id)arg1;
- (void)_stopObservingExportRequest;
- (id)_uniformTypeIdentifierForActivityType:(id)arg1;
- (BOOL)_wantsAlternateVariantForActivityType:(id)arg1;
- (BOOL)_wantsAssetsLibraryURLForActivityType:(id)arg1;
- (BOOL)_wantsCompatibleFormatForActivityType:(id)arg1;
- (BOOL)_wantsIrisRemakerURLForActivityType:(id)arg1;
- (BOOL)_wantsLocalAssetsForActivityType:(id)arg1;
- (BOOL)_wantsPhotoIrisBundleForActivityType:(id)arg1;
- (BOOL)_wantsPhotoRemakerURLForActivityType:(id)arg1;
- (BOOL)_wantsVideoRemakerForActivityType:(id)arg1;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewControllerApplicationExtensionItem:(id)arg1;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)cancel;
- (void)cancelRemaking;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 useStillImage:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)remakePhotoWithURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)remakeVideoWithTrimStartTime:(double)arg1 endTime:(double)arg2 forMail:(BOOL)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)runWithActivityType:(id)arg1;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;

@end
