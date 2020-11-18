//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSManagedObjectID, NSMutableDictionary, NSMutableSet, NSString;

@interface PHChangeRequestHelper : NSObject
{
    BOOL _isMutated;
    BOOL _isNew;
    NSMutableDictionary *_mutations;
    NSMutableSet *_nilMutations;
    id _changeRequest;
    NSString *_uuid;
    NSString *_uuidSaveToken;
    NSManagedObjectID *_objectID;
    NSError *_placeholderRequestError;
}

@property (weak, nonatomic) id changeRequest; // @synthesize changeRequest=_changeRequest;
@property (nonatomic, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSMutableDictionary *mutations; // @synthesize mutations=_mutations;
@property (nonatomic, getter=isNew) BOOL new;
@property (readonly, nonatomic) NSMutableSet *nilMutations; // @synthesize nilMutations=_nilMutations;
@property (strong, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property (readonly, nonatomic) NSError *placeholderRequestError; // @synthesize placeholderRequestError=_placeholderRequestError;
@property (readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property (readonly, nonatomic) NSString *uuidSaveToken; // @synthesize uuidSaveToken=_uuidSaveToken;

+ (id)changeRequestForObject:(id)arg1;
+ (id)changeRequestWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (void).cxx_destruct;
- (BOOL)_generateUUIDIfNecessary:(id *)arg1;
- (BOOL)_validateOrGenerateUUIDWithClientEntitled:(BOOL)arg1 changeRequest:(id)arg2;
- (BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (BOOL)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)description;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)init;
- (id)initForNewObjectWithChangeRequest:(id)arg1;
- (id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3;
- (id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 clientEntitlements:(id)arg3;
- (id)placeholderForCreatedObjectWithClass:(Class)arg1 changeRequest:(id)arg2;
- (BOOL)prepareForServicePreflightCheck:(id *)arg1;
- (BOOL)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;

@end
