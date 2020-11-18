//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLMomentGenerationDataManagement-Protocol.h>

@class NSDictionary;
@protocol PLMomentData;

@protocol PLMomentGenerationDataManagement_Private <PLMomentGenerationDataManagement>

@optional
- (NSDictionary *)generationOptions;
- (void)invalidateLocationDataForAssetsInMoment:(id<PLMomentData>)arg1;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (void)setupPhotoLibrary;
@end

