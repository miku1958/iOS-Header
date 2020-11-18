//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/CLKUIQuad2D.h>

@class CLKUIGLProgram;

@interface CLKUIGLQuad2D : CLKUIQuad2D
{
    unsigned int _isPrepared:1;
    unsigned int _vertexArray;
    unsigned int _vertexBuffer;
    unsigned int _primaryTexture;
    unsigned int _secondaryTexture;
    CLKUIGLProgram *_program;
}

- (void).cxx_destruct;
- (void)_createVertexArray;
- (void)_deleteVertexArray;
- (void)encodeGLforSize:(struct CLKUIQuadSize)arg1;
- (void)prepare;
- (void)purge;

@end

