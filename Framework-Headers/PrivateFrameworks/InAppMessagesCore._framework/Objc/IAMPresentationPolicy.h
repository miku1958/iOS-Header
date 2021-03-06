//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IAMPresentationPolicy : NSObject
{
    long long _policyGroup;
    double _minimumIntervalBetweenPresentations;
}

@property (readonly, nonatomic) double minimumIntervalBetweenPresentations; // @synthesize minimumIntervalBetweenPresentations=_minimumIntervalBetweenPresentations;
@property (readonly, nonatomic) long long policyGroup; // @synthesize policyGroup=_policyGroup;

+ (long long)presentationPolicyGroupForGlobalPresentationPolicyGroup:(int)arg1;
- (id)initWithMinimumIntervalBetweenPresentations:(double)arg1 forPresentationPolicyGroup:(long long)arg2;

@end

