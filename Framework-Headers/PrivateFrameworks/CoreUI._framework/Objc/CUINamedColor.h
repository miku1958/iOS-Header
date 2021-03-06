//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class NSString;

@interface CUINamedColor : CUINamedLookup
{
    struct CGColor *_cgColor;
    NSString *_colorName;
    BOOL _substituteWithSystemColor;
}

@property (readonly, nonatomic) struct CGColor *cgColor;
@property (readonly, nonatomic) BOOL substituteWithSystemColor; // @synthesize substituteWithSystemColor=_substituteWithSystemColor;
@property (readonly, nonatomic) NSString *systemColorName; // @synthesize systemColorName=_colorName;

- (void)dealloc;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

