//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKCSSDeclaration.h>

@class IKColor;

@interface IKCSSDeclarationColor : IKCSSDeclaration
{
    long long _sourceType;
    IKColor *_color;
}

@property (strong, nonatomic) IKColor *color; // @synthesize color=_color;
@property long long sourceType; // @synthesize sourceType=_sourceType;

+ (id)_stringForColor:(id)arg1 sourceType:(long long)arg2;
+ (id)colorForName:(id)arg1;
+ (void)initColorNames;
- (void).cxx_destruct;
- (id)_colorFromParseObject:(id)arg1 sourceType:(long long *)arg2;
- (id)_keywordKolorFromParseToken:(id)arg1;
- (id)_kolorFromParseObject:(id)arg1 sourceType:(long long *)arg2;
- (id)_linearGradientKolorFromParseFunction:(id)arg1;
- (id)description;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;
- (id)stringValue;

@end

