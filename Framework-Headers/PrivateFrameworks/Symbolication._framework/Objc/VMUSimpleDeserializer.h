//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUAbstractSerializer.h>

__attribute__((visibility("hidden")))
@interface VMUSimpleDeserializer : VMUAbstractSerializer
{
    void *_cache;
    CDUnknownBlockType _destructor;
}

- (unsigned int *)_deserializeValues:(unsigned int)arg1;
- (const char *)copyDeserializedNullTerminatedBytes;
- (id)copyDeserializedString;
- (id)copyDeserializedStringWithID:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)deserialize32;
- (unsigned long long)deserialize64;
- (id)initWithBuffer:(const void *)arg1 length:(unsigned int)arg2 destructor:(CDUnknownBlockType)arg3;
- (void)skipFields:(unsigned int)arg1;

@end

