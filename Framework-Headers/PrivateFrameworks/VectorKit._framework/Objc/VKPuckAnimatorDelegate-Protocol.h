//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class VKAnimation, VKPuckAnimator;

@protocol VKPuckAnimatorDelegate <NSObject>
- (void)puckAnimator:(VKPuckAnimator *)arg1 runAnimation:(VKAnimation *)arg2;
- (void)puckAnimator:(VKPuckAnimator *)arg1 updatedPosition:(const Coordinate3D_bc242218 *)arg2 course:(const Unit_3d259e8a *)arg3;
- (void)puckAnimator:(VKPuckAnimator *)arg1 updatedTargetPosition:(const Coordinate3D_bc242218 *)arg2;
- (void)puckAnimatorDidStop:(VKPuckAnimator *)arg1;
@end

