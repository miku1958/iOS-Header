//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLCloudPhotoLibraryHelper : NSObject
{
}

+ (void)disableCPL:(CDUnknownBlockType)arg1;
+ (void)enableCPL:(CDUnknownBlockType)arg1;
+ (void)setShouldClearPurgeableResourcesOnce:(BOOL)arg1;
+ (void)setShouldHandleOptimizeModeChange:(BOOL)arg1;
+ (void)setShouldMarkPurgeableResourcesOnce:(BOOL)arg1;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)arg1;
+ (void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)arg1;
+ (void)setShouldSendOptimizeFeedbackOnce:(BOOL)arg1;
+ (BOOL)shouldClearPurgeableResourcesOnce;
+ (BOOL)shouldHandleOptimizeModeChange;
+ (BOOL)shouldMarkPurgeableResourcesOnce;
+ (BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+ (BOOL)shouldRepushVideoAssetsMetadataOnce;
+ (BOOL)shouldSendOptimizeFeedbackOnce;

@end

