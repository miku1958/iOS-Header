//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (GKAdditions)
+ (id)_gkDefaultKeymap;
- (id)_gkAddObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_gkDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkInvokeSelector:(SEL)arg1;
- (id)_gkInvokeSelector:(SEL)arg1 withNullableObject:(id)arg2;
- (id)_gkInvokeSelector:(SEL)arg1 withObject:(id)arg2;
- (void)_gkPerformSelector:(SEL)arg1;
- (void)_gkPerformSelector:(SEL)arg1 withNullableObject:(id)arg2;
- (void)_gkPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)_gkPopulateWithObject:(id)arg1 keymap:(id)arg2;
- (id)_gkRecursiveDescription;
- (void)_gkRemoveObserverWithBlockToken:(id)arg1;
- (id)_gkViewDebuggingChildKeys;
- (id)_gkViewDebuggingChildren;
@end
