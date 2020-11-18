//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISDataProvider.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class SUImageModifier, UIColor;

@interface SUImageDataProvider : ISDataProvider <NSCopying>
{
    UIColor *_fillColor;
    struct CGSize _finalSize;
    double _inputImageScale;
    SUImageModifier *_modifier;
}

@property (strong) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property struct CGSize finalSize; // @synthesize finalSize=_finalSize;
@property double inputImageScale; // @synthesize inputImageScale=_inputImageScale;
@property (strong) SUImageModifier *modifier; // @synthesize modifier=_modifier;

- (void)_getFinalSize:(struct CGSize *)arg1 imageFrame:(struct CGRect *)arg2 forImage:(id)arg3 withModifier:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)newImageFromImage:(id)arg1;
- (BOOL)parseData:(id)arg1 returningError:(id *)arg2;

@end
