//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSSet, NSString, PLDetectedFace, PLPerson;

@interface PLDetectedFaceGroup : PLManagedObject
{
}

@property (strong, nonatomic) PLPerson *associatedPerson; // @dynamic associatedPerson;
@property (strong, nonatomic) NSSet *detectedFaces; // @dynamic detectedFaces;
@property (strong, nonatomic) PLDetectedFace *keyFace; // @dynamic keyFace;
@property (nonatomic) int personBuilderState; // @dynamic personBuilderState;
@property (nonatomic) int unnamedFaceCount; // @dynamic unnamedFaceCount;
@property (strong, nonatomic) NSString *uuid; // @dynamic uuid;

+ (void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)detectedFaceGroupWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
- (void)awakeFromInsert;
- (id)mutableDetectedFaces;
- (void)refreshFaces;
- (void)willSave;

@end

