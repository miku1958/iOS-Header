//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTDecayingObject : NSObject
{
    NSMutableArray *_resetBlocks;
    BOOL _isDecaying;
    BOOL _isHolding;
    double _lastUpdate;
    double _timeoutDuration;
}

@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isDecaying; // @synthesize isDecaying=_isDecaying;
@property (readonly, nonatomic) BOOL isHolding; // @synthesize isHolding=_isHolding;
@property (readonly, nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property (nonatomic) double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;

- (void).cxx_destruct;
- (id)initWithTimeoutDuration:(double)arg1;
- (void)onResetDo:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)resetActiveDecayTo:(double)arg1;
- (void)resetDecayTo:(double)arg1;
- (void)startDecaying;
- (void)startOrUpdateDecay;
- (void)updateDecay;

@end
