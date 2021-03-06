//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/NSObject-Protocol.h>

@class MTIDScheme, NSArray, NSDictionary;

@protocol MTXPCServiceInterface <NSObject>
- (oneway void)doClearLocalData;
- (oneway void)doMaintainSchemes:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (void)doResetSchemes:(NSArray *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)secretForScheme:(MTIDScheme *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(MTIDSecret *, NSError *))arg3;
@end

