//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSSet, PHAsset, PHAssetCollection, PUPhotoBrowserZoomTransition;

@protocol PUPhotoBrowserZoomTransitionDelegate <NSObject>
- (BOOL)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 getFrame:(struct CGRect *)arg2 contentMode:(long long *)arg3 cropInsets:(struct UIEdgeInsets *)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6;
- (id)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 photoTokenForPhoto:(PHAsset *)arg2 inCollection:(PHAssetCollection *)arg3;

@optional
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 didFinishAnimationForOperation:(long long)arg2;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 didFinishForOperation:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 shouldHidePhotoTokens:(NSSet *)arg2;
- (BOOL)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 transitionImageForPhotoToken:(id)arg2 callback:(void (^)(UIImage *))arg3;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 willBeginAnimationForOperation:(long long)arg2;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 willBeginForOperation:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
@end
