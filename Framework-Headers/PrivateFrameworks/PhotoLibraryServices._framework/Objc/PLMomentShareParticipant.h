//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSPersonNameComponents, NSString, PLMomentShare;

@interface PLMomentShareParticipant : PLManagedObject
{
}

@property (copy, nonatomic) NSString *emailAddress; // @dynamic emailAddress;
@property (strong, nonatomic) PLMomentShare *momentShare; // @dynamic momentShare;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents; // @dynamic nameComponents;
@property (copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property (nonatomic) short status; // @dynamic status;
@property (nonatomic) short type; // @dynamic type;
@property (copy, nonatomic) NSString *userIdentifier; // @dynamic userIdentifier;
@property (copy, nonatomic) NSString *uuid; // @dynamic uuid;

+ (id)_momentShareParticipantsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (id)entityName;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (id)participantsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)updateOrInsertWithCPLMomentShareParticipant:(id)arg1 inMomentShare:(id)arg2;
- (id)_statusDescription;
- (id)_typeDescription;
- (id)description;

@end
