//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMContactDetailExtraction : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct SGMDocumentType_)arg2 signature:(struct SGMTypeSafeBool_)arg3 detail:(struct SGMContactDetailType_)arg4 outcome:(struct SGMContactDetailExtractionOutcome_)arg5 foundInSenderCNContact:(struct SGMTypeSafeBool_)arg6;

@end

