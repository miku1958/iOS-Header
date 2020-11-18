//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/NSCopying-Protocol.h>

@class HMFMessageDestination, HMFMessageTransport, NSDictionary, NSString, NSUUID;

@interface HMFMessageInternal : NSObject <NSCopying>
{
    BOOL _remoteSource;
    BOOL _internalMessage;
    BOOL _entitledMessage;
    BOOL _locationAuthorizedMessage;
    NSUUID *_identifier;
    NSString *_name;
    HMFMessageDestination *_destination;
    NSDictionary *_messagePayload;
    CDUnknownBlockType _responseHandler;
    HMFMessageTransport *_transport;
}

@property (strong, nonatomic) HMFMessageDestination *destination; // @synthesize destination=_destination;
@property (nonatomic, getter=isEntitledMessage) BOOL entitledMessage; // @synthesize entitledMessage=_entitledMessage;
@property (copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic, getter=isInternalMessage) BOOL internalMessage; // @synthesize internalMessage=_internalMessage;
@property (nonatomic, getter=isLocationAuthorizedMessage) BOOL locationAuthorizedMessage; // @synthesize locationAuthorizedMessage=_locationAuthorizedMessage;
@property (copy, nonatomic) NSDictionary *messagePayload; // @synthesize messagePayload=_messagePayload;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic, getter=isRemoteSource) BOOL remoteSource; // @synthesize remoteSource=_remoteSource;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (weak, nonatomic) HMFMessageTransport *transport; // @synthesize transport=_transport;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
