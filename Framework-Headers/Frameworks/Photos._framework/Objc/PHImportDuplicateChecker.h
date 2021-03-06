//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, PHPhotoLibrary;

@interface PHImportDuplicateChecker : NSObject
{
    NSMutableDictionary *_avchdAssetIdentifierCache;
    NSMutableDictionary *_sizeNameCache;
    NSMutableDictionary *_assetIdentifierCache;
    NSDate *_lastChange;
    NSMutableSet *_updatedDupInfos;
    PHPhotoLibrary *_library;
}

@property (strong, nonatomic) PHPhotoLibrary *library; // @synthesize library=_library;

+ (id)_dateWithDate:(id)arg1;
+ (id)_fetchAssetInfoFromLibrary:(id)arg1 forFileSizes:(id)arg2;
- (void).cxx_destruct;
- (id)_checkForDuplicate:(id)arg1 considerItemsInTheTrash:(BOOL)arg2;
- (id)_filterDuplicatesForItem:(id)arg1 duplicateSet:(id)arg2 considerItemsInTrash:(BOOL)arg3;
- (BOOL)_findFingerprint:(id)arg1 forItem:(id)arg2 inCache:(id)arg3 considerTrash:(BOOL)arg4;
- (id)_findMatchingAssetsForItem:(id)arg1 inSet:(id)arg2 matchingDate:(id *)arg3 confidence:(unsigned char *)arg4;
- (void)_populateCachesWithAssetInfo:(id)arg1;
- (unsigned long long)_populateCachesWithAssetsInfos:(id)arg1;
- (void)_setDupInfo:(id)arg1 forFingerprint:(id)arg2 inCache:(id)arg3;
- (void)_updateAssetsFromDupInfos;
- (void)findDuplicatesOfItems:(id)arg1 considerItemsInTrash:(BOOL)arg2 forEach:(CDUnknownBlockType)arg3 atEnd:(CDUnknownBlockType)arg4;
- (id)initWithLibrary:(id)arg1;

@end

