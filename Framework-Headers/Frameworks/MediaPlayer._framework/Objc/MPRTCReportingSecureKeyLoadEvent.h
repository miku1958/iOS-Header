//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRTCReportingEvent.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface MPRTCReportingSecureKeyLoadEvent : MPRTCReportingEvent
{
    double _duration;
    NSError *_error;
    NSString *_siriSessionIdentifier;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) NSString *siriSessionIdentifier; // @synthesize siriSessionIdentifier=_siriSessionIdentifier;

- (void).cxx_destruct;
- (id)newRTCReportingPayloadDictionary;
- (unsigned short)rtcReportingCategory;
- (unsigned short)rtcReportingType;

@end

