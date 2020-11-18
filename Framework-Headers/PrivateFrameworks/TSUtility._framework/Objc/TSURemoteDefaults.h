//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TSURemoteDefaults : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_updateTimer;
}

+ (id)sharedDefaults;
- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)URLRequest;
- (void)checkForUpdate;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)init;
- (id)initInternal;
- (id)objectForKey:(id)arg1;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)registerDefaults;
- (id)stringForKey:(id)arg1;
- (double)timeIntervalUntilNextUpdate;

@end

