//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCETrackedReference;

__attribute__((visibility("hidden")))
@interface TSTSortRuleReferenceTrackerReference : NSObject
{
    unsigned char _columnIndex;
    TSCETrackedReference *_trackedReference;
}

@property (nonatomic) unsigned char columnIndex; // @synthesize columnIndex=_columnIndex;
@property (strong, nonatomic) TSCETrackedReference *trackedReference; // @synthesize trackedReference=_trackedReference;

+ (id)referenceWithColumnIndex:(unsigned char)arg1 trackedReference:(id)arg2;
- (void).cxx_destruct;
- (BOOL)hasTrackedReferenceEqualTo:(id)arg1;
- (unsigned long long)hash;
- (id)initWithColumnIndex:(unsigned char)arg1 trackedReference:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
