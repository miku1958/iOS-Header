//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/_SGDSuggestManagerMetricsProtocol-Protocol.h>

@protocol _SGDSuggestManagerBaseProtocol <_SGDSuggestManagerMetricsProtocol>
- (void)isEnabledWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)keepDirty:(BOOL)arg1;
- (void)noopWithCompletion:(void (^)(NSError *))arg1;
@end

