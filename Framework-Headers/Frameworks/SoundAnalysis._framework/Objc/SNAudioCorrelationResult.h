//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNTimeConversionDictionaryProviding-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProviding-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProvidingWritable-Protocol.h>

@class NSDictionary, NSString;

@interface SNAudioCorrelationResult : NSObject <SNTimeConversionDictionaryProviding, SNTimeRangeProvidingWritable, SNTimeRangeProviding>
{
    double _peakValue;
    long long _channelIndex;
    CDStruct_1b6d18a9 _peakTime;
    CDStruct_e83c9415 timeRange;
}

@property (nonatomic) long long channelIndex; // @synthesize channelIndex=_channelIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CDStruct_1b6d18a9 peakTime; // @synthesize peakTime=_peakTime;
@property (nonatomic) double peakValue; // @synthesize peakValue=_peakValue;
@property (readonly) Class superclass;
@property (readonly) NSDictionary *timeConversionDictionary;
@property (nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange;


@end
