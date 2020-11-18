//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PHChangeRequestHelper;

@interface PHRelationshipChangeRequestHelper : NSObject
{
    BOOL _allowsInsert;
    BOOL _allowsMove;
    BOOL _allowsRemove;
    NSString *_relationshipName;
    NSString *_destinationEntityName;
    NSString *_destinationUUIDKeyPath;
    NSArray *_originalObjectIDs;
    NSMutableArray *_mutableObjectIDsAndUUIDs;
    CDUnknownBlockType _isDestinationObjectValid;
    PHChangeRequestHelper *_changeRequestHelper;
}

@property (nonatomic) BOOL allowsInsert; // @synthesize allowsInsert=_allowsInsert;
@property (nonatomic) BOOL allowsMove; // @synthesize allowsMove=_allowsMove;
@property (nonatomic) BOOL allowsRemove; // @synthesize allowsRemove=_allowsRemove;
@property (strong, nonatomic) PHChangeRequestHelper *changeRequestHelper; // @synthesize changeRequestHelper=_changeRequestHelper;
@property (strong, nonatomic) NSString *destinationEntityName; // @synthesize destinationEntityName=_destinationEntityName;
@property (strong, nonatomic) NSString *destinationUUIDKeyPath; // @synthesize destinationUUIDKeyPath=_destinationUUIDKeyPath;
@property (copy, nonatomic) CDUnknownBlockType isDestinationObjectValid; // @synthesize isDestinationObjectValid=_isDestinationObjectValid;
@property (strong, nonatomic) NSMutableArray *mutableObjectIDsAndUUIDs; // @synthesize mutableObjectIDsAndUUIDs=_mutableObjectIDsAndUUIDs;
@property (strong, nonatomic) NSArray *originalObjectIDs; // @synthesize originalObjectIDs=_originalObjectIDs;
@property (readonly, nonatomic) NSString *relationshipName; // @synthesize relationshipName=_relationshipName;

+ (id)_offsetsFromSourceOIDs:(id)arg1 toManagedObjects:(id)arg2;
- (void).cxx_destruct;
- (BOOL)applyMutationsToManagedObject:(id)arg1 orderedMutableChildren:(id)arg2 error:(id *)arg3;
- (BOOL)applyMutationsToManagedObject:(id)arg1 unorderedMutableChildren:(id)arg2 error:(id *)arg3;
- (BOOL)applyMutationsToManagedObjectToOneRelationship:(id)arg1 error:(id *)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithRelationshipName:(id)arg1 changeRequestHelper:(id)arg2;
- (id)initWithRelationshipName:(id)arg1 xpcDict:(id)arg2 changeRequestHelper:(id)arg3;

@end

