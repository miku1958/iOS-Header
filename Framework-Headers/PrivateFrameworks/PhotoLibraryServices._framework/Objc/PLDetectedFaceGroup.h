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
@property (nonatomic) PLDetectedFace *keyFace; // @dynamic keyFace;
@property (nonatomic) short personBuilderState; // @dynamic personBuilderState;
@property (nonatomic) int unnamedFaceCount; // @dynamic unnamedFaceCount;
@property (strong, nonatomic) NSString *uuid; // @dynamic uuid;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)awakeFromInsert;
- (id)mutableDetectedFaces;
- (void)refreshFaces;

@end

