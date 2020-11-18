//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface NviContext : NSObject
{
    BOOL _requestHistoricalAudio;
    BOOL _shouldLogRawSensorData;
    NSDictionary *_voiceTriggerInfo;
    unsigned long long _reqStartAudioSampleId;
    unsigned long long _reqStartMachAbsTime;
    NSString *_rootLogDir;
}

@property (nonatomic) unsigned long long reqStartAudioSampleId; // @synthesize reqStartAudioSampleId=_reqStartAudioSampleId;
@property (nonatomic) unsigned long long reqStartMachAbsTime; // @synthesize reqStartMachAbsTime=_reqStartMachAbsTime;
@property (nonatomic) BOOL requestHistoricalAudio; // @synthesize requestHistoricalAudio=_requestHistoricalAudio;
@property (strong, nonatomic) NSString *rootLogDir; // @synthesize rootLogDir=_rootLogDir;
@property (nonatomic) BOOL shouldLogRawSensorData; // @synthesize shouldLogRawSensorData=_shouldLogRawSensorData;
@property (strong, nonatomic) NSDictionary *voiceTriggerInfo; // @synthesize voiceTriggerInfo=_voiceTriggerInfo;

- (void).cxx_destruct;
- (id)description;

@end
