//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSMADEVValue : NSObject
{
    double _observationInterval;
    double _madev;
}

@property (readonly, nonatomic) double madev; // @synthesize madev=_madev;
@property (readonly, nonatomic) double observationInterval; // @synthesize observationInterval=_observationInterval;

- (id)description;
- (id)initWithObservationInterval:(double)arg1 andMADEV:(double)arg2;

@end

