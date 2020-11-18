//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDRequestDelegate-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSUUID;
@protocol ASDRequestObserver, ASDRequestProxy;

@interface ASDRequest : NSObject <ASDRequestDelegate, NSSecureCoding>
{
    id<ASDRequestObserver> _observer;
    NSUUID *_requestID;
    id<ASDRequestProxy> _proxy;
}

@property (weak) id<ASDRequestObserver> observer; // @synthesize observer=_observer;
@property (strong) id<ASDRequestProxy> proxy; // @synthesize proxy=_proxy;
@property (readonly, nonatomic) NSUUID *requestID; // @synthesize requestID=_requestID;

+ (id)_sharedBroker;
+ (void)cancelAllRequestsWithErrorHandler:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_callErrorHandler:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)_callErrorHandler:(CDUnknownBlockType)arg1 withError:(id)arg2 orDefaultCode:(unsigned long long)arg3;
- (void)_cancelWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_notifyObserverOfCompletionWithError:(id)arg1;
- (void)_startWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_submitRequestWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)receiveResponse:(id)arg1;

@end
