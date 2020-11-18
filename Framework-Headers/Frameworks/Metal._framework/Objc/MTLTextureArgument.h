//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLArgumentInternal.h>

__attribute__((visibility("hidden")))
@interface MTLTextureArgument : MTLArgumentInternal
{
    unsigned int _textureType:15;
    unsigned int _isDepthTexture:1;
    unsigned short _textureDataType;
}

- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 access:(unsigned long long)arg2 isActive:(BOOL)arg3 locationIndex:(unsigned long long)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 textureType:(unsigned long long)arg7 isDepthTexture:(BOOL)arg8;
- (BOOL)isDepthTexture;
- (unsigned long long)textureDataType;
- (unsigned long long)textureType;

@end
