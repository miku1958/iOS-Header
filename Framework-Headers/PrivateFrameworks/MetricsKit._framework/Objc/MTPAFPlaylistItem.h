//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MTPAFPlaylistItem : NSObject
{
    unsigned long long _start;
    unsigned long long _end;
    NSArray *_metricsData;
}

@property (nonatomic) unsigned long long end; // @synthesize end=_end;
@property (copy) NSArray *metricsData; // @synthesize metricsData=_metricsData;
@property (nonatomic) unsigned long long start; // @synthesize start=_start;

- (void).cxx_destruct;
- (id)initWithStart:(unsigned long long)arg1 end:(unsigned long long)arg2 metricsData:(id)arg3;

@end

