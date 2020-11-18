//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;
@protocol OS_dispatch_queue;

@interface HMDNotificationRelayState : NSObject
{
    NSString *_destination;
    NSObject<OS_dispatch_queue> *_responseQueue;
    CDUnknownBlockType _responseHandler;
    NSDictionary *_response;
    NSError *_responseError;
}

@property (strong, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property (strong, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property (strong, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;

- (void).cxx_destruct;
- (id)initWithDestination:(id)arg1 responseQueue:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end

