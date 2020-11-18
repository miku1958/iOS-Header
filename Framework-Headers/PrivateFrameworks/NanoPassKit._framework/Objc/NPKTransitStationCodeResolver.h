//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NPKTransitStationCodeResolver : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;

- (void).cxx_destruct;
- (id)initWithCallbackQueue:(id)arg1;
- (void)resolveStationCodesForAppletState:(id)arg1 paymentApplication:(id)arg2 passUniqueIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

