//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, NSString;

@interface NTKAlarmTimelineEntry : NTKTimelineEntryModel
{
    unsigned long long _entryType;
    NSString *_alarmLabel;
    NSDate *_fireDate;
    NSDate *_snoozeDate;
}

@property (strong, nonatomic) NSString *alarmLabel; // @synthesize alarmLabel=_alarmLabel;
@property (nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
@property (strong, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property (strong, nonatomic) NSDate *snoozeDate; // @synthesize snoozeDate=_snoozeDate;

+ (id)companionModel;
- (void).cxx_destruct;
- (id)_activeStateTimeRelativeDateTextProvider;
- (id)_activeStateTimeTextProvider;
- (id)_circularTemplateForAlarm:(BOOL)arg1;
- (id)_extraLargeAlarmInactiveImageProvider;
- (id)_largeUtilityInactiveImageProvider;
- (void)_makeAlarmStackTextTimeProvider:(id *)arg1 designatorProvider:(id *)arg2 designatorExists:(BOOL *)arg3 designatorLeads:(BOOL *)arg4;
- (id)_modularSmallAlarmInactiveImageProvider;
- (id)_newCircularMediumTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newLargeModularTemplate;
- (id)_newLargeUtilityTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newSmallModularTemplate;
- (id)_richCircularMetadata;
- (id)_snoozeStateDateTextProvider;
- (id)description;
- (id)templateForComplicationFamily:(long long)arg1;

@end

