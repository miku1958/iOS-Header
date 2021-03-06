//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/NSCopying-Protocol.h>

@class ARUISpriteTexture, NSArray;

@interface ARUISpriteSheet : NSObject <NSCopying>
{
    NSArray *_sprites;
    ARUISpriteTexture *_texture;
}

@property (readonly, nonatomic) NSArray *sprites; // @synthesize sprites=_sprites;
@property (readonly, nonatomic) ARUISpriteTexture *texture; // @synthesize texture=_texture;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithSpriteSheet:(id)arg1;
- (id)initWithTexture:(id)arg1 sprites:(id)arg2;

@end

