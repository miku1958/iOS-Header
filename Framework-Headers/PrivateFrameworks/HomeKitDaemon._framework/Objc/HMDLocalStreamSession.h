//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraStreamSession.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraNetworkConfig, HMDCameraParameterSelection, NSString;
@protocol HMDCameraRemoteStreamSenderProtocol;

@interface HMDLocalStreamSession : HMDCameraStreamSession <HMFLogging>
{
    id<HMDCameraRemoteStreamSenderProtocol> _streamSender;
    HMDCameraParameterSelection *_parameterSelection;
    unsigned long long _streamState;
    HMDCameraNetworkConfig *_localNetworkConfig;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig; // @synthesize localNetworkConfig=_localNetworkConfig;
@property (strong, nonatomic) HMDCameraParameterSelection *parameterSelection; // @synthesize parameterSelection=_parameterSelection;
@property (readonly, nonatomic) id<HMDCameraRemoteStreamSenderProtocol> streamSender; // @synthesize streamSender=_streamSender;
@property (nonatomic) unsigned long long streamState; // @synthesize streamState=_streamState;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (BOOL)containsState:(long long)arg1;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned long long)arg2 streamSender:(id)arg3 remoteCapabilities:(id)arg4 localNetworkConfig:(id)arg5;
- (id)logIdentifier;
- (id)stateAsString;
- (void)updateState:(long long)arg1;

@end
