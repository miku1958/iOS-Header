//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@protocol PKForegroundActiveArbiterObserver;

@protocol PKForegroundActiveArbiter <NSObject>
- (CDStruct_973bafd3)registerObserver:(id<PKForegroundActiveArbiterObserver>)arg1;
- (void)unregisterObserver:(id<PKForegroundActiveArbiterObserver>)arg1;
@end

