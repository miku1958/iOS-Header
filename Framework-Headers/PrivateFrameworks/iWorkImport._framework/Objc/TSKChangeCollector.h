//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSKChangeCollector : NSObject
{
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)threadCollector;
- (id)autorelease;
- (void)beginCollectingChanges;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)endCollectingChanges;
- (void)endCollectingChangesAndDiscardChanges;
- (id)peekCollectedChanges;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

