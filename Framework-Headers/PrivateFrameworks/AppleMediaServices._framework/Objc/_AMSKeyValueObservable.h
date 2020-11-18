//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSObservable.h>

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface _AMSKeyValueObservable : AMSObservable
{
    NSObject *_context;
    NSString *_keyPath;
    NSObject *_object;
}

@property (strong, nonatomic) NSObject *context; // @synthesize context=_context;
@property (copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property (weak, nonatomic) NSObject *object; // @synthesize object=_object;

- (void).cxx_destruct;
- (BOOL)cancel;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)sendCompletion;

@end
