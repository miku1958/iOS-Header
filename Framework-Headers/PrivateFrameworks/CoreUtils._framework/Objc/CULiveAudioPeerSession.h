//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUActivatable-Protocol.h>

@class RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CULiveAudioPeerSession : NSObject <CUActivatable>
{
    RPCompanionLinkClient *_clinkClient;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    RPCompanionLinkDevice *_destinationDevice;
}

@property (strong, nonatomic) RPCompanionLinkDevice *destinationDevice; // @synthesize destinationDevice=_destinationDevice;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;

- (void).cxx_destruct;
- (void)_activateCompleted:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)sendAudioDataEvent:(id)arg1;

@end
