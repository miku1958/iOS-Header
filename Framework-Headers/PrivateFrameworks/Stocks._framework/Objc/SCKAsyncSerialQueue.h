//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject
{
    NSOperationQueue *_serialOperationQueue;
}

@property (strong, nonatomic) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property (getter=isSuspended) BOOL suspended;

- (void).cxx_destruct;
- (void)enqueueBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)waitUntilEmpty;

@end

