//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RMSSample : NSObject
{
    double _RMSScore;
    unsigned long long _lastSampleCount;
}

@property (nonatomic) double RMSScore; // @synthesize RMSScore=_RMSScore;
@property (nonatomic) unsigned long long lastSampleCount; // @synthesize lastSampleCount=_lastSampleCount;

- (long long)compareScoresDesc:(id)arg1;
- (id)initWithRMSScore:(double)arg1 lastSampleCount:(unsigned long long)arg2;

@end
