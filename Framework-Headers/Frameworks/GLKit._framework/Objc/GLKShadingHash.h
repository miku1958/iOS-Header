//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GLKShadingHash : NSObject
{
    NSObject<OS_dispatch_queue> *_vshQueue;
    NSObject<OS_dispatch_queue> *_fshQueue;
    NSMutableDictionary *_compiledVshs;
    NSMutableDictionary *_compiledFshs;
}

- (id)compiledFshForKey:(id)arg1;
- (id)compiledVshForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)purgeAllShaders;
- (void)setCompiledFsh:(id)arg1 forKey:(id)arg2;
- (void)setCompiledVsh:(id)arg1 forKey:(id)arg2;

@end

