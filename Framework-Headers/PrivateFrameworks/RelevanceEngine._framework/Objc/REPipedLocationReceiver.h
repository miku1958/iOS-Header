//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

#import <RelevanceEngine/REPipedLocationDonor-Protocol.h>

@class CLLocation, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface REPipedLocationReceiver : RESingleton <REPipedLocationDonor>
{
    NSXPCConnection *_connection;
    CLLocation *_location;
    long long _connectionWindowRetainCount;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_init;
- (void)_queue_clearConnection;
- (void)_queue_setLocation:(id)arg1;
- (void)_queue_setupConnection;
- (void)dealloc;

@end
