//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/DKDGLDataBufferAccessor-Protocol.h>

@class DKDGLShader, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface DKDGLDataBuffer : NSObject <DKDGLDataBufferAccessor>
{
    unsigned long long mCurrentBufferIndex;
    NSMutableArray *mArrayBuffers;
    NSMutableDictionary *mAttributeToArrayBuffersDictionary;
    unsigned long long mElementArrayCount;
    unsigned short *mGLElementData;
    BOOL mGLElementDataBufferWasSetup;
    unsigned int mGLElementDataBuffer;
    struct CGSize mGLElementMeshSize;
    unsigned long long mGLElementQuadParticleCount;
    unsigned int mGLVertexArrayObjects[2];
    BOOL _isUpdatingRawDataBuffer;
    BOOL _didTeardown;
    BOOL _isEnabled;
    DKDGLShader *_enabledShader;
    CDStruct_c6ef71e4 *_updateDataArray;
    BOOL _isDoubleBuffered;
    unsigned int _drawMode;
    unsigned long long _vertexCount;
    NSArray *_vertexAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int drawMode; // @synthesize drawMode=_drawMode;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isDoubleBuffered; // @synthesize isDoubleBuffered=_isDoubleBuffered;
@property (readonly) Class superclass;
@property (readonly) NSArray *vertexAttributes; // @synthesize vertexAttributes=_vertexAttributes;
@property (readonly) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;

- (CDStruct_6e3f967a)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (CDStruct_03942939)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (CDStruct_f2e236b6)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned short)GLushortForIndexElement:(unsigned long long)arg1;
- (void)dealloc;
- (void)disableDataBufferWithShader:(id)arg1;
- (void)disableElementArrayBuffer;
- (void)drawWithShader:(id)arg1;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(BOOL)arg2;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange)arg2 deactivateShaderWhenDone:(BOOL)arg3;
- (void)enableDataBufferWithShader:(id)arg1;
- (void)enableElementArrayBuffer;
- (char *)getDataPtr;
- (id)initWithVertexAttributes:(id)arg1 meshSize:(struct CGSize)arg2;
- (id)initWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 doubleBuffered:(BOOL)arg4;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(BOOL)arg4;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 textureFlipped:(BOOL)arg3;
- (BOOL)p_setAttributeUpdateData:(CDStruct_c6ef71e4 *)arg1 fromAttribute:(id)arg2;
- (void)p_setupGLElementArrayBufferIfNecessary;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5;
- (void)setGLPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint3D:(CDStruct_03942939)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint4D:(CDStruct_f2e236b6)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;
- (void)teardown;
- (void)updateDataBufferAttributes:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)vertexAttributeNamed:(id)arg1;

@end

