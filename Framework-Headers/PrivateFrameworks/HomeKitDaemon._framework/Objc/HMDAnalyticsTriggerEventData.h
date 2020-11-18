//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDAnalyticsCalendarEventData, HMDAnalyticsCharacteristicEventData, HMDAnalyticsCharacteristicThresholdEventData, HMDAnalyticsDurationEventData, HMDAnalyticsLocationEventData, HMDAnalyticsPresenceEventData, HMDAnalyticsSignificantTimeEventData;

@interface HMDAnalyticsTriggerEventData : HMFObject
{
    BOOL _endEvent;
    HMDAnalyticsCalendarEventData *_calendarEvent;
    HMDAnalyticsCharacteristicEventData *_charEvent;
    HMDAnalyticsCharacteristicThresholdEventData *_charThresholdEvent;
    HMDAnalyticsDurationEventData *_durationEvent;
    HMDAnalyticsLocationEventData *_locationEvent;
    HMDAnalyticsPresenceEventData *_presenceEvent;
    HMDAnalyticsSignificantTimeEventData *_significantTimeEvent;
    HMDAnalyticsCharacteristicThresholdEventData *_thresholdEvent;
}

@property (strong, nonatomic) HMDAnalyticsCalendarEventData *calendarEvent; // @synthesize calendarEvent=_calendarEvent;
@property (strong, nonatomic) HMDAnalyticsCharacteristicEventData *charEvent; // @synthesize charEvent=_charEvent;
@property (strong, nonatomic) HMDAnalyticsCharacteristicThresholdEventData *charThresholdEvent; // @synthesize charThresholdEvent=_charThresholdEvent;
@property (strong, nonatomic) HMDAnalyticsDurationEventData *durationEvent; // @synthesize durationEvent=_durationEvent;
@property BOOL endEvent; // @synthesize endEvent=_endEvent;
@property (strong, nonatomic) HMDAnalyticsLocationEventData *locationEvent; // @synthesize locationEvent=_locationEvent;
@property (strong, nonatomic) HMDAnalyticsPresenceEventData *presenceEvent; // @synthesize presenceEvent=_presenceEvent;
@property (strong, nonatomic) HMDAnalyticsSignificantTimeEventData *significantTimeEvent; // @synthesize significantTimeEvent=_significantTimeEvent;
@property (strong, nonatomic) HMDAnalyticsCharacteristicThresholdEventData *thresholdEvent; // @synthesize thresholdEvent=_thresholdEvent;

- (void).cxx_destruct;

@end
