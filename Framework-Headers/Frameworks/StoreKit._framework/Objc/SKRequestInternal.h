//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKPaymentQueueClient, SKXPCConnection;
@protocol SKRequestDelegate;

@interface SKRequestInternal : NSObject
{
    long long _backgroundTaskIdentifier;
    SKPaymentQueueClient *_client;
    SKXPCConnection *_connection;
    id<SKRequestDelegate> _delegate;
    long long _state;
}

- (void)dealloc;

@end

