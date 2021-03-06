//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface TIMetricDescriptorRegistry : NSObject
{
    BOOL _loaded;
    NSDictionary *_config;
    NSMutableDictionary *_metricDescriptors;
    NSMutableSet *_invalidMetricNames;
}

@property (readonly, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property (readonly, nonatomic) NSMutableSet *invalidMetricNames; // @synthesize invalidMetricNames=_invalidMetricNames;
@property (nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property (readonly, nonatomic) NSMutableDictionary *metricDescriptors; // @synthesize metricDescriptors=_metricDescriptors;

+ (id)registryWithConfig:(id)arg1;
+ (id)registryWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2;
- (void).cxx_destruct;
- (id)contextFromError:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2;
- (void)loadMetricDescriptors;
- (id)metricDescriptorWithName:(id)arg1;
- (id)valueFromError:(id)arg1 forKey:(id)arg2;

@end

