//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeTextureImageRendition : CUIThemeRendition
{
    NSMutableArray *_textureImages;
}

- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)dealloc;
- (int)pixelFormat;
- (id)textureImages;

@end

