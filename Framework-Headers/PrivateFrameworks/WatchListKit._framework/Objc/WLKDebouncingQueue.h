//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface WLKDebouncingQueue : NSObject
{
    unsigned int _delay;
    NSOperationQueue *_queue;
}

@property unsigned int delay; // @synthesize delay=_delay;
@property (strong, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
