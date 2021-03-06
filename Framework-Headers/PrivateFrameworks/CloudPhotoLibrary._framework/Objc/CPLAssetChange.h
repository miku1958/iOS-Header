//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLItemChange.h>

@class CLLocation, CPLAdjustments, CPLFaceAnalysisReference, CPLPlaceAnnotation, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface CPLAssetChange : CPLItemChange
{
    NSDictionary *_resourcePerResourceType;
    BOOL _favorite;
    BOOL _hidden;
    NSString *_masterIdentifier;
    NSDate *_lastSharedDate;
    NSDate *_addedDate;
    NSDate *_assetDate;
    NSArray *_resources;
    NSString *_caption;
    NSString *_extendedDescription;
    NSString *_accessibilityDescription;
    long long _orientation;
    long long _duration;
    CLLocation *_location;
    NSArray *_keywords;
    NSString *_adjustedMediaMetaDataType;
    NSData *_adjustedMediaMetaData;
    NSString *_timeZoneName;
    NSNumber *_timeZoneOffset;
    NSString *_momentIdentifier;
    NSString *_momentName;
    NSString *_collectionIdentifier;
    NSString *_collectionName;
    unsigned long long _burstFlags;
    NSString *_burstIdentifier;
    NSString *_mediaGroupIdentifier;
    long long _videoComplementDurationValue;
    long long _videoComplementDurationTimescale;
    long long _videoComplementImageDisplayValue;
    long long _videoComplementImageDisplayTimescale;
    unsigned long long _videoComplementVisibilityState;
    unsigned long long _assetSubtype;
    unsigned long long _assetHDRType;
    CPLAdjustments *_adjustments;
    unsigned long long _originalChoice;
    long long _customRenderedValue;
    NSArray *_people;
    long long _facesVersion;
    NSString *_facesAdjustmentsFingerprint;
    CPLPlaceAnnotation *_placeAnnotation;
    long long _playCount;
    long long _shareCount;
    long long _viewCount;
    NSData *_facesData;
}

@property (copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property (copy, nonatomic) NSDate *addedDate; // @synthesize addedDate=_addedDate;
@property (strong, nonatomic) NSData *adjustedMediaMetaData; // @synthesize adjustedMediaMetaData=_adjustedMediaMetaData;
@property (copy, nonatomic) NSString *adjustedMediaMetaDataType; // @synthesize adjustedMediaMetaDataType=_adjustedMediaMetaDataType;
@property (strong, nonatomic) CPLAdjustments *adjustments; // @synthesize adjustments=_adjustments;
@property (copy, nonatomic) NSDate *assetDate; // @synthesize assetDate=_assetDate;
@property (nonatomic) unsigned long long assetHDRType; // @synthesize assetHDRType=_assetHDRType;
@property (nonatomic) unsigned long long assetSubtype; // @synthesize assetSubtype=_assetSubtype;
@property (nonatomic) unsigned long long burstFlags; // @synthesize burstFlags=_burstFlags;
@property (copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property (copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property (copy, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property (copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property (nonatomic) long long customRenderedValue; // @synthesize customRenderedValue=_customRenderedValue;
@property (nonatomic) long long duration; // @synthesize duration=_duration;
@property (copy, nonatomic) NSString *extendedDescription; // @synthesize extendedDescription=_extendedDescription;
@property (copy, nonatomic) CPLFaceAnalysisReference *faces;
@property (copy, nonatomic) NSString *facesAdjustmentsFingerprint; // @synthesize facesAdjustmentsFingerprint=_facesAdjustmentsFingerprint;
@property (copy, nonatomic) NSData *facesData; // @synthesize facesData=_facesData;
@property (nonatomic) long long facesVersion; // @synthesize facesVersion=_facesVersion;
@property (nonatomic, getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property (nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property (copy, nonatomic) NSDate *lastSharedDate; // @synthesize lastSharedDate=_lastSharedDate;
@property (strong, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (copy, nonatomic) NSString *masterIdentifier; // @synthesize masterIdentifier=_masterIdentifier;
@property (copy, nonatomic) NSString *mediaGroupIdentifier; // @synthesize mediaGroupIdentifier=_mediaGroupIdentifier;
@property (copy, nonatomic) NSString *momentIdentifier; // @synthesize momentIdentifier=_momentIdentifier;
@property (copy, nonatomic) NSString *momentName; // @synthesize momentName=_momentName;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic) unsigned long long originalChoice; // @synthesize originalChoice=_originalChoice;
@property (copy, nonatomic) NSArray *people; // @synthesize people=_people;
@property (strong, nonatomic) CPLPlaceAnnotation *placeAnnotation; // @synthesize placeAnnotation=_placeAnnotation;
@property (nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property (copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property (nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property (copy, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property (copy, nonatomic) NSNumber *timeZoneOffset; // @synthesize timeZoneOffset=_timeZoneOffset;
@property (nonatomic) long long videoComplementDurationTimescale; // @synthesize videoComplementDurationTimescale=_videoComplementDurationTimescale;
@property (nonatomic) long long videoComplementDurationValue; // @synthesize videoComplementDurationValue=_videoComplementDurationValue;
@property (nonatomic) long long videoComplementImageDisplayTimescale; // @synthesize videoComplementImageDisplayTimescale=_videoComplementImageDisplayTimescale;
@property (nonatomic) long long videoComplementImageDisplayValue; // @synthesize videoComplementImageDisplayValue=_videoComplementImageDisplayValue;
@property (nonatomic) unsigned long long videoComplementVisibilityState; // @synthesize videoComplementVisibilityState=_videoComplementVisibilityState;
@property (nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;

+ (CDUnknownBlockType)copyPropertyBlockForDirection:(unsigned long long)arg1;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (CDUnknownBlockType)equalityBlockForDirection:(unsigned long long)arg1;
+ (BOOL)serverSupportsVision;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_canLowerQuota;
- (id)allRelatedScopedIdentifiers;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingStorageView:(id)arg4;
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;
- (long long)dequeueOrder;
- (unsigned long long)fullChangeTypeForFullRecord;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAssetChange;
- (id)masterScopedIdentifier;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)relatedIdentifier;
- (id)resourceForType:(unsigned long long)arg1;
- (id)scopeIdentifiersForQuarantine;
- (id)scopedIdentifiersForMapping;
- (void)setMasterScopedIdentifier:(id)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (BOOL)supportsDeletion;
- (BOOL)supportsResourceType:(unsigned long long)arg1;
- (BOOL)supportsResources;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (BOOL)validateChangeWithError:(id *)arg1;
- (BOOL)validateFullRecord;
- (BOOL)validateRecordForTracker:(id)arg1;

@end

