//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface TSWPItemNumbering : NSObject
{
    NSDictionary *_defaultPageNumberFormats;
    NSArray *_validFormatNames;
    NSDictionary *_formatTypeInfo;
}

+ (id)allPageNumberFormats;
+ (id)defaultPageNumberFormatForLocale:(id)arg1;
+ (id)displayNameForPageNumberFormat:(id)arg1;
+ (id)instance;
+ (id)pageNumberFormatNameForType:(int)arg1;
+ (int)pageNumberFormatTypeForName:(id)arg1;
+ (id)pageNumberFormatsForDocLocale:(id)arg1;
+ (id)stringFromNumber:(unsigned long long)arg1 forFormatName:(id)arg2;
+ (id)stringFromNumber:(unsigned long long)arg1 forPageNumberFormatType:(int)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)p_additiveTypeFormatForNumber:(unsigned long long)arg1 limitsAndSymbols:(id)arg2;
- (id)p_allPageNumberFormats;
- (id)p_defaultPageNumberFormatForLocale:(id)arg1;
- (id)p_displayNameForPageNumberFormat:(id)arg1;
- (id)p_formatInfoForFormatName:(id)arg1;
- (id)p_numericTypeFormatForNumber:(unsigned long long)arg1 digitChars:(id)arg2;
- (id)p_pageNumberFormatNameForType:(int)arg1;
- (int)p_pageNumberFormatTypeForName:(id)arg1;
- (id)p_pageNumberFormatsForDocLocale:(id)arg1;
- (id)p_stringFromNumber:(unsigned long long)arg1 forFormatName:(id)arg2;
- (id)p_stringFromNumber:(unsigned long long)arg1 forPageNumberFormatType:(int)arg2;
- (id)p_symbolicTypeFormatForNumber:(unsigned long long)arg1 symbols:(id)arg2;

@end

