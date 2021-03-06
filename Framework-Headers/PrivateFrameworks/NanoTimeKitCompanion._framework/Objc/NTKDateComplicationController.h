//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationController.h>

#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class NSDate, NTKDateComplication;
@protocol NTKDateComplicationDisplay;

@interface NTKDateComplicationController : NTKComplicationController <NTKTimeTravel>
{
    unsigned long long _displayDateStyle;
    NSDate *_timeTravelDate;
}

@property (readonly, nonatomic) NTKDateComplication *complication; // @dynamic complication;
@property (readonly, weak, nonatomic) id<NTKDateComplicationDisplay> legacyDisplay; // @dynamic legacyDisplay;

+ (BOOL)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_textForDate:(id)arg1 dateStyle:(unsigned long long)arg2;
+ (id)textForDateStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_activate;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_handleTimeChangeNotification;
- (void)_setTextInDisplayIfNeededWithDate:(id)arg1;
- (void)_updateDisplay;
- (id)complicationApplicationIdentifier;
- (BOOL)hasTapAction;
- (void)performTapAction;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;

@end

