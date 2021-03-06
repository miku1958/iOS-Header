//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementGroup : NSObject
{
    NSArray *_placements;
    long long _minimumPriority;
    long long _maximumPriority;
}

@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long maximumPriority; // @synthesize maximumPriority=_maximumPriority;
@property (readonly, nonatomic) long long minimumPriority; // @synthesize minimumPriority=_minimumPriority;
@property (copy, nonatomic) NSArray *placements; // @synthesize placements=_placements;

+ (id)groupWithPriority:(long long)arg1 placements:(id)arg2;
- (void).cxx_destruct;

@end

