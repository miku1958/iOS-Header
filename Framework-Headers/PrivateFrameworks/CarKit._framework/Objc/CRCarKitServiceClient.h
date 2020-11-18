//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection;
@protocol CRCarKitService;

@interface CRCarKitServiceClient : NSObject
{
    NSXPCConnection *_serviceConnection;
    id<CRCarKitService> _service;
    NSMutableArray *_outstandingSemaphores;
}

@property (strong, nonatomic) NSMutableArray *outstandingSemaphores; // @synthesize outstandingSemaphores=_outstandingSemaphores;
@property (strong, nonatomic) id<CRCarKitService> service; // @synthesize service=_service;
@property (strong, nonatomic) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;

- (void).cxx_destruct;
- (void)_blockOnServiceSemaphore:(id)arg1;
- (void)_releaseAllServiceSemaphores;
- (id)_serviceSemaphore;
- (id)init;
- (void)performServiceCallBlock:(CDUnknownBlockType)arg1;

@end

