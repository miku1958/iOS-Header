//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKStatistics;

@interface HKHeartRateDisplayTypeContextResult : NSObject
{
    long long _context;
    HKStatistics *_statistics;
}

@property (nonatomic) long long context; // @synthesize context=_context;
@property (strong, nonatomic) HKStatistics *statistics; // @synthesize statistics=_statistics;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithContext:(long long)arg1 statistics:(id)arg2;

@end

