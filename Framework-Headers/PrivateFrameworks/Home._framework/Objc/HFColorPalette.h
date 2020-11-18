//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAEquatable-Protocol.h>
#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface HFColorPalette : NSObject <NAEquatable, NSCopying, NSMutableCopying>
{
    unsigned long long _paletteType;
    NSArray *_rawColors;
}

@property (readonly, copy, nonatomic) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long paletteType; // @synthesize paletteType=_paletteType;
@property (copy, nonatomic) NSArray *rawColors; // @synthesize rawColors=_rawColors;
@property (readonly) Class superclass;

+ (id)_defaultColorsOfType:(unsigned long long)arg1;
+ (id)_defaultRGBColors;
+ (id)_defaultTemperatureColors;
+ (id)defaultColorPaletteOfType:(unsigned long long)arg1;
+ (id)warmWhiteColor;
- (void).cxx_destruct;
- (BOOL)_isNaturalLightPalette;
- (id)colorPaletteByAdjustingForColorProfile:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithColors:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithSerializedRepresentation:(id)arg1 type:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)serializedRepresentation;

@end
