//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TITypologyTimer : NSObject
{
    BOOL _foundFirstInput;
    double _elapsedTime;
    double _mostRecentTimestamp;
    double _maxTimeIntervalBetweenInputs;
}

@property (nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property (nonatomic) BOOL foundFirstInput; // @synthesize foundFirstInput=_foundFirstInput;
@property (nonatomic) double maxTimeIntervalBetweenInputs; // @synthesize maxTimeIntervalBetweenInputs=_maxTimeIntervalBetweenInputs;
@property (nonatomic) double mostRecentTimestamp; // @synthesize mostRecentTimestamp=_mostRecentTimestamp;

- (void)addInputEventWithTimestamp:(double)arg1;

@end

