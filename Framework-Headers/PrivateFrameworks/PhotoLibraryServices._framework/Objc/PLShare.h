//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLCloudDeletable-Protocol.h>

@class NSDate, NSSet, NSString, NSURL;

@interface PLShare : PLManagedObject <PLCloudDeletable>
{
}

@property (nonatomic) short cloudDeleteState; // @dynamic cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expiryDate; // @dynamic expiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) short localPublishState; // @dynamic localPublishState;
@property (strong, nonatomic) NSSet *participants; // @dynamic participants;
@property (nonatomic) long long publicPermission;
@property (copy, nonatomic) NSString *scopeIdentifier; // @dynamic scopeIdentifier;
@property (nonatomic) long long scopeType;
@property (copy, nonatomic) NSURL *shareURL; // @dynamic shareURL;
@property (nonatomic) short status; // @dynamic status;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @dynamic title;
@property (nonatomic) short trashedState; // @dynamic trashedState;
@property (copy, nonatomic) NSString *uuid; // @dynamic uuid;

+ (id)_basePredicateIncludeTrashedShares:(BOOL)arg1;
+ (id)_registeredSubclasses;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (void)createOrUpdateShareWithScopeChange:(id)arg1 photoLibrary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)deleteAllSharesInManagedObjectContext:(id)arg1;
+ (void)deleteExpiredSharesInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)fetchShareFromShareURL:(id)arg1 inPhotoLibrary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (id)predicateToExcludeExpiredShares;
+ (id)predicateToExcludeTrashedShares;
+ (id)scopeIdentifierPrefix;
+ (id)shareWithScopeIdentifier:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3;
+ (id)shareWithScopedIdentifier:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3;
+ (id)shareWithShareURL:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3;
+ (id)shareWithUUID:(id)arg1 includeTrashed:(BOOL)arg2 inManagedObjectContext:(id)arg3;
+ (id)sharesWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (BOOL)supportsCPLScopeType:(long long)arg1;
- (id)_statusDescription;
- (void)acceptWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)cplScopeChange;
- (id)owner;
- (void)publishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)trash;
- (void)updateWithScopeChange:(id)arg1;

@end

