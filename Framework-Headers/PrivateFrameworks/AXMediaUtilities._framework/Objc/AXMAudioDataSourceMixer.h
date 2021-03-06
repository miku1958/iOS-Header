//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMAudioDataSource.h>

@class NSSet, NSString;

@interface AXMAudioDataSourceMixer : AXMAudioDataSource
{
    NSString *_name;
    double _panning;
    NSSet *_dataSources;
}

@property (strong, nonatomic) NSSet *dataSources; // @synthesize dataSources=_dataSources;
@property (readonly, nonatomic) BOOL isMonoOutput;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) double panning; // @synthesize panning=_panning;

- (void).cxx_destruct;
- (void)addDataSource:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(BOOL)arg3;
- (void)prepareNextSamples:(unsigned long long)arg1;
- (void)removeAllDataSources;
- (void)removeDataSource:(id)arg1;
- (void)setCurrentSampleIndex:(unsigned long long)arg1;

@end

