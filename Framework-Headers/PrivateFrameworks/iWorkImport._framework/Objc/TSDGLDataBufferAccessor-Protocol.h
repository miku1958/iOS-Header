//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSDGLDataBufferAttribute;

@protocol TSDGLDataBufferAccessor <NSObject>
- (CDStruct_6e3f967a)GLPoint2DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (CDStruct_03942939)GLPoint3DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (CDStruct_818bb265)GLPoint4DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (float)GLfloatForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint3D:(CDStruct_03942939)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint4D:(CDStruct_818bb265)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
@end

