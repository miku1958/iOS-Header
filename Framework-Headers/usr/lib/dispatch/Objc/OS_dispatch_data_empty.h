//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <dispatch/OS_dispatch_data.h>

__attribute__((visibility("hidden")))
@interface OS_dispatch_data_empty : OS_dispatch_data
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)_activate;
- (void *)_getContext;
- (void)_resume;
- (void)_setContext:(void *)arg1;
- (void)_setFinalizer:(CDUnknownFunctionPointerType)arg1;
- (void)_setTargetQueue:(id)arg1;
- (void)_suspend;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

