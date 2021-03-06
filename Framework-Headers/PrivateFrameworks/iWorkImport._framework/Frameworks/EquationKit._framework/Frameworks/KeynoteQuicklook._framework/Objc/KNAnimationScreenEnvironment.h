//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeynoteQuicklook/NSCopying-Protocol.h>

@interface KNAnimationScreenEnvironment : NSObject <NSCopying>
{
    struct CGColorSpace *_colorSpace;
    double _pixelAspectRatio;
}

@property (nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property (nonatomic) double pixelAspectRatio; // @synthesize pixelAspectRatio=_pixelAspectRatio;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

