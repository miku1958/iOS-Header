//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPropertyDescription.h>

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNAbstractActivityAlertDescription : CNPropertyDescription <CNAbstractPropertyDescription>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void *)ABValueFromCNValue:(id)arg1;
- (id)CNValueFromABValue:(void *)arg1;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (Class)valueClass;

@end

