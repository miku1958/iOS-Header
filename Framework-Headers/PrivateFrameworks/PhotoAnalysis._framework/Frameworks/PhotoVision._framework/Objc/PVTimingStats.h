//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PVTimingStats : NSObject
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_samples;
    NSString *_name;
}

@property (strong) NSString *name; // @synthesize name=_name;

+ (void)measureTime:(CDUnknownBlockType)arg1 label:(id)arg2;
+ (unsigned long long)millisForDuration:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)addSample:(id)arg1 duration:(unsigned long long)arg2;
- (void)captureSampleForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1;
- (void)printSummary;
- (void)printSummaryForKey:(id)arg1;

@end

