//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCompanionLinkClient-Protocol.h>

@class NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface HMDCompanionLinkClient : NSObject <HMDCompanionLinkClient>
{
    RPCompanionLinkClient *_client;
}

@property (strong, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)start;
- (void)stop;

@end

