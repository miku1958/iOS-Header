//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator
{
    NSDictionary *_keyplaneCache;
    NSEnumerator *_nameEnum;
}

- (void)dealloc;
- (id)initWithKeyplaneCache:(id)arg1;
- (id)nextObject;

@end

