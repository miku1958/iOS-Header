//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertyGroupItem.h>

__attribute__((visibility("hidden")))
@interface CNPropertyGroupDateItem : CNPropertyGroupItem
{
}

+ (id)calendarForLabel:(id)arg1;
+ (id)emptyValueForLabel:(id)arg1;
+ (id)initialValueForLabel:(id)arg1 group:(id)arg2;
+ (void)initialize;
+ (BOOL)isEmptyDateComponents:(id)arg1;
- (id)bestValue:(id)arg1;
- (id)defaultActionURL;
- (id)displayStringForValue:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isEquivalentToItem:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (id)localeAndCalendarPairFromDateComponents:(id)arg1;
- (id)normalizedValue;
- (id)placeholderString;
- (id)valueForDisplayString:(id)arg1;

@end
