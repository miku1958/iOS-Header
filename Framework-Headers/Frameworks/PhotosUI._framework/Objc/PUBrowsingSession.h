//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUAssetActionManagerDelegate-Protocol.h>
#import <PhotosUI/PUAssetsDataSourceManagerDelegate-Protocol.h>
#import <PhotosUI/PULoadingStatusManagerDelegate-Protocol.h>
#import <PhotosUI/PUTilingViewLayoutDelegate-Protocol.h>

@class NSString, PUAssetActionManager, PUAssetsDataSourceManager, PUAudioSessionCategoryToken, PUBrowsingViewModel, PUContentTileProvider, PULoadingStatusManager, PUMediaProvider, PUTileAnimator;

@interface PUBrowsingSession : NSObject <PUAssetsDataSourceManagerDelegate, PUAssetActionManagerDelegate, PULoadingStatusManagerDelegate, PUTilingViewLayoutDelegate>
{
    BOOL _active;
    PUAssetsDataSourceManager *_dataSourceManager;
    PUMediaProvider *_mediaProvider;
    PUAssetActionManager *_actionManager;
    PUBrowsingViewModel *_viewModel;
    PUContentTileProvider *_contentTileProvider;
    PUTileAnimator *_tileAnimator;
    PULoadingStatusManager *_loadingStatusManager;
    PUAudioSessionCategoryToken *__audioSessionCategoryToken;
}

@property (strong, nonatomic, setter=_setAudioSessionCategoryToken:) PUAudioSessionCategoryToken *_audioSessionCategoryToken; // @synthesize _audioSessionCategoryToken=__audioSessionCategoryToken;
@property (readonly, nonatomic) PUAssetActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (strong, nonatomic) PUContentTileProvider *contentTileProvider; // @synthesize contentTileProvider=_contentTileProvider;
@property (readonly, nonatomic) PUAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PULoadingStatusManager *loadingStatusManager; // @synthesize loadingStatusManager=_loadingStatusManager;
@property (strong, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (readonly) Class superclass;
@property (strong, nonatomic) PUTileAnimator *tileAnimator; // @synthesize tileAnimator=_tileAnimator;
@property (strong, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (void)_configureAudioSession:(id)arg1;
- (id)assetActionManagerCurrentAssetsDataSource:(id)arg1;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (void)configureTilingView:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3;
- (void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItem:(id)arg3;
- (void)tilingViewDidLayoutTileControllers:(id)arg1;

@end

