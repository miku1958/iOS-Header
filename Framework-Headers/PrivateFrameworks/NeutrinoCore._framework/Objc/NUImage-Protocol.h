//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>
#import <NeutrinoCore/NUImageCopying-Protocol.h>

@class NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;

@protocol NUImage <NSObject, NUImageCopying>

@property (readonly) NUColorSpace *colorSpace;
@property (readonly) NUPixelFormat *format;
@property (readonly) NUImageLayout *layout;
@property (readonly) CDStruct_912cb5d2 size;
@property (readonly, copy) NURegion *validRegion;

@end
