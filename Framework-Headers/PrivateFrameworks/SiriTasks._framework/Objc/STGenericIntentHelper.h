//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface STGenericIntentHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_handlers;
    NSObject<OS_dispatch_queue> *_siriResponseQueue;
    NSObject<OS_dispatch_semaphore> *_waitForIntentCompleteSemaphore;
}

@property (strong, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *siriResponseQueue; // @synthesize siriResponseQueue=_siriResponseQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *waitForIntentCompleteSemaphore; // @synthesize waitForIntentCompleteSemaphore=_waitForIntentCompleteSemaphore;

+ (id)sharedHelper;
- (void).cxx_destruct;
- (id)_intentSlotNameForIntentMap:(id)arg1;
- (BOOL)doIntent:(id)arg1;
- (void)finishedLaunching:(BOOL)arg1;
- (void)forIntent:(id)arg1 registerHandler:(CDUnknownBlockType)arg2;
- (void)forIntentParam:(id)arg1 predict:(id)arg2;
- (void)handleIntent:(id)arg1 withTask:(id)arg2 andApplication:(id)arg3;
- (void)handleSiriTask:(id)arg1 withApplication:(id)arg2;
- (id)init;

@end

