//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

#import <Photos/PHShare-Protocol.h>

@class NSData, NSDate, NSString, NSURL, PHMomentSharePreview;

@interface PHMomentShare : PHAssetCollection <PHShare>
{
    NSDate *_creationDate;
    PHMomentSharePreview *_preview;
    BOOL _shouldIgnoreBudgets;
    BOOL _shouldNotifyOnUploadCompletion;
    unsigned short _status;
    short _publicPermission;
    unsigned short _trashedState;
    short _publishState;
    NSURL *_shareURL;
    NSDate *_expiryDate;
    unsigned long long _assetCount;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    unsigned long long _uploadedPhotosCount;
    unsigned long long _uploadedVideosCount;
    NSData *_previewData;
    NSData *_thumbnailImageData;
    NSString *_scopeIdentifier;
}

@property (readonly, nonatomic) unsigned long long assetCount; // @synthesize assetCount=_assetCount;
@property (readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // @dynamic endDate;
@property (readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property (readonly, nonatomic) unsigned long long photosCount; // @synthesize photosCount=_photosCount;
@property (readonly, nonatomic) PHMomentSharePreview *preview; // @dynamic preview;
@property (readonly, nonatomic) NSData *previewData; // @synthesize previewData=_previewData;
@property (readonly, nonatomic) short publicPermission; // @synthesize publicPermission=_publicPermission;
@property (readonly, nonatomic) short publishState; // @synthesize publishState=_publishState;
@property (readonly, nonatomic) NSString *scopeIdentifier; // @synthesize scopeIdentifier=_scopeIdentifier;
@property (readonly, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property (readonly, nonatomic) BOOL shouldIgnoreBudgets; // @synthesize shouldIgnoreBudgets=_shouldIgnoreBudgets;
@property (readonly, nonatomic) BOOL shouldNotifyOnUploadCompletion; // @synthesize shouldNotifyOnUploadCompletion=_shouldNotifyOnUploadCompletion;
@property (readonly, nonatomic) NSDate *startDate; // @dynamic startDate;
@property (readonly, nonatomic) unsigned short status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *thumbnailImageData; // @synthesize thumbnailImageData=_thumbnailImageData;
@property (readonly, nonatomic) unsigned short trashedState; // @synthesize trashedState=_trashedState;
@property (readonly, nonatomic) unsigned long long uploadedPhotosCount; // @synthesize uploadedPhotosCount=_uploadedPhotosCount;
@property (readonly, nonatomic) unsigned long long uploadedVideosCount; // @synthesize uploadedVideosCount=_uploadedVideosCount;
@property (readonly, nonatomic) unsigned long long videosCount; // @synthesize videosCount=_videosCount;

+ (id)_fetchLocalMomentShareWithUUID:(id)arg1 error:(id *)arg2;
+ (id)entityKeyMap;
+ (id)fetchLocalMomentShareFromShareURL:(id)arg1 error:(id *)arg2;
+ (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)fetchMomentSharesOverlappingAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)invitedMomentSharesExpiringInDays:(unsigned long long)arg1;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsShareExpiredState;
+ (BOOL)managedObjectSupportsShareTrashedState;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
- (void).cxx_destruct;
- (void)acceptMomentShareWithCompletion:(CDUnknownBlockType)arg1;
- (Class)changeRequestClass;
- (void)forceSyncMomentShareWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (void)publishMomentShareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)shouldPromptUserToIgnoreBudgets;
- (BOOL)shouldSuggestShareBack;

@end
