//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDHeartbeatDatum : NSObject
{
    BOOL _precededByGap;
    double _timeSinceSequenceStart;
}

@property (readonly, nonatomic) BOOL precededByGap; // @synthesize precededByGap=_precededByGap;
@property (readonly, nonatomic) double timeSinceSequenceStart; // @synthesize timeSinceSequenceStart=_timeSinceSequenceStart;

+ (id)datumWithTimeSinceSequenceStart:(double)arg1 preceededByGap:(BOOL)arg2;

@end
