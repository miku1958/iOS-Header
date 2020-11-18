//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessage.h>

@class HMFActivity, HMFLogEventSession, HMFMessageDestination, HMFMessageTransport, NSDictionary, NSString, NSUUID;

@interface HMFMutableMessage : HMFMessage
{
}

@property (strong, nonatomic) HMFActivity *activity; // @dynamic activity;
@property (strong, nonatomic) HMFMessageDestination *destination; // @dynamic destination;
@property (copy, nonatomic) NSDictionary *headers; // @dynamic headers;
@property (copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property (strong, nonatomic) HMFLogEventSession *logEventSession; // @dynamic logEventSession;
@property (copy, nonatomic) NSDictionary *messagePayload; // @dynamic messagePayload;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (nonatomic) long long qualityOfService; // @dynamic qualityOfService;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @dynamic responseHandler;
@property (nonatomic) double timeout; // @dynamic timeout;
@property (weak, nonatomic) HMFMessageTransport *transport; // @dynamic transport;
@property (copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setHeaderValue:(id)arg1 forKey:(id)arg2;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;

@end
