//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NGMRollingBitmaskBuffer : NSObject
{
    unsigned int _upper_buffer_index;
    unsigned int _valid_values_buffer_size;
    char *_valid_values_buffer;
}

@property unsigned int upper_buffer_index; // @synthesize upper_buffer_index=_upper_buffer_index;
@property char *valid_values_buffer; // @synthesize valid_values_buffer=_valid_values_buffer;
@property unsigned int valid_values_buffer_size; // @synthesize valid_values_buffer_size=_valid_values_buffer_size;

- (id)bufferData;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 upperBufferIndex:(unsigned int)arg2;
- (BOOL)processIncomingCounter:(unsigned int)arg1;

@end
