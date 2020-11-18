//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol MTLBuffer, MTLDevice;

@interface MPSVector : NSObject
{
    struct MPSDevice *_device;
    unsigned long long _length;
    unsigned long long _vectors;
    unsigned long long _vectorBytes;
    unsigned int _dataType;
    struct MPSAutoBuffer _buffer;
}

@property (readonly, nonatomic) id<MTLBuffer> data;
@property (readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property (readonly, strong, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property (readonly, nonatomic) unsigned long long vectorBytes; // @synthesize vectorBytes=_vectorBytes;
@property (readonly, nonatomic) unsigned long long vectors; // @synthesize vectors=_vectors;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)initPrivateWithDescriptor:(id)arg1 device:(struct MPSDevice *)arg2;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2;
- (id)initWithBuffer:(id)arg1 length:(unsigned long long)arg2 dataType:(unsigned int)arg3;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (unsigned long long)resourceSize;
- (void)synchronizeOnCommandBuffer:(id)arg1;

@end
