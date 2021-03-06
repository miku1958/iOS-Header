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
- (void)setDisplayState:(BOOL)arg1 reply:(void (^)(NSError *))arg2;
- (void)setPearlErrorState:(BOOL)arg1;
- (void)setPearlErrorState:(BOOL)arg1 reply:(void (^)(NSError *))arg2;
- (void)setSampleState:(BOOL)arg1;
- (void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2;
- (void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 reply:(void (^)(NSError *))arg3;
- (void)setSampleState:(BOOL)arg1 reply:(void (^)(NSError *))arg2;
- (void)setSmartCoverCallback:(void (^)(BOOL))arg1;
- (void)setSmartCoverClosed:(BOOL)arg1;
- (void)setSmartCoverClosed:(BOOL)arg1 reply:(void (^)(NSError *))arg2;
@end

