//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLVertexAttribute.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLVertexAttributeInternal : MTLVertexAttribute
{
    NSString *_name;
    unsigned long long _attributeIndex;
    unsigned long long _attributeType;
    BOOL _active;
}

- (unsigned long long)attributeIndex;
- (unsigned long long)attributeType;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 attributeIndex:(unsigned long long)arg2 attributeType:(unsigned long long)arg3 isActive:(BOOL)arg4;
- (BOOL)isActive;
- (id)name;
- (void)setAttributeType:(unsigned long long)arg1;

@end
