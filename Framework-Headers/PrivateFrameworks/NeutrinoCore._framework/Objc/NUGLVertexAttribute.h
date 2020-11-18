//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NUGLVertexAttribute : NSObject
{
    BOOL _normalized;
    unsigned int _type;
    int _size;
    NSString *_name;
}

@property (readonly) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL normalized; // @synthesize normalized=_normalized;
@property (readonly) int size; // @synthesize size=_size;
@property (readonly) long long sizeInBytes;
@property (readonly) unsigned int type; // @synthesize type=_type;

+ (id)vec2Attribute:(id)arg1;
+ (id)vec4Attribute:(id)arg1;
- (void).cxx_destruct;
- (long long)_typeSize;
- (id)init;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 size:(int)arg3;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 size:(int)arg3 normalized:(BOOL)arg4;

@end

