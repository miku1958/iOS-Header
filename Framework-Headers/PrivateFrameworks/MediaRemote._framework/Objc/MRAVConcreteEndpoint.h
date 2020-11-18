//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVEndpoint.h>

@class MRAVOutputDevice, MRTransportExternalDevice, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRAVConcreteEndpoint : MRAVEndpoint
{
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
    MRTransportExternalDevice *_externalDevice;
    MRAVOutputDevice *_designatedGroupLeader;
    long long _connectionType;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (strong, nonatomic) MRTransportExternalDevice *externalDevice;
@property (copy, nonatomic) NSArray *outputDevices;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;

- (void).cxx_destruct;
- (BOOL)canModifyGroupMembership;
- (long long)connectionType;
- (void)dealloc;
- (id)designatedGroupLeader;
- (id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2;
- (BOOL)isProxyGroupPlayer;
- (id)uniqueIdentifier;

@end
