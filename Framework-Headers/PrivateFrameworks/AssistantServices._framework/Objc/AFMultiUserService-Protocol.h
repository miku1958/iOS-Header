//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSString;

@protocol AFMultiUserService <NSObject>
- (oneway void)getConformingSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (oneway void)getConformingSharedUserIds:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)getHomeUserIdForSharedUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end
