//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDRemoteMessageDestination, HMFMessage, IDSService, NSArray, NSString;

@interface HMDIDSSendMessageOperation : HMFOperation <HMFLogging, HMFObject, IDSServiceDelegate>
{
    double _timeout;
    HMDRemoteMessageDestination *_destination;
    NSString *_messageIdentifier;
    IDSService *_service;
    HMFMessage *_message;
}

@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessage *message; // @synthesize message=_message;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) IDSService *service; // @synthesize service=_service;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;
+ (double)timeout;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1;
- (id)initWithMessage:(id)arg1 service:(id)arg2;
- (id)logIdentifier;
- (void)main;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6;

@end
