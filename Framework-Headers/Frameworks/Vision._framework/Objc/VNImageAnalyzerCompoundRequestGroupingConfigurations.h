//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequestGroupingConfigurations : NSObject
{
    NSMutableDictionary *_groupingConfigurations;
}

- (void).cxx_destruct;
- (id)allGroupingConfigurations;
- (id)groupingConfigurationForRequest:(id)arg1 withObservationClass:(Class)arg2;
- (unsigned long long)groupingConfigurationsCount;
- (id)init;
- (BOOL)preferBackgroundProcessing;

@end

