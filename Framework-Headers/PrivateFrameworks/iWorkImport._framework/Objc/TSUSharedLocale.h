//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSUSharedLocale : NSObject
{
    struct __CFLocale *mCurrentLocale;
    NSArray *mObserverObjects;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLocale;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __CFLocale *)currentLocale;
- (void)datePreferencesChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

