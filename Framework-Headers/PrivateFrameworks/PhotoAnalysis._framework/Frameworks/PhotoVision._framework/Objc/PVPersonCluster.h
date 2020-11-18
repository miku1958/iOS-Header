//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoVision/PVPersonProtocol-Protocol.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol PVFaceGroupProtocol, PVFaceProtocol, PVPersonProtocol, PVPhotoLibraryProtocol;

@interface PVPersonCluster : NSObject <PVPersonProtocol>
{
    unsigned long long _hash;
    BOOL _highlyInteresting;
    BOOL _quarantined;
    id<PVPhotoLibraryProtocol> _photoLibrary;
    id<PVPersonProtocol> _sourcePerson;
    id<PVFaceGroupProtocol> _sourceFaceGroup;
    NSMutableSet *_mergedPersonIdentifiers;
    NSMutableSet *_backingFaceIdentifiers;
    NSMutableSet *_backingAssetIdentifiers;
    NSSet *_sourcePersonBackingAssetIdentifiers;
    NSMutableSet *_backingMomentIdentifiers;
    double _interestingScore;
    NSMutableDictionary *_backingFaceIdentifiersByMomentIdentifiers;
    NSMutableDictionary *_representativeFaceByFaceIdentifiers;
    NSDate *_lastSeenDate;
    NSDate *_firstSeenDate;
}

@property (strong, nonatomic) NSMutableSet *backingAssetIdentifiers; // @synthesize backingAssetIdentifiers=_backingAssetIdentifiers;
@property (strong, nonatomic) NSMutableSet *backingFaceIdentifiers; // @synthesize backingFaceIdentifiers=_backingFaceIdentifiers;
@property (strong, nonatomic) NSMutableDictionary *backingFaceIdentifiersByMomentIdentifiers; // @synthesize backingFaceIdentifiersByMomentIdentifiers=_backingFaceIdentifiersByMomentIdentifiers;
@property (strong, nonatomic) NSMutableSet *backingMomentIdentifiers; // @synthesize backingMomentIdentifiers=_backingMomentIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long faceCount;
@property (readonly, nonatomic) BOOL favorite;
@property (strong, nonatomic) NSDate *firstSeenDate; // @synthesize firstSeenDate=_firstSeenDate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hidden;
@property (nonatomic) BOOL highlyInteresting; // @synthesize highlyInteresting=_highlyInteresting;
@property (nonatomic) double interestingScore; // @synthesize interestingScore=_interestingScore;
@property (nonatomic) BOOL isVerified;
@property (strong, nonatomic) id<PVFaceProtocol> keyFace;
@property (strong, nonatomic) NSDate *lastSeenDate; // @synthesize lastSeenDate=_lastSeenDate;
@property (readonly, nonatomic) double libraryTimespan;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (nonatomic) long long manualOrder;
@property (strong, nonatomic) NSMutableSet *mergedPersonIdentifiers; // @synthesize mergedPersonIdentifiers=_mergedPersonIdentifiers;
@property (readonly, nonatomic) NSString *name;
@property (weak, nonatomic) id<PVPhotoLibraryProtocol> photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (nonatomic) BOOL quarantined; // @synthesize quarantined=_quarantined;
@property (strong, nonatomic) NSMutableDictionary *representativeFaceByFaceIdentifiers; // @synthesize representativeFaceByFaceIdentifiers=_representativeFaceByFaceIdentifiers;
@property (strong, nonatomic) id<PVFaceGroupProtocol> sourceFaceGroup; // @synthesize sourceFaceGroup=_sourceFaceGroup;
@property (strong, nonatomic) id<PVPersonProtocol> sourcePerson; // @synthesize sourcePerson=_sourcePerson;
@property (strong, nonatomic) NSSet *sourcePersonBackingAssetIdentifiers; // @synthesize sourcePersonBackingAssetIdentifiers=_sourcePersonBackingAssetIdentifiers;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long verifiedType;

- (void).cxx_destruct;
- (void)_cacheDates;
- (id)fetchAssets;
- (id)fetchFaces;
- (id)fetchMoments;
- (id)initWithFaceGroup:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)initWithPerson:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)invalidateCaches;
- (BOOL)isEqual:(id)arg1;
- (id)personLocalIdentifiers;
- (void)pv_addMergeCandidatePersons:(id)arg1;

@end

