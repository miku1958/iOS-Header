//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface HUNoiseSample : NSObject
{
    float _splValue;
    float _sampleDuration;
    NSDate *_sampleDate;
}

@property (strong, nonatomic) NSDate *sampleDate; // @synthesize sampleDate=_sampleDate;
@property (nonatomic) float sampleDuration; // @synthesize sampleDuration=_sampleDuration;
@property (nonatomic) float splValue; // @synthesize splValue=_splValue;

- (void).cxx_destruct;
- (id)initWithSampleDate:(id)arg1 splValue:(float)arg2 andDuration:(float)arg3;

@end
