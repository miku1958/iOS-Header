//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUOneUpPresentationHelperAssetDisplayDelegate-Protocol.h>

@class NSSet, NSString;
@protocol PUPhotoBrowserZoomTransitionDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoBrowserOneUpPresentationAdaptor : NSObject <PUOneUpPresentationHelperAssetDisplayDelegate>
{
    struct {
        BOOL respondsToTransitionImageForPhotoToken;
        BOOL respondsToWillBeginForOperation;
        BOOL respondsToDidFinishForOperation;
        BOOL respondsToWillBeginAnimationForOperation;
        BOOL respondsToDidFinishAnimationForOperation;
        BOOL respondsToShouldHidePhotosTokens;
        BOOL respondsToSetVisibilityForPhotoToken;
    } _zoomTransitionDelegateFlags;
    BOOL __shouldDisableScroll;
    id<PUPhotoBrowserZoomTransitionDelegate> _zoomTransitionDelegate;
    NSSet *__photoTokensForHiddenAssetReferences;
}

@property (copy, nonatomic, setter=_setPhotoTokensForHiddenAssetReferences:) NSSet *_photoTokensForHiddenAssetReferences; // @synthesize _photoTokensForHiddenAssetReferences=__photoTokensForHiddenAssetReferences;
@property (nonatomic, setter=_setShouldDisableScroll:) BOOL _shouldDisableScroll; // @synthesize _shouldDisableScroll=__shouldDisableScroll;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<PUPhotoBrowserZoomTransitionDelegate> zoomTransitionDelegate; // @synthesize zoomTransitionDelegate=_zoomTransitionDelegate;

- (void).cxx_destruct;
- (id)_photoTokenForAssetReference:(id)arg1;
- (id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
- (struct CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets *)arg3;
- (void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldDisableScroll:(BOOL)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;

@end

