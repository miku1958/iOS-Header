//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class _UIPlatterMenuPanningTransformer;

@protocol _UIPlatterMenuPanningTransformerDelegate <NSObject>
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didBeginPanToTransformedPosition:(struct CGPoint)arg2;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didEndPanToTransformedPosition:(struct CGPoint)arg2 offsetFromPrevious:(struct CGVector)arg3 velocity:(struct CGVector)arg4;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didEnterTransitionNotchForTransformedPosition:(struct CGPoint)arg2;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didPanToTransformedPosition:(struct CGPoint)arg2 offsetFromPrevious:(struct CGVector)arg3 touchPosition:(struct CGPoint)arg4 velocity:(struct CGVector)arg5 didChangeAxis:(BOOL)arg6 axisLock:(int)arg7;
@end
