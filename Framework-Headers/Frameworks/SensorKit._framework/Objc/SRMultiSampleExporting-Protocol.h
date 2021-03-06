//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SensorKit/NSObject-Protocol.h>

@class NSDictionary;
@protocol SRSampling;

@protocol SRMultiSampleExporting <NSObject>
- (void)sr_beginMultiSampleStream;
- (NSDictionary *)sr_dictionaryRepresentationWithSample:(id<SRSampling>)arg1;
- (NSDictionary *)sr_endMultiSampleStream;
@end

