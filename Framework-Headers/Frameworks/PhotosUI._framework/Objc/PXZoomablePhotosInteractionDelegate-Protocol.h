//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXAssetReference, PXZoomablePhotosInteraction;

@protocol PXZoomablePhotosInteractionDelegate <NSObject>
- (PXAssetReference *)zoomablePhotosInteraction:(PXZoomablePhotosInteraction *)arg1 assetReferenceAtLocation:(struct CGPoint)arg2;
- (BOOL)zoomablePhotosInteractionShouldBegin:(PXZoomablePhotosInteraction *)arg1;
- (void)zoomablePhotosInteractionWillBegin:(PXZoomablePhotosInteraction *)arg1;
@end
