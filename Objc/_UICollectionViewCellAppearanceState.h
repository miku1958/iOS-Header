//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICollectionViewCellAppearanceState : NSObject
{
    BOOL _hasLifted;
    BOOL _hasBeganCancelling;
    int _dragState;
}

@property (readonly, nonatomic) long long appearance;
@property (nonatomic) int dragState; // @synthesize dragState=_dragState;
@property (readonly, nonatomic) BOOL enrouteToOrReachedTerminalState;
@property (nonatomic) BOOL hasBeganCancelling; // @synthesize hasBeganCancelling=_hasBeganCancelling;
@property (readonly, nonatomic) BOOL hasBeganDroppingInto;
@property (nonatomic) BOOL hasLifted; // @synthesize hasLifted=_hasLifted;

- (id)description;
- (void)didBeginCancelling;
- (void)didBeginDropping;
- (void)didBeginDroppingInto;
- (void)didBeginLift;
- (void)didCompleteCancelling;
- (void)didCompleteDropping;
- (void)didCompleteLift;
- (void)didEnd;
- (void)didMove;
- (id)init;
- (void)willBeginCancelling;

@end

