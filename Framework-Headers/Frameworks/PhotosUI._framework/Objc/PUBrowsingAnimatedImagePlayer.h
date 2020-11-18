//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

@class NSMutableSet, PHAnimatedImage, PUMediaProvider;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUBrowsingAnimatedImagePlayer : PUViewModel
{
    struct {
        BOOL animatedImage;
    } _isValid;
    BOOL _isAnimatedImageLoadingAllowed;
    int __animatedImageRequestID;
    id<PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    PHAnimatedImage *_animatedImage;
    NSMutableSet *__animatedImageLoadingDisablingReasons;
}

@property (strong, nonatomic) NSMutableSet *_animatedImageLoadingDisablingReasons; // @synthesize _animatedImageLoadingDisablingReasons=__animatedImageLoadingDisablingReasons;
@property (nonatomic, setter=_setAnimatedImageRequestID:) int _animatedImageRequestID; // @synthesize _animatedImageRequestID=__animatedImageRequestID;
@property (strong, nonatomic, setter=_setAnimatedImage:) PHAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property (strong, nonatomic) id<PUDisplayAsset> asset; // @synthesize asset=_asset;
@property (nonatomic, setter=_setAnimatedImageLoadingAllowed:) BOOL isAnimatedImageLoadingAllowed; // @synthesize isAnimatedImageLoadingAllowed=_isAnimatedImageLoadingAllowed;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;

- (void).cxx_destruct;
- (void)_cancelLoading;
- (void)_handleAnimatedImageRequestComplete:(id)arg1;
- (void)_invalidateAnimatedImage;
- (BOOL)_needsUpdate;
- (void)_updateAnimatedImage;
- (void)_updateIfNeeded;
- (void)dealloc;
- (id)debugDetailedDescription;
- (void)didPerformChanges;
- (id)init;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)newViewModelChange;
- (void)setAnimatedImageLoadingDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)unloadAnimatedImage;

@end

