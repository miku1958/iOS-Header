//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUKeyValueObserver : NSObject
{
    id _target;
    NSString *_keyPath;
    CDUnknownBlockType _changeHandler;
}

+ (id)observerWithTarget:(id)arg1 keyPath:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
+ (id)observerWithTarget:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 changeHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 changeHandler:(CDUnknownBlockType)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
