//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol AWUnitTestSampler
- (void)getStatsWithBlock:(void (^)(struct))arg1;
- (void)resetStats;
- (void)setDisplayCallback:(void (^)(BOOL))arg1;
- (void)setDisplayState:(BOOL)arg1;
- (void)setSampleState:(BOOL)arg1;
- (void)setSmartCoverCallback:(void (^)(BOOL))arg1;
- (void)setSmartCoverClosed:(BOOL)arg1;
@end
