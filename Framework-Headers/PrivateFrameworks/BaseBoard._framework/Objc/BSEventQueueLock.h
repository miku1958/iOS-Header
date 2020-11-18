//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSEventQueue, NSString;

@interface BSEventQueueLock : NSObject
{
    BOOL _relinquished;
    NSString *_reason;
    BSEventQueue *_eventQueue;
}

@property (strong, nonatomic) BSEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithEventQueue:(id)arg1 reason:(id)arg2;
- (void)relinquish;

@end

