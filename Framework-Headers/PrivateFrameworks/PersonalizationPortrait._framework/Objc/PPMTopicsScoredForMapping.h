//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface PPMTopicsScoredForMapping : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 mappingId:(id)arg3 resultSizeLog10:(unsigned long long)arg4 timeLimited:(struct PPMTypeSafeBool_)arg5 exclusionSpec:(struct PPMTypeSafeBool_)arg6 error:(struct PPMTypeSafeBool_)arg7;

@end

