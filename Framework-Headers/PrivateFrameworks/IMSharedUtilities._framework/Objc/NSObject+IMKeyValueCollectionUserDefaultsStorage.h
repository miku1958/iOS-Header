//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (IMKeyValueCollectionUserDefaultsStorage)
+ (id)_createSingleton__im;
+ (BOOL)isSingleton;
+ (BOOL)isSingletonOverridden;
+ (id)overriddenSingleton;
+ (void)overrideSingletonWithObject:(id)arg1;
+ (void)removeSingletonOverride;
+ (void)replaceSingletonWithObject:(id)arg1;
+ (BOOL)replaceSingletonWithSubclass:(id)arg1;
+ (id)singletonOverride;
- (void)__im_performAsynchronousTest:(CDUnknownBlockType)arg1 name:(id)arg2 timeout:(double)arg3 finalizer:(CDUnknownBlockType)arg4;
- (BOOL)__isSingletonProxy__im;
- (BOOL)isArchivable_im;
@end
