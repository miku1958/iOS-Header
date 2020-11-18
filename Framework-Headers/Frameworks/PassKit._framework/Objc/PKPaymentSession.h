//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PKPaymentSession : NSObject
{
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
}

@property (readonly, nonatomic) unsigned long long lifecycleState;

+ (id)startContactlessInterfaceSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startInAppSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startReaderSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)invalidateSession;
- (void)invalidateSessionWithCompletion:(CDUnknownBlockType)arg1;

@end

