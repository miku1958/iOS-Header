//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVEndpoint.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class MRAVDistantOutputDevice, MRDistantExternalDevice, NSArray, NSObject, NSString, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    MRDistantExternalDevice *_distantExternalDevice;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
    NSString *_instanceIdentifier;
    BOOL _isLocalEndpoint;
    NSXPCListenerEndpoint *_externalDeviceListenerEndpoint;
    NSArray *_distantOutputDevices;
    MRAVDistantOutputDevice *_distantGroupLeader;
}

@property (strong, nonatomic) MRAVDistantOutputDevice *distantGroupLeader; // @synthesize distantGroupLeader=_distantGroupLeader;
@property (copy, nonatomic) NSArray *distantOutputDevices; // @synthesize distantOutputDevices=_distantOutputDevices;
@property (strong, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint; // @synthesize externalDeviceListenerEndpoint=_externalDeviceListenerEndpoint;
@property (copy, nonatomic) NSString *localizedName;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)designatedGroupLeader;
- (void)encodeWithCoder:(id)arg1;
- (id)externalDevice;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (id)instanceIdentifier;
- (BOOL)isLocalEndpoint;
- (id)outputDevices;
- (id)uniqueIdentifier;

@end

