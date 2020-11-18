//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _GEOETARemoteProvider : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    CDUnknownBlockType _willSendRequestHandler;
    CDUnknownBlockType _finishedHandler;
    CDUnknownBlockType _networkActivityHandler;
    CDUnknownBlockType _errorHandler;
}

@property (strong, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (copy, nonatomic) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property (copy, nonatomic) CDUnknownBlockType networkActivityHandler; // @synthesize networkActivityHandler=_networkActivityHandler;
@property (copy, nonatomic) CDUnknownBlockType willSendRequestHandler; // @synthesize willSendRequestHandler=_willSendRequestHandler;

+ (id)provderWithWillSendRequest:(CDUnknownBlockType)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;

@end

