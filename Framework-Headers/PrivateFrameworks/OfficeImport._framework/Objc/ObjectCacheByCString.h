//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ObjectCacheByCString : NSObject
{
    struct __CFDictionary *_dictionary;
}

- (void)dealloc;
- (id)getObjectForCStringKey:(char *)arg1;
- (id)init;
- (void)setObject:(id)arg1 forCStringKey:(char *)arg2;

@end

