//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNPersonsModelDataSource-Protocol.h>
#import <Vision/VNPersonsModelFaceModelDataProvider-Protocol.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString;
@protocol VNPersonsModelDataDelegate;

__attribute__((visibility("hidden")))
@interface VNPersonsModelData : NSObject <VNPersonsModelDataSource, VNPersonsModelFaceModelDataProvider>
{
    unsigned long long _maximumIdentities;
    unsigned long long _faceprintRequestRevision;
    NSMutableArray *_personUniqueIdentifiers;
    NSMutableDictionary *_personUniqueIdentifierToSerialNumberMapping;
    NSMutableDictionary *_serialNumberToFaceObservationsMapping;
    NSMutableIndexSet *_availablePersonSerialNumbers;
    NSDate *_lastModificationDate;
    id<VNPersonsModelDataDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VNPersonsModelDataDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long faceprintRequestRevision; // @synthesize faceprintRequestRevision=_faceprintRequestRevision;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accessToMutableFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (BOOL)_addUniqueFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (void)_modelWasModified;
- (void)_removeAllFaceObservationsFromIdentityWithSerialNumber:(id)arg1;
- (void)_removeExistingFaceObservations:(id)arg1 fromIdentityWithSerialNumber:(id)arg2;
- (void)_removeExistingFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2;
- (void)_removePersonWithUniqueIdentifier:(id)arg1;
- (id)_requestNewIdentitySerialNumberAndReturnError:(id *)arg1;
- (id)_uniqueFaceObservationsWithRegistrationState:(BOOL)arg1 forFaceObservations:(id)arg2 withExpectedFaceprintRequestRevision:(unsigned long long)arg3 ofPersonWithUniqueIdentifier:(id)arg4 error:(id *)arg5;
- (BOOL)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelPersonsCount;
- (id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;
- (id)initWithConfiguration:(id)arg1;
- (unsigned long long)numberOfPersonsInPersonsModel:(id)arg1;
- (id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;
- (unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2;
- (unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;
- (id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;
- (BOOL)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)removePersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;

@end

