//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/NSCopying-Protocol.h>

@interface TXROptions : NSObject <NSCopying>
{
    BOOL _cubemapFromVerticallyStackedImage;
    unsigned long long _originOperation;
    unsigned long long _colorSpaceHandling;
    BOOL _multiplyAlpha;
}

@property (nonatomic) unsigned long long colorSpaceHandling; // @synthesize colorSpaceHandling=_colorSpaceHandling;
@property (nonatomic) BOOL cubemapFromVerticallyStackedImage; // @synthesize cubemapFromVerticallyStackedImage=_cubemapFromVerticallyStackedImage;
@property (nonatomic) BOOL multiplyAlpha; // @synthesize multiplyAlpha=_multiplyAlpha;
@property (nonatomic) unsigned long long originOperation; // @synthesize originOperation=_originOperation;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

