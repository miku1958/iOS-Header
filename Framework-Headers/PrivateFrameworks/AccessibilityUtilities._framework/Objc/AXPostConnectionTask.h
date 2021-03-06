//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXAccessQueueTimer;

@interface AXPostConnectionTask : NSObject
{
    BOOL _didTimeout;
    CDUnknownBlockType _postConnectionBlock;
    AXAccessQueueTimer *_timeoutTimer;
}

@property (nonatomic) BOOL didTimeout; // @synthesize didTimeout=_didTimeout;
@property (copy, nonatomic) CDUnknownBlockType postConnectionBlock; // @synthesize postConnectionBlock=_postConnectionBlock;
@property (strong, nonatomic) AXAccessQueueTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;

- (void).cxx_destruct;
- (void)_performTask;
- (id)initWithConnectBlock:(CDUnknownBlockType)arg1 timeout:(double)arg2 accessQueue:(id)arg3;
- (void)performTask;

@end

