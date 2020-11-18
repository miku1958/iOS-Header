//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceMetricsProtocol-Protocol.h>

@protocol _SGSuggestionsServiceBaseProtocol <_SGSuggestionsServiceMetricsProtocol>
+ (BOOL)isHarvestingSupported;
- (BOOL)isEnabledWithError:(id *)arg1;
- (void)keepDirty:(BOOL)arg1;
- (BOOL)queuesRequestsIfBusy;
- (void)setQueuesRequestsIfBusy:(BOOL)arg1;
- (void)setSyncTimeout:(double)arg1;
- (double)syncTimeout;
@end
