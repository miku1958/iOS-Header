//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <NotesShared/ICLoggable-Protocol.h>

@class CKRecordZoneID, CKServerChangeToken, ICAccount, NSData, NSString;

@interface ICServerChangeToken : NSManagedObject <ICLoggable>
{
    CKRecordZoneID *_zoneID;
    CKServerChangeToken *_ckServerChangeToken;
}

@property (strong, nonatomic) ICAccount *account; // @dynamic account;
@property (strong, nonatomic) CKServerChangeToken *ckServerChangeToken; // @synthesize ckServerChangeToken=_ckServerChangeToken;
@property (strong, nonatomic) NSData *ckServerChangeTokenData; // @dynamic ckServerChangeTokenData;
@property (nonatomic) long long databaseScope; // @dynamic databaseScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *ownerName; // @dynamic ownerName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property (strong, nonatomic) NSString *zoneName; // @dynamic zoneName;

+ (id)addServerChangeTokenForAccount:(id)arg1 ckServerChangeToken:(id)arg2 zoneID:(id)arg3 databaseScope:(long long)arg4 context:(id)arg5;
+ (id)serverChangeTokenForAccount:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 context:(id)arg4;
+ (id)serverChangeTokensMatchingPredicate:(id)arg1 inContext:(id)arg2;
- (void).cxx_destruct;
- (void)didTurnIntoFault;
- (id)ic_loggingValues;

@end

