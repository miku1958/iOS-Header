//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXThreadTimerTask : NSObject
{
    BOOL cancel;
    BOOL finished;
    BOOL active;
    CDUnknownBlockType _block;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active;
@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (nonatomic, getter=isCancelled) BOOL cancel; // @synthesize cancel;
@property (nonatomic, getter=isFinished) BOOL finished; // @synthesize finished;

- (void).cxx_destruct;
- (void)run;
- (void)runAfterDelay:(float)arg1;

@end

