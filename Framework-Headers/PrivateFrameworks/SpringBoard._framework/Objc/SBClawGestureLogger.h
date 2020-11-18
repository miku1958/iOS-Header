//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet;

@interface SBClawGestureLogger : NSObject
{
    BOOL _didTriggerSOS;
    NSDate *_clawEventTimestamp;
    NSMutableSet *_activePressTypes;
    NSMutableSet *_participatingPressTypes;
}

@property (strong, nonatomic) NSMutableSet *activePressTypes; // @synthesize activePressTypes=_activePressTypes;
@property (copy, nonatomic) NSDate *clawEventTimestamp; // @synthesize clawEventTimestamp=_clawEventTimestamp;
@property (nonatomic) BOOL didTriggerSOS; // @synthesize didTriggerSOS=_didTriggerSOS;
@property (strong, nonatomic) NSMutableSet *participatingPressTypes; // @synthesize participatingPressTypes=_participatingPressTypes;

- (void).cxx_destruct;
- (void)_publishLoggedData;
- (void)_resetLoggedData;
- (id)init;
- (void)noteGesturePressType:(long long)arg1 withPressPhase:(long long)arg2;
- (void)noteSOSTriggered;

@end
