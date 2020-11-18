//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKWorkoutRoute, NSArray;

@interface HDSmoothingTask : NSObject
{
    HKWorkoutRoute *_sample;
    NSArray *_unsmoothedLocations;
    CDUnknownBlockType _completionHandler;
    long long _smoothingAttempts;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) HKWorkoutRoute *sample; // @synthesize sample=_sample;
@property long long smoothingAttempts; // @synthesize smoothingAttempts=_smoothingAttempts;
@property (strong, nonatomic) NSArray *unsmoothedLocations; // @synthesize unsmoothedLocations=_unsmoothedLocations;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRoute:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

