//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CUNANSubscriber : NSObject
{
    CDUnknownBlockType _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_serviceType;
    CDUnknownBlockType _endpointFoundHandler;
    CDUnknownBlockType _endpointLostHandler;
    CDUnknownBlockType _endpointChangedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType endpointChangedHandler; // @synthesize endpointChangedHandler=_endpointChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType endpointFoundHandler; // @synthesize endpointFoundHandler=_endpointFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType endpointLostHandler; // @synthesize endpointLostHandler=_endpointLostHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidated;
- (void)_lostAllEndpoints;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)init;
- (void)invalidate;

@end
