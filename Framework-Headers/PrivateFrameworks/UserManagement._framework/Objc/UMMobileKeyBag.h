//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UMMobileKeyBag : NSObject
{
}

+ (id)currentUserSwitchContext;
+ (void)currentUserSwitchContextHasBeenUsed;
+ (id)deleteUser:(id)arg1;
+ (id)dictionaryRepresentationOfTask:(id)arg1;
+ (BOOL)fetchAttributesForUser:(id)arg1 outError:(id *)arg2;
+ (int)foregroundUID;
+ (BOOL)inSyncBubble;
+ (void)initialize;
+ (BOOL)isMultiUser;
+ (id)loadUser:(id)arg1 withPasscodeData:(id)arg2;
+ (unsigned long long)maxNumberOfUsers;
+ (double)passcodeBackOffIntervalForUser:(id)arg1;
+ (id)personaSpecForUser:(id)arg1;
+ (id)taskFromDictionaryRepresentation:(id)arg1;
+ (id)userFromAttributes:(id)arg1;
+ (unsigned long long)userType;
+ (id)userUIDs;
+ (BOOL)writeAttributesToDiskForUser:(id)arg1 outError:(id *)arg2;

@end

