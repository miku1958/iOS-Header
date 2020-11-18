//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPIdentifierSet, NSMutableDictionary;

@interface MPModelObject : NSObject <NSCopying, NSSecureCoding>
{
    MPModelObject *_originalObject;
    NSMutableDictionary *_storage;
    BOOL _isFinalized;
    MPIdentifierSet *_identifiers;
}

@property (readonly, copy, nonatomic) MPIdentifierSet *identifiers; // @synthesize identifiers=_identifiers;
@property (readonly, nonatomic) struct MPLibraryAddStatusObserverConfiguration libraryAddStatusObserverConfiguration;
@property (readonly, nonatomic) long long libraryRemovalSupportedOptions;
@property (readonly, nonatomic) MPIdentifierSet *originalIdentifierSet;

+ (void)_indexProperties;
+ (BOOL)_lookupPropertyForSelector:(SEL)arg1 result:(CDUnknownBlockType)arg2;
+ (id)_modelKeyForPropertySelector:(SEL)arg1;
+ (void)initialize;
+ (void)performWithoutEnforcement:(CDUnknownBlockType)arg1;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
+ (BOOL)storeItemMetadataRequestNeedsPersonalizationForIdentifiers:(id)arg1;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (BOOL)supportsLibraryRemoval;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_isModelKey:(id)arg1;
- (id)contentItemCollectionInfo;
- (id)copyWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasLoadedValueForKey:(id)arg1;
- (BOOL)hasLoadedValuesForPropertySet:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (void)setValue:(id)arg1 forModelKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)storeItemMetadataRequestItemIdentifier;
- (BOOL)storeItemMetadataRequestNeedsPersonalization;
- (id)valueForModelKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end

