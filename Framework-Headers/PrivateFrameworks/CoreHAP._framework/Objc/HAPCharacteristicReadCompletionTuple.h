//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface HAPCharacteristicReadCompletionTuple : HMFObject
{
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;

+ (id)readCompletionTupleWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void).cxx_destruct;

@end

