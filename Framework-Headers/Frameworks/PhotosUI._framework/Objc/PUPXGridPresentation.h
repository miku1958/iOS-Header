//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXGridPresentation-Protocol.h>

@class NSString, PUSessionInfo;

__attribute__((visibility("hidden")))
@interface PUPXGridPresentation : NSObject <PXGridPresentation>
{
    PUSessionInfo *_sessionInfo;
    long long _userInterfaceIdiom;
}

@property (readonly, nonatomic, getter=_isRunningInPhotoPicker) BOOL _isRunningInPhotoPicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property (readonly) Class superclass;
@property long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;

- (void).cxx_destruct;
- (id)_assetCollectionToAssetsMapForAssets:(id)arg1;
- (BOOL)_isEmpty:(id)arg1;
- (id)createAlbumListViewControllerWithConfiguration:(id)arg1;
- (void)createGridViewControllerWithAssets:(id)arg1 withTitle:(id)arg2 hideTabBar:(BOOL)arg3 gridPresentationContext:(long long)arg4 containerViewController:(id)arg5 navigationItemDelegate:(id)arg6 andCompletion:(CDUnknownBlockType)arg7;
- (id)createImportHistoryGridViewControllerWithCollection:(id)arg1;
- (id)createPanoramaViewController;
- (id)createPhotosAlbumViewControllerForAlbum:(id)arg1 withFetchResult:(id)arg2;
- (id)createPhotosPickerViewControllerWithSelectedAssets:(id)arg1 anchorAtAsset:(id)arg2 inAssetCollection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createSharedAlbumListViewControllerWithConfiguration:(id)arg1;
- (id)init;
- (id)initWithUserInterfaceIdiom:(long long)arg1;

@end
