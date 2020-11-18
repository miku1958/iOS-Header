//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMRemoteLoginMessage.h>

#import <HomeKit/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface HMSyncAnisetteDataResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>
{
    BOOL _didSucceed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSucceed; // @synthesize didSucceed=_didSucceed;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDictionary *messagePayload;
@property (readonly) Class superclass;

+ (id)messageName;
+ (id)objWithDict:(id)arg1;
+ (id)objWithMessage:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)xpcMessageName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageName;
- (id)xpcMessageName;

@end

