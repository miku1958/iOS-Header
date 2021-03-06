//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHObject.h>

#import <Photos/PHResourceChooserAsset-Protocol.h>
#import <Photos/PHThumbnailAsset-Protocol.h>
#import <Photos/_PLImageLoadingAsset-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSManagedObjectContext, NSManagedObjectID, NSNumber, NSSet, NSString, NSURL, PHPhotoLibrary;

@interface PHAsset : PHObject <PHThumbnailAsset, _PLImageLoadingAsset, PHResourceChooserAsset>
{
    CLLocation *_cachedLocation;
    NSString *_cloudAssetGUID;
    NSSet *_sceneClassifications;
    BOOL _hidden;
    BOOL _favorite;
    BOOL _syncFailureHidden;
    BOOL _cloudIsDeletable;
    BOOL _complete;
    BOOL _hasAdjustments;
    BOOL _hasKeywords;
    BOOL _assetDescriptionWasSet;
    BOOL _canUseLocationCoordinateForLocation;
    BOOL _isPhotoIris;
    BOOL _trashed;
    short _savedAssetType;
    unsigned short _videoCpVisibilityState;
    unsigned short _playbackVariation;
    unsigned short _deferredProcessingNeeded;
    int _avalanchePickType;
    int _exifOrientation;
    float _overallAestheticScore;
    NSDate *_localCreationDate;
    long long _playbackStyle;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    double _duration;
    NSString *_burstIdentifier;
    unsigned long long _localResourcesState;
    unsigned long long _groupingState;
    NSString *_groupingUUID;
    NSData *_locationData;
    NSString *_uniformTypeIdentifier;
    unsigned long long _persistenceState;
    unsigned long long _thumbnailIndex;
    NSString *_directory;
    NSString *_filename;
    NSDate *_trashedDate;
    NSDate *_adjustmentTimestamp;
    NSString *_originalColorSpace;
    NSData *_imageRequestHints;
    double _curationScore;
    long long _cloudPlaceholderKind;
    long long _videoCpDurationValue;
    NSNumber *_hdrGain;
    unsigned long long _reframeVariation;
    NSArray *_faceRegions;
    double _faceAreaMinX;
    double _faceAreaMaxX;
    double _faceAreaMinY;
    double _faceAreaMaxY;
    long long _RAWBadgeAttributes;
    id _faceAdjustmentVersion;
    NSDate *_analysisStateModificationDate;
    double _highlightPromotionScore;
    double _highlightVisibilityScore;
    struct CLLocationCoordinate2D _locationCoordinate;
    struct CGRect _preferredCropRect;
    struct CGRect _acceptableCropRect;
}

