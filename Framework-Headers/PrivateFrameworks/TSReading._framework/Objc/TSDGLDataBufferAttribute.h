//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TSDGLDataArrayBuffer, TSDGLDataBuffer;

@interface TSDGLDataBufferAttribute : NSObject
{
    BOOL _isNormalized;
    unsigned int _bufferUsage;
    int _dataType;
    int _componentCount;
    int _locationInShader;
    NSString *_name;
    unsigned long long _bufferOffset;
    TSDGLDataArrayBuffer *_dataArrayBuffer;
    TSDGLDataBuffer *_dataBuffer;
}

@property (nonatomic) unsigned long long bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property (readonly, nonatomic) unsigned int bufferUsage; // @synthesize bufferUsage=_bufferUsage;
@property (readonly, nonatomic) int componentCount; // @synthesize componentCount=_componentCount;
@property (nonatomic) TSDGLDataArrayBuffer *dataArrayBuffer; // @synthesize dataArrayBuffer=_dataArrayBuffer;
@property (nonatomic) TSDGLDataBuffer *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property (readonly, nonatomic) int dataType; // @synthesize dataType=_dataType;
@property (readonly, nonatomic) BOOL isNormalized; // @synthesize isNormalized=_isNormalized;
@property (nonatomic) int locationInShader; // @synthesize locationInShader=_locationInShader;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)attributeWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(int)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long long)arg5;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(int)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long long)arg5;
- (void)setBufferUsage:(unsigned int)arg1;
- (void)setComponentCount:(int)arg1;

@end
