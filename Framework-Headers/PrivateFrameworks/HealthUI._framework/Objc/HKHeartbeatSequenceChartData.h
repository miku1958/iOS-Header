//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HKHeartbeatSequenceChartData : NSObject
{
    double _initialXAxisOffset;
    NSMutableArray *_sections;
}

@property (nonatomic) double initialXAxisOffset; // @synthesize initialXAxisOffset=_initialXAxisOffset;
@property (readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;

- (void).cxx_destruct;
- (void)_expandToSection:(long long)arg1;
- (void)addSequencePoint:(id)arg1 section:(long long)arg2;
- (void)enumerateSequences:(CDUnknownBlockType)arg1;
- (id)init;
- (long long)sectionCount;

@end

