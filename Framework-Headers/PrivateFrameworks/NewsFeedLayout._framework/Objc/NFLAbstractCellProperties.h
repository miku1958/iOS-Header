//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLFontCache, NSDictionary;

@interface NFLAbstractCellProperties : NSObject
{
    NFLFontCache *_fontCache;
    double _scaleValue;
    long long _rowSpan;
    NSDictionary *_layout;
    NSDictionary *_columnIrrespectiveProperties;
}

@property (strong, nonatomic) NSDictionary *columnIrrespectiveProperties; // @synthesize columnIrrespectiveProperties=_columnIrrespectiveProperties;
@property (strong, nonatomic) NFLFontCache *fontCache; // @synthesize fontCache=_fontCache;
@property (strong, nonatomic) NSDictionary *layout; // @synthesize layout=_layout;
@property (readonly, nonatomic) long long rowSpan; // @synthesize rowSpan=_rowSpan;
@property (nonatomic) double scaleValue; // @synthesize scaleValue=_scaleValue;

- (void).cxx_destruct;
- (id)arrayForPropertyKey:(id)arg1;
- (id)dictionaryForPropertyKey:(id)arg1 columnSpan:(long long)arg2;
- (BOOL)fontCondensedForFontID:(id)arg1;
- (double)fontWeightForFontID:(id)arg1;
- (id)initWithLayout:(id)arg1 columnIrrespectiveProperties:(id)arg2 fontCache:(id)arg3 scaleValue:(double)arg4;
- (double)lineHeightForFont:(id)arg1 locale:(id)arg2;
- (id)numberForPropertyKey:(id)arg1;
- (id)numberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;
- (double)scaledFontSizeForFontID:(id)arg1;
- (id)scaledNumberForPropertyKey:(id)arg1;
- (id)scaledNumberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;
- (struct CGSize)scaledSizeForPropertyKey:(id)arg1;
- (double)scaledValueForValue:(double)arg1 fontID:(id)arg2;
- (struct CGSize)sizeForPropertyKey:(id)arg1;
- (id)stringForPropertyKey:(id)arg1;
- (id)stringForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;

@end

