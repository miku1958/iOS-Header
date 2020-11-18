//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKThreadsafeDictionary, NSError, NSString;
@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject
{
    NSString *_name;
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    NSError *_error;
    id result;
    int _sequence;
    BOOL _loggingEnabled;
    id _result;
}

@property (strong) NSError *error; // @synthesize error=_error;
@property (nonatomic, getter=isLoggingEnabled) BOOL loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
@property (strong) id result; // @synthesize result=_result;

+ (id)backgroundConcurrentQueue;
+ (id)defaultConcurrentQueue;
+ (id)dispatchGroup;
+ (id)dispatchGroupWithName:(id)arg1;
+ (id)mainQueue;
+ (void)waitUntilDone:(CDUnknownBlockType)arg1;
- (id)_values;
- (void)_waitWithDispatchTimeout:(unsigned long long)arg1;
- (id)allValues;
- (void)dealloc;
- (id)description;
- (void)enter;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)join:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)leave;
- (void)notifyOnMainQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)notifyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)perform:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)wait;
- (void)waitWithTimeout:(double)arg1;

@end

