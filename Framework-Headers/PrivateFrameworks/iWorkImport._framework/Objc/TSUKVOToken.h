//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUKVOToken : NSObject
{
    NSObject *_observer;
    NSObject *_target;
    NSString *_keyPath;
    void *_context;
}

@property (readonly, nonatomic) void *context; // @synthesize context=_context;
@property (readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property (readonly, nonatomic) NSObject *observer; // @synthesize observer=_observer;
@property (readonly, nonatomic) NSObject *target; // @synthesize target=_target;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObserver:(id)arg1 target:(id)arg2 keyPath:(id)arg3 context:(void *)arg4;
- (BOOL)isEqual:(id)arg1;

@end
