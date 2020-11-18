//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UIPress, UIPressesEvent;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedPress : NSObject <NSCopying>
{
    long long _delayCount;
    BOOL _cloneForSecondDelivery;
    UIPress *_press;
    UIPress *_stateWhenDelayed;
    UIPress *_stateWhenDelivered;
    UIPressesEvent *_event;
}

@property BOOL cloneForSecondDelivery; // @synthesize cloneForSecondDelivery=_cloneForSecondDelivery;
@property (strong, nonatomic) UIPressesEvent *event; // @synthesize event=_event;
@property (strong, nonatomic) UIPress *press; // @synthesize press=_press;
@property (strong, nonatomic) UIPress *stateWhenDelayed; // @synthesize stateWhenDelayed=_stateWhenDelayed;
@property (strong, nonatomic) UIPress *stateWhenDelivered; // @synthesize stateWhenDelivered=_stateWhenDelivered;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)decrementDelayCount;
- (long long)delayCount;
- (id)description;
- (void)incrementDelayCount;
- (id)init;
- (long long)phaseForDelivery;
- (void)saveCurrentPressState;
- (double)timestampForDelivery;

@end

