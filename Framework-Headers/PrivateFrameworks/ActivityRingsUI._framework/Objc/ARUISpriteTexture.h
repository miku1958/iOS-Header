//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface ARUISpriteTexture : NSObject
{
    float _height;
    float _width;
    id<MTLTexture> _texture;
}

@property (readonly, nonatomic) float height; // @synthesize height=_height;
@property (readonly, nonatomic) id<MTLTexture> texture; // @synthesize texture=_texture;
@property (readonly, nonatomic) float width; // @synthesize width=_width;

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1;

@end
