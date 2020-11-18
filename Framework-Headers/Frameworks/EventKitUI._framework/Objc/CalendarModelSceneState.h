//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalendarModelSceneState : NSObject
{
    BOOL _showDayAsList;
    BOOL _showMonthAsDivided;
    int _dayViewFirstVisibleSecond;
    double _dayViewHourScale;
    double _weekViewHourScale;
    long long _weekViewFirstVisibleSecond;
}

@property (nonatomic) int dayViewFirstVisibleSecond; // @synthesize dayViewFirstVisibleSecond=_dayViewFirstVisibleSecond;
@property (nonatomic) double dayViewHourScale; // @synthesize dayViewHourScale=_dayViewHourScale;
@property (nonatomic) BOOL showDayAsList; // @synthesize showDayAsList=_showDayAsList;
@property (nonatomic) BOOL showMonthAsDivided; // @synthesize showMonthAsDivided=_showMonthAsDivided;
@property (nonatomic) long long weekViewFirstVisibleSecond; // @synthesize weekViewFirstVisibleSecond=_weekViewFirstVisibleSecond;
@property (nonatomic) double weekViewHourScale; // @synthesize weekViewHourScale=_weekViewHourScale;

- (id)init;

@end
