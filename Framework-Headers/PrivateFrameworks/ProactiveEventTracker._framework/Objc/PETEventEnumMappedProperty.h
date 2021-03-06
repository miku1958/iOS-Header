//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveEventTracker/PETEventProperty.h>

@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty
{
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}

- (void).cxx_destruct;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (unsigned long long)cardinality;
- (id)description;
- (id)initWithName:(id)arg1 enumMapping:(id)arg2 autoSanitizeValues:(BOOL)arg3;
- (BOOL)isValidValue:(id)arg1;
- (id)longestValueString;
- (id)possibleValues;
- (struct _NSRange)validRange;

@end

