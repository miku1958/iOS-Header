//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSConstantDictionary;

__attribute__((visibility("hidden")))
@interface __NSConstantDictionaryEnumerator : NSEnumerator
{
    NSConstantDictionary *_underlyingDictionary;
    unsigned long long _currentIndex;
    BOOL _isForKeys;
}

- (id)initWithConstantDictionary:(id)arg1 enumerateKeys:(BOOL)arg2;
- (id)nextObject;

@end
