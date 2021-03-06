//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Security/NSSecureCoding-Protocol.h>

@class NSString;

@interface OTJoiningConfiguration : NSObject <NSSecureCoding>
{
    BOOL _isInitiator;
    NSString *_protocolType;
    NSString *_uniqueDeviceID;
    NSString *_uniqueClientID;
    NSString *_containerName;
    NSString *_contextID;
    NSString *_pairingUUID;
    unsigned long long _epoch;
    long long _timeout;
}

@property (strong, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property (strong, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property (nonatomic) unsigned long long epoch; // @synthesize epoch=_epoch;
@property (nonatomic) BOOL isInitiator; // @synthesize isInitiator=_isInitiator;
@property (strong, nonatomic) NSString *pairingUUID; // @synthesize pairingUUID=_pairingUUID;
@property (strong, nonatomic) NSString *protocolType; // @synthesize protocolType=_protocolType;
@property long long timeout; // @synthesize timeout=_timeout;
@property (strong, nonatomic) NSString *uniqueClientID; // @synthesize uniqueClientID=_uniqueClientID;
@property (strong, nonatomic) NSString *uniqueDeviceID; // @synthesize uniqueDeviceID=_uniqueDeviceID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocolType:(id)arg1 uniqueDeviceID:(id)arg2 uniqueClientID:(id)arg3 pairingUUID:(id)arg4 containerName:(id)arg5 contextID:(id)arg6 epoch:(unsigned long long)arg7 isInitiator:(BOOL)arg8;

@end

