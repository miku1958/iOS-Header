//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class AFClockTimerObserver, AFClockTimerSnapshot, NSUUID;

@protocol AFClockTimerListening <NSObject>
- (void)clockTimerObserver:(AFClockTimerObserver *)arg1 snapshotDidUpdateFrom:(AFClockTimerSnapshot *)arg2 to:(AFClockTimerSnapshot *)arg3;
- (void)clockTimerObserver:(AFClockTimerObserver *)arg1 timerDidDismiss:(NSUUID *)arg2;
- (void)clockTimerObserver:(AFClockTimerObserver *)arg1 timerDidFire:(NSUUID *)arg2;
@end
