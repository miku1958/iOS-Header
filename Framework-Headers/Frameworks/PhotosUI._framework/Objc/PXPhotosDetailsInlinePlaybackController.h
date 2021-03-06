//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGridInlinePlaybackController.h>

@class NSObject, PXTilingController;
@protocol OS_dispatch_queue, PXPhotosDetailsInlinePlaybackControllerDelegate;

@interface PXPhotosDetailsInlinePlaybackController : PXGridInlinePlaybackController
{
    NSObject<OS_dispatch_queue> *_recordCreationQueue;
    PXTilingController *_tilingController;
    id<PXPhotosDetailsInlinePlaybackControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<PXPhotosDetailsInlinePlaybackControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) PXTilingController *tilingController; // @synthesize tilingController=_tilingController;

- (void).cxx_destruct;
- (struct PXTileIdentifier)_currentTileIdentifierForRecord:(id)arg1;
- (BOOL)_isRecognizedTileIdentifier:(struct PXTileIdentifier)arg1;
- (BOOL)canPlayAsset:(id)arg1;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void)checkOutTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (struct CGRect)currentVisibleRect;
- (struct CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out struct CGSize *)arg2;
- (id)init;
- (id)initWithTilingController:(id)arg1;
- (BOOL)shouldEnablePlayback;
- (void)updatePlaybackEnabled;

@end

