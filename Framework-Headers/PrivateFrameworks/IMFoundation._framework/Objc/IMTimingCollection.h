//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMTimingCollection : NSObject
{
    NSMutableDictionary *_timings;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)hasKey:(id)arg1;
- (id)init;
- (void)removeTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (double)totalTimeForKey:(id)arg1;

@end
