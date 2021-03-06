//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHaptics/CHHapticPatternPlayer-Protocol.h>
#import <CoreHaptics/PatternPlayerDetails-Protocol.h>

@class AVHapticPlayerChannel, CHHapticEngine, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PatternPlayer : NSObject <CHHapticPatternPlayer, PatternPlayerDetails>
{
    CHHapticEngine *_engine;
    AVHapticPlayerChannel *_channel;
    NSArray *_events;
    double _patternDuration;
    int _muteState;
    unsigned char _previousAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL isMuted;
@property (readonly) double patternDuration; // @synthesize patternDuration=_patternDuration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)cancelAndReturnError:(id *)arg1;
- (void)clearExternalResources:(id)arg1;
- (void)dealloc;
- (void)doSetMute:(BOOL)arg1;
- (id)init;
- (id)initWithPlayable:(id)arg1 engine:(id)arg2 privileged:(BOOL)arg3 error:(id *)arg4;
- (BOOL)needsResetForAction:(unsigned char)arg1;
- (BOOL)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (BOOL)sendParameters:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (BOOL)startAtTime:(double)arg1 error:(id *)arg2;
- (BOOL)stopAtTime:(double)arg1 error:(id *)arg2;

@end

