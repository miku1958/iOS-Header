//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLResourceChooser : NSObject
{
}

+ (void)_chooseCloudResourceTypeForFormat:(id)arg1 asset:(id)arg2 optimalCPLResourceType:(unsigned long long *)arg3 localCPLResourceType:(unsigned long long *)arg4 localCPLResourceFilePath:(id *)arg5 fileReservation:(id *)arg6;
+ (id)_chooseFileReservationForLargeDisplayableImageFileForAsset:(id)arg1 forceLarge:(BOOL)arg2 allowMetadataSnapshot:(BOOL)arg3 outFilePath:(id *)arg4 outImageType:(long long *)arg5;
+ (long long)_fileResourceTypeForCloudResourceType:(unsigned long long)arg1 hasAdjustments:(BOOL)arg2 requiresUnadjustedVersion:(BOOL)arg3;
+ (id)_filteredArrayUsingPredicate:(id)arg1 originalItems:(id)arg2 nonMatchingItems:(id *)arg3;
+ (id)_itemMatchingFormat:(id)arg1 allItems:(id)arg2 acceptableSortedAlternatives:(id *)arg3;
+ (id)_originalItemFromAllItems:(id)arg1;
+ (id)_penultimateItemFromAllItems:(id)arg1;
+ (unsigned long long)cloudResourceTypeForAsset:(id)arg1 format:(id)arg2 filePath:(id *)arg3 imageType:(long long *)arg4;
+ (id)fileReservationForImageFileForAsset:(id)arg1 format:(id)arg2 outFilePath:(id *)arg3 outImageType:(long long *)arg4;
+ (id)fileReservationForLargeDisplayableImageFileForAsset:(id)arg1 allowMetadataSnapshot:(BOOL)arg2 forceLarge:(BOOL)arg3 outFilePath:(id *)arg4 outImageType:(long long *)arg5;
+ (id)fileReservationForLargeDisplayableImageFileForAsset:(id)arg1 forceLarge:(BOOL)arg2 outFilePath:(id *)arg3 outImageType:(long long *)arg4;
- (void)dealloc;
- (id)init;

@end

