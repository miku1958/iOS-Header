//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface HAPBTLEReachabilityScanTuple : NSObject
{
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_identifier;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)reachabilityScanTupleWithCompletion:(CDUnknownBlockType)arg1 workQueue:(id)arg2 identifier:(id)arg3;
- (void).cxx_destruct;

@end

