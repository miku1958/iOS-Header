//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPIdentifierSet, NSMutableSet;

@interface MPModelObject : NSObject <NSCopying>
{
    BOOL _wasFullyInitialized;
    NSMutableSet *_initializedProperties;
    MPModelObject *_originalObject;
    MPIdentifierSet *_identifiers;
}

@property (readonly, copy, nonatomic) MPIdentifierSet *identifiers; // @synthesize identifiers=_identifiers;
@property (readonly, nonatomic) struct MPLibraryAddStatusObserverConfiguration libraryAddStatusObserverConfiguration;
@property (readonly, nonatomic) long long libraryRemovalSupportedOptions;
@property (readonly, nonatomic) MPIdentifierSet *originalIdentifierSet;

+ (void)initialize;
+ (id)mqf_requiredPlaybackProperties;
+ (void)performWithoutEnforcement:(CDUnknownBlockType)arg1;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (BOOL)supportsLibraryRemoval;
- (void).cxx_destruct;
- (void)appendIdentifiersToDescription:(id)arg1;
- (id)copyWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithType:(long long)arg1;
- (BOOL)hasLoadedValueForKey:(id)arg1;
- (BOOL)hasLoadedValuesForProperties:(id)arg1;
- (id)initWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)mediaItemPropertyValues;
- (void)mqf_configurePlaybackItemMetadata:(id)arg1;
- (id)mqf_newPlaybackItemMetadata;
- (id)mqf_playbackItemMetadataModelObject;
- (id)newKeepLocalStatusObserverConfiguration;

@end

