//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface PUTileReattachmentContext : NSObject
{
    BOOL _isZoomingIn;
    BOOL _isTransitioningOverOneUp;
    NSMapTable *__tileControllerVelocities;
}

@property (readonly, nonatomic) NSMapTable *_tileControllerVelocities; // @synthesize _tileControllerVelocities=__tileControllerVelocities;
@property (nonatomic, setter=setTransitioningOverOneUp:) BOOL isTransitioningOverOneUp; // @synthesize isTransitioningOverOneUp=_isTransitioningOverOneUp;
@property (nonatomic, setter=setZoomingIn:) BOOL isZoomingIn; // @synthesize isZoomingIn=_isZoomingIn;

- (void).cxx_destruct;
- (void)setVelocity:(struct PUDisplayVelocity)arg1 forTileController:(id)arg2;
- (struct PUDisplayVelocity)velocityForTileController:(id)arg1;

@end

