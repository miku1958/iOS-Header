//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSString.h>

@interface NSLocalizableString : NSString
{
    NSString *_stringsFileKey;
    NSString *_developmentLanguageString;
}

@property (readonly, copy) NSString *developmentLanguageString;
@property (readonly, copy) NSString *stringsFileKey;

+ (id)localizableStringWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;
- (id)awakeAfterUsingCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;
- (unsigned long long)length;
- (void)setDevelopmentLanguageString:(id)arg1;
- (void)setStringsFileKey:(id)arg1;

@end
