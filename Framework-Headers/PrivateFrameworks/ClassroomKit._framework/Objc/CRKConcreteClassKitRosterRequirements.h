//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKClassKitRosterRequirements-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol CRKClassKitFacade;

@interface CRKConcreteClassKitRosterRequirements : NSObject <CRKClassKitRosterRequirements>
{
    BOOL _forInstructor;
    int _membershipChangeDarwinNotificationToken;
    NSObject<CRKClassKitFacade> *_classKitFacade;
    NSArray *_dataObservers;
    NSMutableDictionary *_observersByToken;
}

@property (readonly, nonatomic) long long accountState;
@property (readonly, nonatomic) NSObject<CRKClassKitFacade> *classKitFacade; // @synthesize classKitFacade=_classKitFacade;
@property (readonly, copy, nonatomic) NSArray *dataObservers; // @synthesize dataObservers=_dataObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isForInstructor) BOOL forInstructor; // @synthesize forInstructor=_forInstructor;
@property (readonly) unsigned long long hash;
@property (nonatomic) int membershipChangeDarwinNotificationToken; // @synthesize membershipChangeDarwinNotificationToken=_membershipChangeDarwinNotificationToken;
@property (readonly, nonatomic) NSMutableDictionary *observersByToken; // @synthesize observersByToken=_observersByToken;
@property (readonly) Class superclass;

+ (id)instructorRosterRequirementsWithClassKitFacade:(id)arg1;
+ (id)studentRosterRequirementsWithClassKitFacade:(id)arg1;
- (void).cxx_destruct;
- (void)addNullableObserver:(id)arg1 toArray:(id)arg2;
- (id)addObserver:(CDUnknownBlockType)arg1;
- (void)addPerson:(id)arg1 toClass:(id)arg2;
- (void)addTrustedPerson:(id)arg1 toClass:(id)arg2;
- (void)callObserversWithReason:(id)arg1;
- (void)classesWithCompletion:(CDUnknownBlockType)arg1;
- (void)currentUserDidChange:(id)arg1;
- (void)currentUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)deregisterDataObservers;
- (void)executeQuery:(id)arg1;
- (id)initWithClassKitFacade:(id)arg1 isForInstructor:(BOOL)arg2;
- (BOOL)isForStudent;
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)locationsWithObjectIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)makeClassWithLocationID:(id)arg1 name:(id)arg2;
- (CDUnknownBlockType)makeDataChangedBlockWithObserverDescription:(id)arg1;
- (id)makeDataObservers;
- (id)makeInstructorQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(BOOL)arg3 pageSize:(long long)arg4;
- (id)makeQueryForPersonsWithIdentifiers:(id)arg1;
- (id)makeStudentQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(BOOL)arg3 pageSize:(long long)arg4;
- (id)objectIDsOfPersonsInClass:(id)arg1;
- (id)objectIDsOfTrustedPersonsInClass:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)ownsError:(id)arg1;
- (void)personsInClassWithObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerDataObservers;
- (void)registerForCurrentUserChangeNotification;
- (void)registerForMembershipChangeDarwinNotification;
- (void)removeClass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)removePerson:(id)arg1 fromClass:(id)arg2;
- (void)removeTrustedPerson:(id)arg1 fromClass:(id)arg2;
- (void)saveClass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startObservingAccountState;
- (void)stopObservingAccountState;
- (void)trustedPersonsInClassWithObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterForMembershipChangeDarwinNotification;

@end

