//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REExportedValue.h>

@class NSDictionary;

@interface REExportedDictionaryValue : REExportedValue
{
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)exportedValueForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)propertyCount;
- (unsigned long long)type;

@end

