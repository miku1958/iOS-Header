//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNAutocompleteProbeProvider;

@interface CNAutocompleteUsageMonitor : NSObject
{
    id<CNAutocompleteProbeProvider> _probeProvider;
}

@property (readonly, nonatomic) id<CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;

+ (void)userIgnoredResultsForRequest:(id)arg1 afterDelay:(double)arg2;
+ (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3;
- (void).cxx_destruct;
- (id)init;
- (id)initWithProbeProvider:(id)arg1;
- (void)userIgnoredResultsOfBatch:(unsigned long long)arg1 forRequest:(id)arg2 afterDelay:(double)arg3;
- (void)userSawResultsOfBatch:(unsigned long long)arg1 forRequest:(id)arg2;
- (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3;

@end

