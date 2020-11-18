//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMRemoteLoginMessage.h>

#import <HomeKit/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface HMEraseAnisetteDataRequest : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDictionary *messagePayload;
@property (readonly) Class superclass;

+ (id)messageName;
+ (id)objWithDict:(id)arg1;
+ (id)objWithMessage:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)xpcMessageName;
- (id)messageName;
- (id)xpcMessageName;

@end

