//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PBCodable;

@protocol ATXPETEventTracker2Protocol
- (void)logMessage:(PBCodable *)arg1;
- (void)trackDistributionForMessage:(PBCodable *)arg1 value:(double)arg2;
- (void)trackScalarForMessage:(PBCodable *)arg1;
- (void)trackScalarForMessage:(PBCodable *)arg1 count:(int)arg2;
@end

