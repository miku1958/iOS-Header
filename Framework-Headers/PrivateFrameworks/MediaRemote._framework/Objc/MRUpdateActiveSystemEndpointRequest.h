//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRUpdateActiveSystemEndpointRequestProtobuf;

@interface MRUpdateActiveSystemEndpointRequest : NSObject <NSCopying>
{
    BOOL _pairedDeviceSync;
    NSString *_outputDeviceUID;
    NSString *_reason;
    long long _changeType;
    NSString *_clientBundleIdentifier;
}

@property (nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property (copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property (copy, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
@property (nonatomic, getter=isPairedDeviceSync) BOOL pairedDeviceSync; // @synthesize pairedDeviceSync=_pairedDeviceSync;
@property (readonly, nonatomic) _MRUpdateActiveSystemEndpointRequestProtobuf *protobuf;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithOutputDeviceUID:(id)arg1 reason:(id)arg2;
- (id)initWithProtobuf:(id)arg1;
- (void)perform:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

