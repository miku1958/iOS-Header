//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNMultiValueUpdate.h>

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNMultiValueReorderUpdate : CNMultiValueUpdate
{
    NSOrderedSet *_values;
}

@property (readonly, copy, nonatomic) NSOrderedSet *values; // @synthesize values=_values;

- (BOOL)applyToABPerson:(void *)arg1 abmultivalue:(void *)arg2 propertyDescription:(id)arg3 error:(id *)arg4;
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithValues:(id)arg1;

@end

