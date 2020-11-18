//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <AVFoundation/AVKeyPathDependencyHost-Protocol.h>
#import <AVFoundation/AVWeakObservable-Protocol.h>

@class AVPlayer, AVPlayerLayerInternal, NSDictionary, NSString;

@interface AVPlayerLayer : CALayer <AVKeyPathDependencyHost, AVWeakObservable>
{
    AVPlayerLayerInternal *_playerLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (strong, nonatomic) AVPlayer *player;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (readonly) Class superclass;
@property (copy) NSString *videoGravity;
@property (readonly, nonatomic) struct CGRect videoRect;

+ (void)_swapSublayersBetweenPlayerLayer:(id)arg1 andPlayerLayer:(id)arg2;
+ (id)keyPathsForValuesAffectingVideoRect;
+ (id)makeClosedCaptionLayer;
+ (id)playerLayerWithPlayer:(id)arg1;
- (void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 forKey:(id)arg3;
- (void)_addAnimationsForMaskLayer:(id)arg1 forKey:(id)arg2;
- (void)_addAnimationsForPIPPlaceholderLayer:(id)arg1 forKey:(id)arg2;
- (void)_addAnimationsForVideoLayer:(id)arg1 size:(struct CGSize)arg2 gravity:(id)arg3 forKey:(id)arg4;
- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)_addSublayerTransformAnimationToLayer:(id)arg1 fromTransform:(struct CATransform3D)arg2 usingAnimation:(id)arg3 gravity:(id)arg4 presentationSize:(struct CGSize)arg5 forKey:(id)arg6;
- (void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(BOOL)arg1;
- (void)_associateWithPIPLayer:(id)arg1;
- (id)_associatedPIPLayer;
- (id)_closedCaptionLayer;
- (void)_configurePlayerWhenEnteringPIP;
- (void)_configurePlayerWhenLeavingPIP;
- (void)_disassociateWithPIPLayer;
- (struct CGSize)_displaySize;
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(CDUnknownBlockType)arg2;
- (void)_forceLayout;
- (void)_getMaskLayer:(id *)arg1 videoLayer:(id *)arg2 subtitleLayer:(id *)arg3 closedCaptionLayer:(id *)arg4;
- (id)_maskLayer;
- (void)_mergeClientLayersIntoMaskLayer:(id)arg1;
- (void)_notifyPlayerOfDisplaySize;
- (struct CGSize)_playerCurrentItemPresentationSize;
- (BOOL)_preventsChangesToSublayerHierarchy;
- (void)_restoreClientLayers:(id)arg1 intoMaskLayer:(id)arg2;
- (void)_scaleVideoLayerUsingLanczosFilterWithSublayerTransform:(struct CATransform3D)arg1;
- (void)_setCanEnterPIPMode:(BOOL)arg1;
- (void)_setPreventsChangesToSublayerHierarchy:(BOOL)arg1;
- (void)_setSublayersForPIP:(id)arg1;
- (void)_setSublayersPreventChangesToSublayerHierarchy:(BOOL)arg1;
- (void)_setSubtitleGravity:(id)arg1;
- (void)_setWillManageSublayersAsSwappedLayers:(BOOL)arg1;
- (void)_startObservingPlayer:(id)arg1;
- (void)_stopObservingPlayer:(id)arg1;
- (id)_sublayersForPIP;
- (id)_subtitleGravity;
- (id)_subtitleLayer;
- (void)_syncToPlayer:(id)arg1;
- (id)_videoLayer;
- (struct CGRect)_videoRectForBounds:(struct CGRect)arg1;
- (BOOL)_willManageSublayersAsSwappedLayers;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (void)addSublayer:(id)arg1;
- (BOOL)canEnterPIPMode;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (void)enterPIPModeRedirectingVideoToLayer:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (BOOL)isLanczosFilterDownscalingEnabled;
- (BOOL)isOverscanSubtitleSupportEnabled;
- (BOOL)isPIPModeEnabled;
- (long long)lanczosFilterDownscaleFactor;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)layoutSublayers;
- (void)leavePIPMode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)placeholderContentLayerDuringPIPMode;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeFromSuperlayer;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setLanczosFilterDownscaleFactor:(long long)arg1;
- (void)setLanczosFilterDownscalingEnabled:(BOOL)arg1;
- (void)setOverscanSubtitleSupportEnabled:(BOOL)arg1;
- (void)setPIPModeEnabled:(BOOL)arg1;
- (void)setPlaceholderContentLayerDuringPIPMode:(id)arg1;
- (void)setSublayers:(id)arg1;

@end
