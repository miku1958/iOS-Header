//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseOperationMiddleware-Protocol.h>

@class FCNetworkBehaviorMonitor, NSString;

@interface FCCKDatabaseLoggingMiddleware : NSObject <FCCKDatabaseOperationMiddleware>
{
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addLoggersToOperation:(id)arg1 database:(id)arg2;
- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (id)init;
- (id)initWithNetworkBehaviorMonitor:(id)arg1;

@end

