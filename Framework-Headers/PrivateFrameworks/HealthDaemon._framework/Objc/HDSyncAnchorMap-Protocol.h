//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@protocol HDSyncAnchorMap <NSObject>
- (unsigned long long)anchorCount;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (void)enumerateAnchorsAndSyncEntitiesWithBlock:(void (^)(Class, long long, BOOL *))arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
@end

