//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/NSCopying-Protocol.h>

@protocol MTLTexture;

@interface ARUISpriteTexture : NSObject <NSCopying>
{
    float _height;
    float _width;
    id<MTLTexture> _texture;
}

@property (readonly, nonatomic) float height; // @synthesize height=_height;
@property (readonly, nonatomic) id<MTLTexture> texture; // @synthesize texture=_texture;
@property (readonly, nonatomic) float width; // @synthesize width=_width;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithImage:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
