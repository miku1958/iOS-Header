//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>

#import <CoverSheet/PTSettingsKeyObserver-Protocol.h>

@class NSDate, NSString;

@interface CSTimerView : SBFLockScreenDateSubtitleView <PTSettingsKeyObserver>
{
    NSDate *_endDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newTimerDialForSettings:(id)arg1;
- (id)_timerFont;
- (void)_updateLegibilityStrength;
- (void)dealloc;
- (id)init;
- (void)setEndDate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateTimerLabel;

@end
