//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface HMDCloudAccount : HMFObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSOperationQueue *_queue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)addAccountOperation:(CDUnknownBlockType)arg1;
- (id)initWithClientQueue:(id)arg1;

@end

