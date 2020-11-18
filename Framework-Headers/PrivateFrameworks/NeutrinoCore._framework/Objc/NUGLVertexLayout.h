//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NUGLVertexLayout : NSObject
{
    NSArray *_attributes;
    long long _size;
}

@property (readonly) NSArray *attributeNames;
@property (readonly) NSArray *attributes; // @synthesize attributes=_attributes;
@property (readonly) long long count;
@property (readonly) long long size; // @synthesize size=_size;

- (void).cxx_destruct;
- (id)attributeWithName:(id)arg1;
- (unsigned long long)indexOfAttribute:(id)arg1;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (int)offsetAtIndex:(unsigned long long)arg1;
- (long long)offsetForAttribute:(id)arg1;

@end
