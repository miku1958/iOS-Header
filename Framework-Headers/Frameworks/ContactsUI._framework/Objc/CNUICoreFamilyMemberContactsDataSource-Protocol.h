//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class NSArray, NSNumber;
@protocol CNUICoreFamilyMemberContactsObserver;

@protocol CNUICoreFamilyMemberContactsDataSource <NSObject>

@property (readonly, nonatomic) NSNumber *countOfFamilyMemberContacts;
@property (readonly, nonatomic) long long fetchStatus;
@property (weak, nonatomic) id<CNUICoreFamilyMemberContactsObserver> observer;

- (void)updateListByAddingContacts:(NSArray *)arg1;
- (void)updateListByRemovingContacts:(NSArray *)arg1;
@end
