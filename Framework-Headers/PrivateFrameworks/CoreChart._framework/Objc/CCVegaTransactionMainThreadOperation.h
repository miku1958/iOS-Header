//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface CCVegaTransactionMainThreadOperation : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)provideBlock:(CDUnknownBlockType)arg1;
- (void)runBlock;
- (void)waitForBlockReady;

@end
