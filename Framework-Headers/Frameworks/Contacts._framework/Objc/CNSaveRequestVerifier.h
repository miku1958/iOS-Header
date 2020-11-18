//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNSaveRequestVerifier : NSObject
{
}

+ (BOOL)_areDirectPropertiesOfSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id *)arg3;
+ (BOOL)_arePropertiesOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id *)arg4;
+ (BOOL)_isEditingOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id *)arg4;
+ (id)insertedAndUpdatedContactsForSaveRequest:(id)arg1;
+ (BOOL)isSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id *)arg3;
+ (BOOL)isValidSaveRequest:(id)arg1 error:(id *)arg2;

@end
