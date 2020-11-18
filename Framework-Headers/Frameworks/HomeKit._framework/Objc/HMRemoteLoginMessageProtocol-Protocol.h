//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMFMessage, NSDictionary, NSString;

@protocol HMRemoteLoginMessageProtocol <NSObject, NSSecureCoding>

@property (readonly, nonatomic) NSDictionary *messagePayload;

+ (NSString *)messageName;
+ (id)objWithDict:(NSDictionary *)arg1;
+ (id)objWithMessage:(HMFMessage *)arg1;
+ (NSString *)xpcMessageName;
- (NSString *)messageName;
- (NSString *)xpcMessageName;
@end

