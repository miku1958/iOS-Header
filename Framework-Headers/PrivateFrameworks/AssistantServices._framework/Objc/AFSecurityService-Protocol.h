//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol AFSecurityService <NSObject>
- (oneway void)processData:(NSData *)arg1 usingProcedure:(long long)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (oneway void)processDataMap:(NSDictionary *)arg1 usingProcedure:(long long)arg2 completion:(void (^)(NSDictionary *, NSDictionary *))arg3;
@end

