//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSArray, NSString, PHManualFetchResult;

__attribute__((visibility("hidden")))
@interface PUAssetHidingHelper : NSObject <PXPhotoLibraryUIChangeObserver>
{
    BOOL _areAllAssetsHidden;
    BOOL _didCheckAllAssetHidden;
    BOOL _canToogleAssetsVisibility;
    BOOL _didCheckCanToogleAssetsVisibility;
    PHManualFetchResult *__assetsFetchResults;
}

@property (strong, nonatomic, setter=_setAssetsFetchResult:) PHManualFetchResult *_assetsFetchResults; // @synthesize _assetsFetchResults=__assetsFetchResults;
@property (copy, nonatomic) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isHiding;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_areAllAssetsHidden;
- (void)_prepareAssetsVisibilityValueIfNeeded;
- (id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applyHiddenState:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)attemptTogglingAssetsVisibilityFromViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)canToggleAssetsVisibility;
- (void)dealloc;
- (id)init;
- (id)menuItemTitleForTogglingAssetsVisibility;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;

@end

