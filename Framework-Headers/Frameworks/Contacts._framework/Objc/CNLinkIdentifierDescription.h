//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPropertyDescription.h>

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNLinkIdentifierDescription : CNPropertyDescription <CNAbstractPropertyDescription>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void *)ABValueForABPerson:(void *)arg1;
- (id)CNValueForContact:(id)arg1;
- (BOOL)abPropertyID:(int *)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)init;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (BOOL)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;
- (BOOL)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;

@end

