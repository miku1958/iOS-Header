//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSLimitation.h>

@interface RBSCPUMaximumUsageLimitation : RBSLimitation
{
    unsigned char _role;
    unsigned long long _percentage;
    double _duration;
    unsigned long long _violationPolicy;
}

@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) unsigned long long percentage; // @synthesize percentage=_percentage;
@property (readonly, nonatomic) unsigned char role; // @synthesize role=_role;
@property (readonly, nonatomic) unsigned long long violationPolicy; // @synthesize violationPolicy=_violationPolicy;

+ (id)limitationForRole:(unsigned char)arg1 withPercentage:(unsigned long long)arg2 duration:(double)arg3 violationPolicy:(unsigned long long)arg4;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

