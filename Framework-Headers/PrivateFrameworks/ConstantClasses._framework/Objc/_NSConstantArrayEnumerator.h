//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface _NSConstantArrayEnumerator : NSEnumerator
{
    id *objects;
    unsigned long long capacity;
    unsigned long long index;
}

- (id)allObjects;
- (id)initWithArray:(id *)arg1 capacity:(unsigned long long)arg2;
- (id)nextObject;

@end
