//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/NSObject-Protocol.h>

@class NSSet, RBProcess;
@protocol RBEntitlementPossessing;

@protocol RBEntitlementManaging <NSObject>
- (NSSet *)allEntitlements;
- (id<RBEntitlementPossessing>)entitlementsForProcess:(RBProcess *)arg1;
- (void)purgeEntitlementsForProcess:(RBProcess *)arg1;
@end
