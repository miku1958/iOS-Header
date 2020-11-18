//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKNumberFormatter-Protocol.h>

@class HKDisplayType, HKDisplayTypeValueFormatter, HKUnitPreferenceController, NSString;

@interface HKDisplayTypeNumberFormatter : NSObject <HKNumberFormatter>
{
    HKDisplayType *_displayType;
    HKUnitPreferenceController *_unitController;
    HKDisplayTypeValueFormatter *_valueFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDisplayType:(id)arg1 unitController:(id)arg2;
- (BOOL)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end
