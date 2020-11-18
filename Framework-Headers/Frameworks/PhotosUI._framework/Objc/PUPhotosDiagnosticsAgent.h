//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PLDiagnosticsAgent-Protocol.h>

@interface PUPhotosDiagnosticsAgent : NSObject <PLDiagnosticsAgent>
{
}

+ (id)localDiagnosticsAgent;
- (id)__currentTimestamp;
- (id)_currentAsset;
- (id)_currentAssetDetailedDescription;
- (id)_currentAssetIdentifierDescription;
- (id)_currentAssetMetadata;
- (id)_currentAssetViewModelDescription;
- (id)_descriptionForAllUIState;
- (id)_descriptionOfUIState:(long long)arg1;
- (id)_viewControllerHierarchyDescription;
- (id)_viewModelDescription;
- (id)_windowRecursiveDescription;
- (void)captureAndDumpLayerHierarchyWithResultHandler:(CDUnknownBlockType)arg1;
- (void)captureCurrentAssetResourcesWithResultHandler:(CDUnknownBlockType)arg1;
- (void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(CDUnknownBlockType)arg1;
- (void)captureDescriptionOfPhotoAnalysisWithResultHandler:(CDUnknownBlockType)arg1;
- (void)captureDescriptionOfUIState:(long long)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
