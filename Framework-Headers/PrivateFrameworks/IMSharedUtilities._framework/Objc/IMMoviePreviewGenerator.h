//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMPreviewGenerator.h>

@interface IMMoviePreviewGenerator : IMPreviewGenerator
{
}

+ (id)UTITypes;
+ (id)_avAssetForURL:(id)arg1;
+ (id)fetchUTITypes;
+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 outSize:(struct CGSize *)arg3 error:(id *)arg4;
+ (BOOL)isAutoloopAsset:(id)arg1;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (BOOL)writesToDisk;

@end

