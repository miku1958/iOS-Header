//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@interface CUINamedColor : CUINamedLookup
{
    struct CGColor *_cgColor;
    long long _displayGamut;
}

@property (readonly, nonatomic) struct CGColor *cgColor; // @synthesize cgColor=_cgColor;
@property (readonly, nonatomic) long long displayGamut; // @synthesize displayGamut=_displayGamut;

- (struct CGColorSpace *)_colorSpaceWithID:(long long)arg1;
- (struct CGColor *)cgColorCreateCopyWithColorSpaceID:(long long)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end
