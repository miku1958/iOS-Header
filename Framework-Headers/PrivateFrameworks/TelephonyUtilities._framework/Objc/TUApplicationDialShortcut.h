//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TUApplicationDialShortcut : NSObject
{
}

+ (BOOL)isShortcutItemType:(id)arg1;
+ (id)sharedFormatter;
+ (id)shortcutItemForContact:(id)arg1 withLabeledPhoneNumber:(id)arg2;
+ (id)shortcutItemForFavorite:(id)arg1 withAddressBookIdentifier:(int)arg2;
+ (id)shortcutItemForRecent:(id)arg1 withContactIdentifier:(id)arg2;
+ (id)shortcutItemWithTitle:(id)arg1 subtitle:(id)arg2 contactIdentifier:(id)arg3 URL:(id)arg4;
+ (id)urlForUserInfo:(id)arg1;

@end
