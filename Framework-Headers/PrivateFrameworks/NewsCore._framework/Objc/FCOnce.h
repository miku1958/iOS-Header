//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock;

@interface FCOnce : NSObject
{
    BOOL _finished;
    NFUnfairLock *_lock;
}

@property (nonatomic) BOOL finished; // @synthesize finished=_finished;
@property (strong, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;

- (void).cxx_destruct;
- (void)executeOnce:(CDUnknownBlockType)arg1;
- (BOOL)hasBeenTriggered;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (BOOL)trigger;

@end
