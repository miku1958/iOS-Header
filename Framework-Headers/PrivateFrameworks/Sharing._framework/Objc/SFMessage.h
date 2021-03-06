//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSSet, NSUUID, SFDevice, SFSession;

@interface SFMessage : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    SFDevice *_peerDevice;
    BOOL _expectsResponse;
    NSData *_bodyData;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_headerFields;
    SFSession *_session;
    NSSet *_deviceIDs;
}

@property (copy, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (copy, nonatomic) NSSet *deviceIDs; // @synthesize deviceIDs=_deviceIDs;
@property (nonatomic) BOOL expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property (copy, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property (copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property (strong, nonatomic) SFSession *session; // @synthesize session=_session;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;

@end

