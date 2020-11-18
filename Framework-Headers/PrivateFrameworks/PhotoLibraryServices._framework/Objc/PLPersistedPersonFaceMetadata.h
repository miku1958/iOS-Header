//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>
#import <PhotoLibraryServices/PLFaceRebuildDescription-Protocol.h>

@class NSString;

@interface PLPersistedPersonFaceMetadata : NSObject <NSSecureCoding, PLFaceRebuildDescription>
{
    BOOL _isHidden;
    BOOL _manual;
    BOOL _representative;
    BOOL _clusterRejected;
    BOOL _hidden;
    int _nameSource;
    int _cloudNameSource;
    NSString *_assetUUID;
    NSString *_assetCloudGUID;
    double _centerX;
    double _centerY;
    double _size;
}

@property (copy, nonatomic) NSString *assetCloudGUID; // @synthesize assetCloudGUID=_assetCloudGUID;
@property (copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
@property (nonatomic) double centerX; // @synthesize centerX=_centerX;
@property (nonatomic) double centerY; // @synthesize centerY=_centerY;
@property (nonatomic) int cloudNameSource; // @synthesize cloudNameSource=_cloudNameSource;
@property (nonatomic, getter=isClusterRejected) BOOL clusterRejected; // @synthesize clusterRejected=_clusterRejected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (readonly, nonatomic, getter=isHidden) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property (nonatomic, getter=isManual) BOOL manual; // @synthesize manual=_manual;
@property (nonatomic) int nameSource; // @synthesize nameSource=_nameSource;
@property (nonatomic, getter=isRepresentative) BOOL representative; // @synthesize representative=_representative;
@property (nonatomic) double size; // @synthesize size=_size;
@property (readonly) Class superclass;

+ (id)_detectedFacePropertiesToFetch;
+ (id)_detectedFaceRelationshipKeyPathsToPrefetch;
+ (id)_migrateDetectedFaces:(id)arg1 forPersonMetadata:(id)arg2 fromVersion:(unsigned long long)arg3;
+ (id)_persistedFaceMetadataWithDetectedFace:(id)arg1 isKeyFace:(BOOL)arg2 isClusterRejected:(BOOL)arg3;
+ (id)_persistedFacesWithUnarchiver:(id)arg1 key:(id)arg2;
+ (void)enumerateMatchedAssetsWithMetadata:(id)arg1 inContext:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_identifier;
- (id)_insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)arg1 personUUID:(id)arg2 isRejected:(BOOL)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionary;
- (BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forConfirmedPersonUUID:(id)arg2 diff:(id *)arg3;
- (BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forRejectedPersonUUID:(id)arg2 diff:(id *)arg3;
- (id)matchingFaceInManagedObejctContext:(id)arg1;

@end

