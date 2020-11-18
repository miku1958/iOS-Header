//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMHandle, IMPerson, NSArray, NSMutableArray, NSString;

@interface IMMe : NSObject
{
    IMPerson *_person;
    NSString *_abNickname;
    NSString *_abFirstName;
    NSString *_abFullName;
    NSString *_abLastName;
    NSArray *_abEmails;
    NSMutableArray *_abIMHandles;
    NSMutableArray *_loginIMHandles;
}

@property (readonly, nonatomic) IMHandle *bestIMHandle;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSArray *imHandles;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) IMPerson *person;

+ (id)fallbackUserName;
+ (id)imHandleForService:(id)arg1;
+ (id)me;
- (id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2;
- (BOOL)addIMHandle:(id)arg1;
- (BOOL)addLoginIMHandle:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isIMHandleLoginIMHandle:(id)arg1;
- (id)loginIMHandles;
- (void)myPictureChanged;
- (void)rebuildIMHandles;
- (BOOL)removeIMHandle:(id)arg1;
- (BOOL)removeLoginIMHandle:(id)arg1;
- (void)resetABPerson;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)setIMPerson:(id)arg1;

@end

