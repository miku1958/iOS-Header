//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPropertyDescription.h>

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNContactTypeDescription : CNPropertyDescription <CNAbstractPropertyDescription>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void *)ABValueFromCNValue:(id)arg1;
- (id)CNValueForContact:(id)arg1;
- (id)CNValueFromABValue:(void *)arg1;
- (int)abPropertyID:(int *)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)init;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (BOOL)isValidValue:(id)arg1 error:(id *)arg2;
- (id)nilValue;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (Class)valueClass;

@end

