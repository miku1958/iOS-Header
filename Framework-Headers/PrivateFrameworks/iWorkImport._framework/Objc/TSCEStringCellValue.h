//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCECellValue.h>

__attribute__((visibility("hidden")))
@interface TSCEStringCellValue : TSCECellValue
{
    struct TSCEStringValue *_stringValue;
}

- (id)canonicalKeyString;
- (long long)compareToCellValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)displayString;
- (void)encodeToArchive:(struct StringCellValueArchive *)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct StringCellValueArchive *)arg1 locale:(id)arg2;
- (id)initWithString:(id)arg1 locale:(id)arg2;
- (id)initWithStringValue:(struct TSCEStringValue *)arg1 locale:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCellValue:(id)arg1;
- (void)setPopulatedCustomFormat:(id)arg1;
- (struct TSCEStringValue *)stringValue;
- (struct TSCEValue)tsceValue;

@end

