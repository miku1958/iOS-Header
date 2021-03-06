//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLResourceGenerator : NSObject
{
}

+ (void)_continueGeneratingResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 remainingRecipes:(id)arg5 storedRecipes:(id)arg6 attemptedRecipes:(id)arg7 errorsEncountered:(id)arg8 progress:(id)arg9 reason:(id)arg10 completion:(CDUnknownBlockType)arg11;
+ (id)expectedLocalResourceRecipesForAsset:(id)arg1 versions:(id)arg2;
+ (id)expectedLocalResourceRecipesForAssetWithLibraryID:(id)arg1 versions:(id)arg2 assetHasAdjustments:(BOOL)arg3 assetIsRAWOrRawPlugJPEGWithRawOnTop:(BOOL)arg4 assetWidth:(long long)arg5 assetHeight:(long long)arg6 assetKind:(short)arg7 assetkindSubtype:(short)arg8;
+ (id)fileAndTableBackedThumbnailManagerRecipesForLibraryID:(id)arg1;
+ (id)generateAndStoreMissingExpectedLocalResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 reason:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)locallyUnavailableRecipesFromRecipes:(id)arg1 versions:(id)arg2 asset:(id)arg3;

@end