@property (readonly, nonatomic) NSURL *ALAssetURL;
@property (readonly, nonatomic) long long RAWBadgeAttributes; // @synthesize RAWBadgeAttributes=_RAWBadgeAttributes;
@property (readonly, nonatomic) struct CGRect acceptableCropRect; // @synthesize acceptableCropRect=_acceptableCropRect;
@property (readonly, nonatomic) NSDate *adjustmentTimestamp; // @synthesize adjustmentTimestamp=_adjustmentTimestamp;
@property (readonly, nonatomic) NSDate *analysisStateModificationDate; // @synthesize analysisStateModificationDate=_analysisStateModificationDate;
@property (readonly, nonatomic) double aspectRatio;
@property (nonatomic) BOOL assetDescriptionWasSet; // @synthesize assetDescriptionWasSet=_assetDescriptionWasSet;
@property (readonly, nonatomic) int avalanchePickType; // @synthesize avalanchePickType=_avalanchePickType;
@property (readonly, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property (readonly, nonatomic) unsigned long long burstSelectionTypes;
@property (readonly, nonatomic) BOOL canFlipFullSizeRender;
@property (readonly, nonatomic) BOOL canPerformSharingAction;
@property (readonly, nonatomic) BOOL canPlayAutoloop;
@property (readonly, nonatomic) BOOL canPlayLongExposure;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL canPlayMirror;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (nonatomic) BOOL canUseLocationCoordinateForLocation; // @synthesize canUseLocationCoordinateForLocation=_canUseLocationCoordinateForLocation;
@property (readonly, copy, nonatomic) NSString *cloudIdentifier;
@property (readonly, nonatomic) BOOL cloudIsDeletable; // @synthesize cloudIsDeletable=_cloudIsDeletable;
@property (readonly, nonatomic) long long cloudPlaceholderKind;
@property (readonly, nonatomic) long long cloudPlaceholderKind; // @synthesize cloudPlaceholderKind=_cloudPlaceholderKind;
@property (readonly, nonatomic) BOOL complete;
@property (readonly, nonatomic) BOOL complete; // @synthesize complete=_complete;
@property (readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (readonly, nonatomic) NSString *croppingDebugDescription;
@property (readonly, nonatomic) double curationScore; // @synthesize curationScore=_curationScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned short deferredProcessingNeeded; // @synthesize deferredProcessingNeeded=_deferredProcessingNeeded;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property (readonly, nonatomic) NSData *distanceIdentity;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) unsigned long long effectiveThumbnailIndex;
@property (readonly, nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property (readonly, nonatomic) id faceAdjustmentVersion; // @synthesize faceAdjustmentVersion=_faceAdjustmentVersion;
@property (readonly, nonatomic) double faceAreaMaxX; // @synthesize faceAreaMaxX=_faceAreaMaxX;
@property (readonly, nonatomic) double faceAreaMaxY; // @synthesize faceAreaMaxY=_faceAreaMaxY;
@property (readonly, nonatomic) double faceAreaMinX; // @synthesize faceAreaMinX=_faceAreaMinX;
@property (readonly, nonatomic) double faceAreaMinY; // @synthesize faceAreaMinY=_faceAreaMinY;
@property (readonly, nonatomic) NSArray *faceRegions; // @synthesize faceRegions=_faceRegions;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property (readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (readonly, nonatomic) unsigned long long groupingState; // @synthesize groupingState=_groupingState;
@property (readonly, nonatomic) NSString *groupingUUID; // @synthesize groupingUUID=_groupingUUID;
@property (readonly, nonatomic) BOOL hasAdjustments; // @synthesize hasAdjustments=_hasAdjustments;
@property (readonly, nonatomic) BOOL hasKeywords; // @synthesize hasKeywords=_hasKeywords;
@property (readonly, nonatomic) BOOL hasPhotoColorAdjustments;
@property (readonly, nonatomic) BOOL hasPhotoStreamTagID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNumber *hdrGain; // @synthesize hdrGain=_hdrGain;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (readonly, nonatomic) double highlightPromotionScore; // @synthesize highlightPromotionScore=_highlightPromotionScore;
@property (readonly, nonatomic) double highlightVisibilityScore; // @synthesize highlightVisibilityScore=_highlightVisibilityScore;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) NSData *imageRequestHints; // @synthesize imageRequestHints=_imageRequestHints;
@property (readonly, nonatomic) BOOL isAnimatedGIF;
@property (readonly, nonatomic) BOOL isAudio;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryAsset;
@property (readonly, nonatomic) BOOL isCloudPlaceholder;
@property (readonly, nonatomic) BOOL isCloudSharedAsset;
@property (readonly, nonatomic) BOOL isHDVideo;
@property (readonly, nonatomic) BOOL isHEIF;
@property (readonly, nonatomic) BOOL isHighFrameRateVideo;
@property (readonly, nonatomic) BOOL isIncludedInCloudFeeds;
@property (readonly, nonatomic) BOOL isIncludedInMoments;
@property (readonly, nonatomic) BOOL isJPEG;
@property (readonly, nonatomic) BOOL isJPEG2000;
@property (readonly, nonatomic) BOOL isLoopingVideo;
@property (readonly, nonatomic) BOOL isMomentSharedAsset;
@property (readonly, nonatomic) BOOL isOffline;
@property (readonly, nonatomic) BOOL isPDF;
@property (readonly, nonatomic) BOOL isPNG;
@property (readonly, nonatomic) BOOL isPSD;
@property (readonly, nonatomic) BOOL isPartOfBurst;
@property (readonly, nonatomic) BOOL isPartOfGroup;
@property (readonly, nonatomic) BOOL isPhoto;
@property (readonly, nonatomic) BOOL isPhotoIris; // @synthesize isPhotoIris=_isPhotoIris;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) BOOL isPhotoStreamPhoto;
@property (readonly, nonatomic) BOOL isPrimaryInGroup;
@property (readonly, nonatomic) BOOL isRAW;
@property (readonly, nonatomic) BOOL isRAWPlusJPEG;
@property (readonly, nonatomic) BOOL isReferencedAsset;
@property (readonly, nonatomic) BOOL isStreamedVideo;
@property (readonly, nonatomic) BOOL isTIFF;
@property (readonly, nonatomic) BOOL isTimelapsePlaceholder;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) NSDate *localCreationDate; // @synthesize localCreationDate=_localCreationDate;
@property (readonly, nonatomic) unsigned long long localResourcesState; // @synthesize localResourcesState=_localResourcesState;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) struct CLLocationCoordinate2D locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
@property (readonly, nonatomic) NSData *locationData; // @synthesize locationData=_locationData;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContextForFetchingResources;
@property (readonly, nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property (readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property (readonly, nonatomic) NSString *metadataDebugDescription;
@property (readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSString *originalColorSpace; // @synthesize originalColorSpace=_originalColorSpace;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) unsigned long long originalResourceChoice;
@property (readonly, nonatomic) float overallAestheticScore; // @synthesize overallAestheticScore=_overallAestheticScore;
@property (readonly, nonatomic) unsigned long long persistenceState; // @synthesize persistenceState=_persistenceState;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property (readonly, nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property (readonly, nonatomic) unsigned short playbackVariation; // @synthesize playbackVariation=_playbackVariation;
@property (readonly, nonatomic) struct CGRect preferredCropRect; // @synthesize preferredCropRect=_preferredCropRect;
@property (readonly, nonatomic) unsigned long long reframeVariation; // @synthesize reframeVariation=_reframeVariation;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) NSString *resourcesDebugDescription;
@property (readonly, nonatomic) short savedAssetType; // @synthesize savedAssetType=_savedAssetType;
@property (readonly, nonatomic) NSSet *sceneClassifications;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSyncFailureHidden) BOOL syncFailureHidden; // @synthesize syncFailureHidden=_syncFailureHidden;
@property (readonly, nonatomic) NSString *thumbnailIdentifier;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly, nonatomic) unsigned long long thumbnailIndex; // @synthesize thumbnailIndex=_thumbnailIndex;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed; // @synthesize trashed=_trashed;
@property (readonly, nonatomic) NSDate *trashedDate; // @synthesize trashedDate=_trashedDate;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property (readonly, nonatomic) NSString *variationSuggestionStatesDetails;
@property (readonly, nonatomic) long long videoCpDurationValue; // @synthesize videoCpDurationValue=_videoCpDurationValue;
@property (readonly, nonatomic) unsigned short videoCpVisibilityState; // @synthesize videoCpVisibilityState=_videoCpVisibilityState;

+ (id)_assetFetchResultFromAssets:(id)arg1 options:(id)arg2;
+ (void)_batchFetchAdditionalPropertySetsIfNeeded:(id)arg1 forAssets:(id)arg2;
+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (void)_computeFingerPrintsOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_currentTimestampString;
+ (id)_descriptionForMediaSubtype:(unsigned long long)arg1;
+ (id)_descriptionForVariationSuggestionStates:(unsigned long long)arg1;
+ (id)_descriptionForVariationSuggestionType:(unsigned long long)arg1;
+ (unsigned long long)_extendedPropertyFetchHintsForPropertySets:(id)arg1;
+ (id)_fetchAssetsMatchingAdjustedFingerPrint:(id)arg1;
+ (id)_fetchAssetsMatchingMasterFingerPrint:(id)arg1;
+ (id)_fetchCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 fetchOptions:(id)arg4 onlyKey:(BOOL)arg5;
+ (id)_fetchRepresentativeAssetInAssetCollection:(id)arg1;
+ (id)_imageManagerRequestLoggingQueue;
+ (id)_inq_highestImageManagerRequestIDsObserved;
+ (id)_inq_imageManagerRequestLogsByAssetUUID;
+ (id)_inq_imageManagerRequestMessagesByRequestIDForAssetUUID:(id)arg1 requestID:(long long)arg2;
+ (void)_inq_recordRequestID:(long long)arg1;
+ (void)_inq_trimToMostRecentImageManagerMessages;
+ (BOOL)_isLivePhotoWithPhotoIris:(BOOL)arg1 hasAdjustments:(BOOL)arg2 videoCpDuration:(long long)arg3 videoCPVisibility:(unsigned short)arg4 sourceType:(unsigned long long)arg5;
+ (id)_transformMediaSubtypeReferences:(id)arg1 inComparisonPredicate:(id)arg2 options:(id)arg3;
+ (id)_unfetchedPropertySetsForAssets:(id)arg1 fromPropertySets:(id)arg2;
+ (id)corePropertiesToFetch;
+ (long long)countOfAssetsWithLocationFromUUIDs:(id)arg1 photoLibrary:(id)arg2;
+ (id)descriptionForMediaSubtypes:(unsigned long long)arg1;
+ (id)descriptionForMediaType:(long long)arg1;
+ (id)descriptionForPlaybackStyle:(long long)arg1;
+ (id)entityKeyMap;
+ (id)faceWorkerPropertiesToFetch;
+ (id)fetchAllAssetsInYearRepresentedByYearHighlight:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsAllowedForSceneProcessingWithOptions:(id)arg1;
+ (id)fetchAssetsForBehavioralCurationWithOptions:(id)arg1;
+ (id)fetchAssetsForFaceGroups:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForFaces:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForKeywords:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForPersons:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForReferences:(id)arg1 photoLibrary:(id)arg2;
+ (id)fetchAssetsFromCameraSinceDate:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsGroupedByFaceUUIDForFaces:(id)arg1;
+ (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsInAssetCollections:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsInBoundingBoxWithTopLeftLocation:(id)arg1 bottomRightLocation:(id)arg2 options:(id)arg3;
+ (id)fetchAssetsInImportSessions:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsMatchingAdjustedFingerPrint:(id)arg1 photoLibrary:(id)arg2;
+ (id)fetchAssetsMatchingMasterFingerPrint:(id)arg1 photoLibrary:(id)arg2;
+ (id)fetchAssetsNeedingSceneProcessingWithOptions:(id)arg1;
+ (id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithMediaType:(long long)arg1 options:(id)arg2;
+ (id)fetchAssetsWithObjectIDs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithOptions:(id)arg1;
+ (id)fetchAssetsWithUUIDs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithoutOriginalsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1;
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2;
+ (id)fetchExtendedCuratedAssetsInAssetCollection:(id)arg1;
+ (id)fetchFirstAssetInEachMonthHighlightWithOptions:(id)arg1;
+ (id)fetchKeyAssetByHighlightUUIDForHighlights:(id)arg1 options:(id)arg2;
+ (id)fetchKeyAssetBySuggestionUUIDForSuggestions:(id)arg1 options:(id)arg2;
+ (id)fetchKeyAssetForEachSuggestion:(id)arg1 options:(id)arg2;
+ (id)fetchKeyAssetForSceneIdentifier:(unsigned int)arg1 withConfidenceThreshold:(double)arg2 options:(id)arg3;
+ (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 options:(id)arg3;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referencePersons:(id)arg2;
+ (id)fetchMovieCuratedAssetsInMemory:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchQuarantinedAsssetsWithOptions:(id)arg1;
+ (id)fetchReducedCuratedAssetsInMemory:(id)arg1 options:(id)arg2;
+ (id)fetchReferencedAssetsWithOptions:(id)arg1;
+ (id)fetchRepresentativeAssetsInAssetCollection:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)imageManagerPropertiesToFetch;
+ (BOOL)isOriginalKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id *)arg2;
+ (BOOL)isOriginalVideoComplementKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id *)arg2;
+ (id)locationPropertiesToFetch;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsAllowedForAnalysis;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsContributor;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsMontage;
+ (BOOL)managedObjectSupportsSavedAssetType;
+ (BOOL)managedObjectSupportsTrashedState;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (id)originalUniformTypeIdentifierForAsset:(id)arg1;
+ (id)pl_managedAssetsForAssets:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (id)quickClassificationFaceAdjustmentVersion;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
- (void).cxx_destruct;
- (id)__dictionaryWithContentsOfData:(id)arg1;
- (void)_addPropertyHint:(unsigned long long)arg1;
- (long long)_baseVersionForAdjustmentData:(id)arg1 canHandleAdjustmentData:(BOOL)arg2;
- (BOOL)_canHandleAdjustmentData:(id)arg1 withOptions:(id)arg2;
- (id)_createAnalysisStatePropertyObject;
- (id)_createCommentPropertyObject;
- (void)_createExtendedPropertySetsIfNeededWithPropertyHint:(unsigned long long)arg1 fetchDictionary:(id)arg2;
- (id)_createKeywordPropertyObject;
- (id)_createPropertyObjectOfClass:(Class)arg1;
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;
- (id)_imageRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForImageProgress:(CDUnknownBlockType)arg3;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_reportUsage;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(BOOL)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)_unfetchedPropertySetsFromPropertySets:(id)arg1;
- (id)_videoRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForVideoProgress:(CDUnknownBlockType)arg3;
- (id)adjustmentProperties;
- (id)adjustmentVersion;
- (id)adjustmentsDebugMetadata;
- (id)aestheticProperties;
- (int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id *)arg2 outIgnoreUntilDate:(id *)arg3;
- (id)assetAnalysisStateProperties;
- (short)assetSource;
- (id)assetUserActivityProperties;
- (id)assetsLibraryURL;
- (unsigned char)bundleScope;
- (BOOL)canPerformEditOperation:(long long)arg1;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (Class)changeRequestClass;
- (id)cloudAssetGUID;
- (long long)cloudSharedAssetPlaceholderKind;
- (id)coarseLocationProperties;
- (id)commentProperties;
- (unsigned long long)contentChangeFromAsset:(id)arg1;
- (id)curationProperties;
- (id)debugFilename;
- (id)descriptionForAestheticsWithManagedAsset:(id)arg1;
- (id)descriptionForMediaAnalysisWithManagedAsset:(id)arg1;
- (id)descriptionProperties;
- (id)destinationAssetCopyProperties;
- (id)detailedDebugDescriptionInLibrary:(id)arg1;
- (id)evaluationDebugMetadata;
- (void)fetchPropertySetsIfNeeded;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForVideoComplementFile;
- (id)fileURLsForDiagnosticFiles;
- (id)gatingDebugMetadata;
- (void)generateLargeThumbnailFileIfNecessary;
- (void)getFingerPrintForAssetType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getMasterFingerPrintWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)gridMetadataProperties;
- (BOOL)hasContentEqualTo:(id)arg1;
- (BOOL)hasLegacyAdjustments;
- (struct CGSize)imageSize;
- (id)importProperties;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (BOOL)isDeleted;
- (BOOL)isInFlight;
- (BOOL)isLocatedAtCoordinates:(struct CLLocationCoordinate2D)arg1;
- (BOOL)isMediaSubtype:(unsigned long long)arg1;
- (BOOL)isOriginalRaw;
- (BOOL)isOriginalSRGB;
- (BOOL)isPrimaryImageFormat;
- (BOOL)isScreenRecording;
- (BOOL)isVariationSuggestionStatesUnknown;
- (id)keywordProperties;
- (short)kind;
- (short)kindSubtype;
- (id)libraryID;
- (id)localDateProperties;
- (id)mainFileURL;
- (id)managedAssetForPhotoLibrary:(id)arg1;
- (id)mediaAnalysisProperties;
- (id)messagesForRecentImageManagerRequests;
- (BOOL)needsDeferredProcessing;
- (id)objectReference;
- (int)orientation;
- (id)originalAVAssetCommonMetadata;
- (id)originalAVAssetCreationDateMetadataItem;
- (id)originalAVAssetOrProxy;
- (unsigned long long)originalChoiceToFallbackForUnsupportRAW;
- (long long)originalImageOrientation;
- (id)originalImageProperties;
- (struct CGSize)originalImageSize;
- (id)originalMetadataProperties;
- (id)originalUTI;
- (id)pathForAdjustmentDataFile;
- (id)pathForAdjustmentFile;
- (id)pathForOriginalFile;
- (id)photoIrisProperties;
- (id)photosInfoPanelExtendedProperties;
- (id)photosInfoPanelLocationProperties;
- (id)photosOneUpProperties;
- (id)pl_managedAsset;
- (id)pl_managedAssetFromPhotoLibrary:(id)arg1;
- (id)pl_photoLibrary;
- (void)recordImageManagerMessageForRequestID:(int)arg1 message:(id)arg2;
- (unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)sceneAnalysisProperties;
- (id)sceneprintProperties;
- (BOOL)shouldUseRAWResourceAsUnadjustedEditBase;
- (BOOL)shouldUseRAWResourceWithOriginalResourceChoice:(unsigned long long)arg1;
- (struct CGRect)suggestedCropForTargetSize:(struct CGSize)arg1;
- (struct CGRect)suggestedCropForTargetSize:(struct CGSize)arg1 withFocusRegion:(struct CGRect)arg2;
- (struct CGRect)suggestedCropForTargetSize:(struct CGSize)arg1 withFocusRegion:(struct CGRect)arg2 andOutputCropScore:(double *)arg3;
- (unsigned long long)variationSuggestionStatesForVariationType:(unsigned long long)arg1;

@end

