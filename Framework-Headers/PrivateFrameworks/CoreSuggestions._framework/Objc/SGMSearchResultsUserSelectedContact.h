//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMSearchResultsUserSelectedContact : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 wasSuggestedContact:(struct SGMTypeSafeBool_)arg2 wasKnownContact:(struct SGMTypeSafeBool_)arg3 app:(struct SGMContactDetailUsedApp_)arg4;

@end

