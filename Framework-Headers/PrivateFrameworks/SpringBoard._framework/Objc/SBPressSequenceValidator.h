//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBPressSequenceSettings;

@interface SBPressSequenceValidator : NSObject
{
    SBPressSequenceSettings *_settings;
}

@property (readonly, nonatomic) SBPressSequenceSettings *settings; // @synthesize settings=_settings;

- (void).cxx_destruct;
- (long long)_modeForDesiredIndex:(unsigned long long)arg1 isDownEvent:(BOOL)arg2;
- (struct _SBPressSequenceValidatorBounds)_pressDownBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2;
- (struct _SBPressSequenceValidatorBounds)_pressUpBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (BOOL)pressEventIsValidInSequence:(id)arg1 endingDownEvent:(BOOL)arg2 duration:(double)arg3;
- (double)timeUntilNextPressEventIsInValidInSequence:(id)arg1 lastPressEventInSequenceIsDown:(BOOL)arg2;

@end

