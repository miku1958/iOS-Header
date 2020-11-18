//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecCardSection.h>

@class NSNumber, NSString, WBSParsecImageRepresentation;

@interface WBSParsecRowCardSection : WBSParsecCardSection
{
    BOOL _keyCanWrap;
    BOOL _valueCanWrap;
    NSString *_key;
    NSNumber *_keyWeight;
    NSString *_value;
    NSNumber *_valueWeight;
    WBSParsecImageRepresentation *_valueImage;
    long long _valueImageAlignment;
}

@property (readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (readonly, nonatomic) BOOL keyCanWrap; // @synthesize keyCanWrap=_keyCanWrap;
@property (readonly, nonatomic) NSNumber *keyWeight; // @synthesize keyWeight=_keyWeight;
@property (readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property (readonly, nonatomic) BOOL valueCanWrap; // @synthesize valueCanWrap=_valueCanWrap;
@property (readonly, nonatomic) WBSParsecImageRepresentation *valueImage; // @synthesize valueImage=_valueImage;
@property (readonly, nonatomic) long long valueImageAlignment; // @synthesize valueImageAlignment=_valueImageAlignment;
@property (readonly, nonatomic) NSNumber *valueWeight; // @synthesize valueWeight=_valueWeight;

+ (id)_specializedCardSectionSchema;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;

@end

