//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSObject, PXAssetReference, PXGAnimation, UIView;
@protocol PXAnonymousViewController;

@protocol PXPhotosViewDelegate <NSObject>

@optional
- (void)containerWasDeletedForPhotosViewController:(NSObject<PXAnonymousViewController> *)arg1;
- (UIView *)headerViewForPhotosViewController:(NSObject<PXAnonymousViewController> *)arg1;
- (PXGAnimation *)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 animationForProposedAnimation:(PXGAnimation *)arg2;
- (BOOL)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 didPickAssetReference:(PXAssetReference *)arg2;
@end

