//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoVision/PVPersonDeduperStep.h>

__attribute__((visibility("hidden")))
@interface PVPersonDeduperLocationStep : PVPersonDeduperStep
{
}

- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (BOOL)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3;
- (id)metricsKey;
- (id)momentWithBestLocationForPersons:(id)arg1 andOtherPersons:(id)arg2 personsByMomentLocalIdentifiersCache:(id)arg3;
- (id)name;

@end

