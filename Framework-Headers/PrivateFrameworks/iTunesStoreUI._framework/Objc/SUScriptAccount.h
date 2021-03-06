//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SSAccount;

@interface SUScriptAccount : SUScriptObject
{
    SSAccount *_account;
}

@property (readonly) NSString *ITunesPassSerialNumber;
@property (strong) SSAccount *account;
@property (copy) NSString *credits;
@property (strong) NSNumber *dsID;
@property (copy) NSString *identifier;
@property (copy) NSString *kind;
@property (strong) id lockerEnabled;
@property (readonly, getter=isPrimaryLockerAccount) id primaryLockerAccount;
@property (strong) id purchaseHistoryEnabled;
@property (strong) id socialEnabled;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (id)_className;
- (void)_commitChanges;
- (void)_setServiceType:(long long)arg1 enabled:(id)arg2;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (BOOL)isManagedAppleID;
- (BOOL)isPrimaryAccount;
- (BOOL)isSecureTokenValid;
- (id)scriptAttributeKeys;
- (void)setSecureToken:(id)arg1;

@end

