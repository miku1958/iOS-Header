//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class MXBackgroundExitData, MXForegroundExitData;

@interface MXAppExitMetric : MXMetric
{
    MXForegroundExitData *_foregroundExitData;
    MXBackgroundExitData *_backgroundExitData;
}

@property (readonly) MXBackgroundExitData *backgroundExitData; // @synthesize backgroundExitData=_backgroundExitData;
@property (readonly) MXForegroundExitData *foregroundExitData; // @synthesize foregroundExitData=_foregroundExitData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithForegroundExitData:(id)arg1 backgroundExitData:(id)arg2;
- (id)toDictionary;

@end
