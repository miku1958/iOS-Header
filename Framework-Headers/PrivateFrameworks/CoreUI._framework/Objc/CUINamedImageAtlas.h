//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class NSArray, NSDictionary;

@interface CUINamedImageAtlas : CUINamedLookup
{
    NSDictionary *_images;
    NSArray *_renditions;
    struct __CFArray *_atlasImages;
}

@property (readonly, nonatomic) BOOL completeTextureExtrusion;
@property (readonly, nonatomic) struct CGImage *image;
@property (readonly, nonatomic) NSArray *imageNames;
@property (readonly, nonatomic) struct __CFArray *images;
@property (readonly, nonatomic) double scale;

- (BOOL)_dimension1ExistsInKeyFormatForThemeRef:(unsigned long long)arg1;
- (id)_renditionForKey:(id)arg1 inThemeRef:(unsigned long long)arg2;
- (void)dealloc;
- (id)imageWithName:(id)arg1;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(unsigned long long)arg5 withSourceThemeRef:(unsigned long long)arg6;

@end

