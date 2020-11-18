//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/PBRequesterDelegate-Protocol.h>

@class GEORequester, NSData, NSNumber, NSString, PBRequest;

__attribute__((visibility("hidden")))
@interface _GEOServiceRequesterOp : NSObject <PBRequesterDelegate>
{
    PBRequest *_request;
    NSString *_debugRequestName;
    unsigned long long _urlType;
    CDUnknownBlockType _completionHandler;
    BOOL _cancelled;
    GEORequester *_requester;
    NSData *_auditToken;
    NSNumber *_serviceTypeNumber;
    double _timeout;
    long long _experimentType;
    int _experimentDispatcherRequestType;
    BOOL _shouldThrottleRequests;
    NSString *_throttleKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_cleanup;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 auditToken:(id)arg2 urlType:(unsigned long long)arg3 debugRequestName:(id)arg4 serviceType:(id)arg5 experimentType:(long long)arg6 experimentDispatcherRequestType:(int)arg7 timeout:(double)arg8 shouldThrottleRequests:(BOOL)arg9 throttleKey:(id)arg10;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
