//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUDisplayTileTransform, PULivePhotoVideoOverlayTileViewController, UIImage;

@protocol PULivePhotoVideoOverlayTileViewControllerDelegate <NSObject>
- (BOOL)livePhotoVideoPlaybackTileViewControllerCanBeginPlaying:(PULivePhotoVideoOverlayTileViewController *)arg1;
- (UIImage *)livePhotoVideoPlaybackTileViewControllerCurrentImage:(PULivePhotoVideoOverlayTileViewController *)arg1;
- (void)livePhotoVideoPlaybackTileViewControllerDidEndPlaying:(PULivePhotoVideoOverlayTileViewController *)arg1;
- (PUDisplayTileTransform *)livePhotoVideoPlaybackTileViewControllerDisplayTileTransform:(PULivePhotoVideoOverlayTileViewController *)arg1;
- (void)livePhotoVideoPlaybackTileViewControllerWillBeginPlaying:(PULivePhotoVideoOverlayTileViewController *)arg1;
@end
