//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarKit/AVTStickerProp.h>

@class UIImage;

@interface AVTStickerImageProp : AVTStickerProp
{
    UIImage *_image;
}

@property (readonly, nonatomic) UIImage *image; // @synthesize image=_image;

- (void).cxx_destruct;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryWithTargetPath:(id)arg1;
- (id)initWithImage:(id)arg1 size:(struct CGSize)arg2 scale:(BOOL)arg3 position:(BOOL)arg4 renderLast:(id)arg5 orientToCamera:(id)arg6 rotation:(id)arg7 palettesDescriptions:modifiers:adjustments: /* Error: Ran out of types for this method. */;

@end

