//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface NAFlatMapEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;
    CDUnknownBlockType _map;
}

@property (readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
@property (readonly, copy, nonatomic) CDUnknownBlockType map; // @synthesize map=_map;

- (void).cxx_destruct;
- (id)allObjects;
- (id)initWithEnumerator:(id)arg1 map:(CDUnknownBlockType)arg2;
- (id)nextObject;

@end

