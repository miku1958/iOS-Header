//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUIntegerKeyDictionaryKeyEnumerator : NSObject
{
    long long **_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (void)dealloc;
- (id)initWithIntegerKeyDictionary:(id)arg1;
- (long long)nextKey;

@end

