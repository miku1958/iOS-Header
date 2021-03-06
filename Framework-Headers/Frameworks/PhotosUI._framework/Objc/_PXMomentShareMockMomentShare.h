//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBaseDisplayCollection.h>

#import <PhotosUICore/PXDisplayMomentShare-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@interface _PXMomentShareMockMomentShare : PXBaseDisplayCollection <PXDisplayMomentShare>
{
    unsigned short _status;
    unsigned short _px_highlightEnrichmentState;
    unsigned long long _assetCount;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    unsigned long long _uploadedPhotosCount;
    unsigned long long _uploadedVideosCount;
    NSURL *_shareURL;
    NSDate *_expiryDate;
    NSString *_localizedTitle;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_localizedLocationNames;
    unsigned long long _estimatedAssetCount;
    long long _px_highlightKind;
}

@property (readonly, nonatomic) long long aggregateMediaType;
@property (readonly, nonatomic) unsigned long long assetCount; // @synthesize assetCount=_assetCount;
@property (readonly, nonatomic) BOOL canContainAssets;
@property (readonly, nonatomic) BOOL canContainCollections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) unsigned long long estimatedAssetCount; // @synthesize estimatedAssetCount=_estimatedAssetCount;
@property (readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isAggregation; // @dynamic isAggregation;
@property (readonly, nonatomic) BOOL isEnriched; // @dynamic isEnriched;
@property (readonly, nonatomic) BOOL isEnrichmentComplete; // @dynamic isEnrichmentComplete;
@property (readonly, nonatomic) BOOL isRecent; // @dynamic isRecent;
@property (readonly, nonatomic) NSString *localizedDateDescription; // @dynamic localizedDateDescription;
@property (readonly, nonatomic) NSString *localizedDebugDescription; // @dynamic localizedDebugDescription;
@property (readonly, nonatomic) NSArray *localizedLocationNames; // @synthesize localizedLocationNames=_localizedLocationNames;
@property (readonly, nonatomic) NSString *localizedSmartDescription; // @dynamic localizedSmartDescription;
@property (readonly, nonatomic) NSString *localizedSubtitle; // @dynamic localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property (readonly, nonatomic) unsigned long long photosCount; // @synthesize photosCount=_photosCount;
@property (readonly, nonatomic) double promotionScore; // @dynamic promotionScore;
@property (readonly, nonatomic) BOOL px_allowsImplicitSelectionForProjectOrSharingAction;
@property (readonly, nonatomic) BOOL px_canAddContent;
@property (readonly, nonatomic) BOOL px_canRearrangeContent;
@property (readonly, nonatomic) id px_cheapLogIdentifier;
@property (readonly, nonatomic) unsigned short px_highlightEnrichmentState; // @synthesize px_highlightEnrichmentState=_px_highlightEnrichmentState;
@property (readonly, nonatomic) long long px_highlightKind; // @synthesize px_highlightKind=_px_highlightKind;
@property (readonly, nonatomic) BOOL px_isAllPhotosSmartAlbum;
@property (readonly, nonatomic) BOOL px_isCloudMultipleContributorsEnabled;
@property (readonly, nonatomic) BOOL px_isFavoriteMemoriesSmartFolder;
@property (readonly, nonatomic) BOOL px_isFavoritesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isFolder;
@property (readonly, nonatomic) BOOL px_isForYouVirtualCollection;
@property (readonly, nonatomic) BOOL px_isHiddenSmartAlbum;
@property (readonly, nonatomic) BOOL px_isHighlight;
@property (readonly, nonatomic) BOOL px_isImportHistoryCollection;
@property (readonly, nonatomic) BOOL px_isImportSessionCollection;
@property (readonly, nonatomic) BOOL px_isImportedAlbum;
@property (readonly, nonatomic) BOOL px_isInReadWriteCloudLibrary;
@property (readonly, nonatomic) BOOL px_isMacSyncedAlbum;
@property (readonly, nonatomic) BOOL px_isMacSyncedEventsFolder;
@property (readonly, nonatomic) BOOL px_isMacSyncedFacesFolder;
@property (readonly, nonatomic) BOOL px_isMediaTypeSmartAlbum;
@property (readonly, nonatomic) BOOL px_isMediaTypesFolder;
@property (readonly, nonatomic) BOOL px_isMemoriesVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMoment;
@property (readonly, nonatomic) BOOL px_isMomentsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMyAlbumsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMyPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL px_isOwnedSharedAlbum;
@property (readonly, nonatomic) BOOL px_isPanoramasSmartAlbum;
@property (readonly, nonatomic) BOOL px_isPeopleVirtualCollection;
@property (readonly, nonatomic) BOOL px_isPhotosVirtualCollection;
@property (readonly, nonatomic) BOOL px_isPlacesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isProject;
@property (readonly, nonatomic) BOOL px_isProjectsFolder;
@property (readonly, nonatomic) BOOL px_isRecentlyAddedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentlyDeletedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentlyEditedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRegularAlbum;
@property (readonly, nonatomic) BOOL px_isRegularFolder;
@property (readonly, nonatomic) BOOL px_isRootSmartAlbum;
@property (readonly, nonatomic) BOOL px_isScreenRecordingsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSharedActivityVirtualCollection;
@property (readonly, nonatomic) BOOL px_isSharedAlbum;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsAndActivityFolder;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsFolder;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSmartFolder;
@property (readonly, nonatomic) BOOL px_isStandInAlbum;
@property (readonly, nonatomic) BOOL px_isSuggestion;
@property (readonly, nonatomic) BOOL px_isTopLevelFolder;
@property (readonly, nonatomic) BOOL px_isTransientPlacesCollection;
@property (readonly, nonatomic) BOOL px_isUserCreated;
@property (readonly, nonatomic) BOOL px_isUserSmartAlbum;
@property (readonly, nonatomic) long long px_momentShareType;
@property (readonly, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, nonatomic) unsigned short status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long uploadedPhotosCount; // @synthesize uploadedPhotosCount=_uploadedPhotosCount;
@property (readonly, nonatomic) unsigned long long uploadedVideosCount; // @synthesize uploadedVideosCount=_uploadedVideosCount;
@property (readonly, nonatomic) unsigned long long videosCount; // @synthesize videosCount=_videosCount;

+ (id)momentShareWithStatus:(unsigned short)arg1 photosCount:(unsigned long long)arg2 videosCount:(unsigned long long)arg3 uploadedPhotosCount:(unsigned long long)arg4 uploadedVideosCount:(unsigned long long)arg5;
- (void).cxx_destruct;
- (id)initWithStatus:(unsigned short)arg1 assetCount:(unsigned long long)arg2 photosCount:(unsigned long long)arg3 videosCount:(unsigned long long)arg4 uploadedPhotosCount:(unsigned long long)arg5 uploadedVideosCount:(unsigned long long)arg6 shareURL:(id)arg7 expiryDate:(id)arg8 localizedTitle:(id)arg9 startDate:(id)arg10 endDate:(id)arg11;
- (id)localizedDateDescriptionWithOptions:(unsigned long long)arg1;

@end

