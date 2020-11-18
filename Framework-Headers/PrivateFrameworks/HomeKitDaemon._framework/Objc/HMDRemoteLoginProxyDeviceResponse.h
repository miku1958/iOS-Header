//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMRemoteLoginMessage.h>

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class AKDevice, NSDictionary, NSString;

@interface HMDRemoteLoginProxyDeviceResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>
{
    AKDevice *_proxyDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, nonatomic) NSDictionary *messagePayload;
@property (strong, nonatomic) AKDevice *proxyDevice; // @synthesize proxyDevice=_proxyDevice;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *xpcMessageName;

+ (id)messageName;
+ (id)objWithDict:(id)arg1;
+ (id)objWithMessage:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)xpcMessageName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
