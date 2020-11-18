//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CIImage, NSData, NSString;

@interface PLImageContainer : NSObject
{
    void *_ioSurface;
    CIImage *_CIImage;
    struct CGSize _pixelSize;
    struct CGImage *_CGImage;
    NSData *_data;
    NSString *_uniformTypeIdentifier;
}

@property (readonly, nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
@property (readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) void *ioSurface;
@property (readonly, nonatomic) struct CGSize pixelSize;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 ioSurface:(void *)arg2 CIImage:(id)arg3 backingData:(id)arg4 uniformTypeIdentifier:(id)arg5 size:(struct CGSize)arg6;
- (id)initWithUIImage:(id)arg1;
- (id)initWithUIImage:(id)arg1 backingData:(id)arg2 uniformTypeIdentifier:(id)arg3;

@end

