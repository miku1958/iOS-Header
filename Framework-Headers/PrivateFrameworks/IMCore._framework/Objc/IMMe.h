//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, IMHandle, NSArray, NSMutableArray, NSString;

@interface IMMe : NSObject
{
    CNContact *_cnContact;
    NSString *_cnNickname;
    NSString *_cnFirstName;
    NSString *_cnFullName;
    NSString *_cnLastName;
    NSArray *_cnEmails;
    NSMutableArray *_cnIMHandles;
    NSMutableArray *_loginIMHandles;
}

@property (readonly, nonatomic) IMHandle *bestIMHandle;
@property (readonly, nonatomic) CNContact *cnContact; // @synthesize cnContact=_cnContact;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSArray *imHandles;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *nickname;

+ (id)fallbackUserName;
+ (id)firstNameFromFallbackUserName;
+ (id)imHandleForService:(id)arg1;
+ (id)lastNameFromFallbackUserName;
+ (id)me;
- (void).cxx_destruct;
- (id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2;
- (BOOL)addIMHandle:(id)arg1;
- (BOOL)addLoginIMHandle:(id)arg1;
- (id)description;
- (id)init;
- (BOOL)isIMHandleLoginIMHandle:(id)arg1;
- (id)loginIMHandles;
- (void)myPictureChanged;
- (void)rebuildIMHandles;
- (BOOL)removeIMHandle:(id)arg1;
- (BOOL)removeLoginIMHandle:(id)arg1;
- (void)resetABPerson;
- (void)setCNContact:(id)arg1;

@end
