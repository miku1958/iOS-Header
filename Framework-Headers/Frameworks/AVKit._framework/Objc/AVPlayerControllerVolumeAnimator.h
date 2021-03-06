//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerController;

__attribute__((visibility("hidden")))
@interface AVPlayerControllerVolumeAnimator : NSObject
{
    BOOL _animatingTowardsZero;
    BOOL _animatingAwayFromZero;
    AVPlayerController *_playerController;
    double _volumeToRestore;
}

@property (nonatomic, getter=isAnimatingAwayFromZero) BOOL animatingAwayFromZero; // @synthesize animatingAwayFromZero=_animatingAwayFromZero;
@property (nonatomic, getter=isAnimatingTowardsZero) BOOL animatingTowardsZero; // @synthesize animatingTowardsZero=_animatingTowardsZero;
@property (readonly, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property (nonatomic) double volumeToRestore; // @synthesize volumeToRestore=_volumeToRestore;

- (void).cxx_destruct;
- (BOOL)canAnimateVolumeAwayFromZero;
- (BOOL)canAnimateVolumeTowardsZero;
- (BOOL)currentRouteHasVolumeControl;
- (id)initWithPlayerController:(id)arg1;
- (void)restoreVolumeIfNeeded;
- (void)setProgressAwayFromZero:(double)arg1;
- (void)setProgressTowardsZero:(double)arg1;

@end

