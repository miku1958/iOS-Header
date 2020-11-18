//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNContactUpdate.h>

@class CNMultiValueDiff, CNMultiValuePropertyDescription;

__attribute__((visibility("hidden")))
@interface CNContactMultiValueDiffUpdate : CNContactUpdate
{
    CNMultiValuePropertyDescription *_property;
    CNMultiValueDiff *_diff;
}

@property (readonly) CNMultiValueDiff *diff; // @synthesize diff=_diff;
@property (readonly) CNMultiValuePropertyDescription *property; // @synthesize property=_property;

- (void).cxx_destruct;
- (BOOL)applyToABPerson:(void *)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id *)arg4;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (id)description;
- (id)initWithProperty:(id)arg1 diff:(id)arg2;

@end
