//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSActionListener;
@protocol OS_dispatch_queue;

@interface BSActionListenerController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _transactionCount;
    BSActionListener *_listener;
    unsigned int _listenerCount;
    unsigned int _listenerTearDownToken;
}

- (void)dealloc;
- (id)init;

@end
