//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationController.h>

#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class CLLocation, NSDate, NSNumber, NSTimer;
@protocol NTKMoonPhaseComplicationDisplay;

@interface NTKMoonPhaseComplicationController : NTKComplicationController <NTKTimeTravel>
{
    NSDate *_timeTravelDate;
    struct {
        unsigned int wantsPhaseName:1;
        unsigned int wantsPhaseNumber:1;
        unsigned int wantsEventAndDate:1;
        unsigned int wantsLocked:1;
        unsigned int wantsPaused:1;
    } _displayFlags;
    NSTimer *_afterEventTimer;
    BOOL _paused;
    BOOL _missedUpdateWhilePaused;
    struct NSNumber *_token;
    CLLocation *_location;
}

@property (readonly, weak, nonatomic) id<NTKMoonPhaseComplicationDisplay> legacyDisplay; // @dynamic legacyDisplay;
@property (strong, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (strong, nonatomic) NSNumber *token; // @synthesize token=_token;

+ (BOOL)_acceptsComplicationType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_activate;
- (void)_afterEventTimerFired:(id)arg1;
- (void)_asyncUpdateDisplay;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_invalidateEventTimer;
- (void)_scheduleAfterEventTimer:(id)arg1;
- (void)_updateDisplay;
- (void)_updateDisplayForced:(BOOL)arg1;
- (BOOL)hasTapAction;
- (void)performTapAction;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setShowsLockedUI:(BOOL)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;

@end
