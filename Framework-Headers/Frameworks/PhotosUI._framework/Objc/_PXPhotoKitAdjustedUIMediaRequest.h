//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, PHImageManager, PLEditSource, PLPhotoEditModel, PXPhotoKitEditSourceLoader;
@protocol OS_dispatch_queue, PXPhotoKitAdjustedDisplayAsset;

@interface _PXPhotoKitAdjustedUIMediaRequest : NSObject
{
    PXPhotoKitEditSourceLoader *_editSourceLoader;
    BOOL _delayRenders;
    BOOL _useCachedRenders;
    id<PXPhotoKitAdjustedDisplayAsset> _asset;
    NSObject<OS_dispatch_queue> *_renderQueue;
    PHImageManager *_imageManager;
    PLEditSource *_editSource;
    NSError *_loadError;
    PLPhotoEditModel *_baseEditModel;
    double _progress;
}

@property (readonly, nonatomic) id<PXPhotoKitAdjustedDisplayAsset> asset; // @synthesize asset=_asset;
@property (strong, nonatomic) PLPhotoEditModel *baseEditModel; // @synthesize baseEditModel=_baseEditModel;
@property (nonatomic) BOOL delayRenders; // @synthesize delayRenders=_delayRenders;
@property (strong, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property (readonly, nonatomic) PHImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property (strong, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property (nonatomic) BOOL useCachedRenders; // @synthesize useCachedRenders=_useCachedRenders;

- (void).cxx_destruct;
- (void)_handleEditSourceLoadingFinished;
- (void)beginLoadingEditSource;
- (void)cancel;
- (void)dealloc;
- (void)editSourceDidChange;
- (id)initWithAsset:(id)arg1 renderQueue:(id)arg2 imageManager:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)progressDidChange;
- (void)start;

@end

