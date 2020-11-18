//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLAssetContainer-Protocol.h>
#import <PhotoLibraryServices/PLMomentData_Private-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSObject, NSOrderedSet, NSString, PLManagedAsset, PLMomentLibrary, PLMomentList, PLMomentNameInfo;
@protocol NSCopying;

@interface PLMoment : PLManagedObject <PLAssetContainer, PLMomentData_Private>
{
    PLMomentNameInfo *_cachedNameInfo;
    BOOL _loadedNameInfo;
    BOOL isRegisteredForChanges;
    BOOL didRegisteredWithUserInterfaceContext;
}

@property (readonly, nonatomic) unsigned long long approximateCount;
@property (strong, nonatomic) CLLocation *approximateLocation;
@property (strong, nonatomic) NSData *approximateLocationData; // @dynamic approximateLocationData;
@property (strong, nonatomic) NSOrderedSet *assets; // @dynamic assets;
@property (readonly, nonatomic) unsigned long long assetsCount;
@property (nonatomic) int cachedCount; // @dynamic cachedCount;
@property (nonatomic) int cachedPhotosCount; // @dynamic cachedPhotosCount;
@property (nonatomic) int cachedVideosCount; // @dynamic cachedVideosCount;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRegisteredWithUserInterfaceContext; // @synthesize didRegisteredWithUserInterfaceContext;
@property (strong, nonatomic) NSDate *endDate; // @dynamic endDate;
@property (nonatomic) short generationType; // @dynamic generationType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) BOOL isRegisteredForChanges; // @synthesize isRegisteredForChanges;
@property (strong, nonatomic) PLManagedAsset *keyAsset;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (strong, nonatomic) PLMomentList *megaMomentList; // @dynamic megaMomentList;
@property (strong, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property (strong, nonatomic) PLMomentLibrary *momentLibrary; // @dynamic momentLibrary;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (strong, nonatomic) NSDate *representativeDate; // @dynamic representativeDate;
@property (strong, nonatomic) NSData *reverseLocationData; // @dynamic reverseLocationData;
@property (nonatomic) BOOL reverseLocationDataIsValid; // @dynamic reverseLocationDataIsValid;
@property (strong, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (strong, nonatomic) NSDate *startDate; // @dynamic startDate;
@property (readonly) Class superclass;
@property (strong, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (strong, nonatomic) NSString *title; // @dynamic title;
@property (strong, nonatomic) NSString *title2; // @dynamic title2;
@property (strong, nonatomic) NSString *title3; // @dynamic title3;
@property (readonly, strong, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property (strong, nonatomic) NSArray *userTitles;
@property (strong, nonatomic) NSString *uuid; // @dynamic uuid;
@property (readonly, nonatomic) unsigned long long videosCount;
@property (strong, nonatomic) PLMomentList *yearMomentList; // @dynamic yearMomentList;

+ (id)allAssetsIncludedInMomentsInLibrary:(id)arg1;
+ (id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(BOOL)arg2 error:(id *)arg3;
+ (id)allMomentsInLibrary:(id)arg1;
+ (id)allMomentsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)predicateForAssetsIncludedInMoments;
- (void)_updateCachedNameInfoIfNeeded;
- (BOOL)_validateForInsertOrUpdate:(id *)arg1;
- (void)addAssets:(id)arg1;
- (void)addAssetsObject:(id)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (BOOL)canPerformEditOperation:(unsigned long long)arg1;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (void)dealloc;
- (void)delete;
- (id)diagnosticInformation;
- (void)didTurnIntoFault;
- (id)groupURL;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2;
- (void)invalidateNameInfo;
- (BOOL)isCloudSharedAlbum;
- (id)mutableAssets;
- (struct CGImage *)posterImage;
- (void)registerForChanges;
- (void)removeAssetData:(id)arg1;
- (void)removeAssets:(id)arg1;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)removeAssetsObject:(id)arg1;
- (void)removeObjectFromAssetsAtIndex:(unsigned long long)arg1;
- (void)replaceAssetDataAtIndex:(unsigned long long)arg1 withAssetData:(id)arg2;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)replaceObjectInAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (BOOL)supportsDiagnosticInformation;
- (void)unregisterForChanges;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForUpdate:(id *)arg1;
- (void)willSave;
- (void)willTurnIntoFault;

@end

