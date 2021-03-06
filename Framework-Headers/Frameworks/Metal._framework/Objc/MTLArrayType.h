//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLType.h>

@interface MTLArrayType : MTLType
{
}

@property (readonly) unsigned long long argumentIndexStride; // @dynamic argumentIndexStride;
@property (readonly) unsigned long long arrayLength; // @dynamic arrayLength;
@property (readonly) unsigned long long elementType; // @dynamic elementType;
@property (readonly) unsigned long long stride; // @dynamic stride;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)elementArrayType;
- (id)elementIndirectArgumentType;
- (id)elementPointerType;
- (id)elementStructType;
- (id)elementTextureReferenceType;

@end

