//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFCameraAnalyticsEvent.h>

@interface HFCameraAnalyticsCameraClipExportSessionEvent : HFCameraAnalyticsEvent
{
    double _recordingDuration;
}

@property (nonatomic) double recordingDuration; // @synthesize recordingDuration=_recordingDuration;

- (void)sendEventForState:(unsigned long long)arg1;

@end

