//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSearchForPhotosIntentExport-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSArray, NSString;

@interface INSearchForPhotosIntent : INIntent <INSearchForPhotosIntentExport>
{
}

@property (readonly, copy, nonatomic) NSString *albumName;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long excludedAttributes;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long includedAttributes;
@property (readonly, copy, nonatomic) CLPlacemark *locationCreated;
@property (readonly, copy, nonatomic) NSArray *peopleInPhoto;
@property (readonly, nonatomic) long long peopleInPhotoOperator;
@property (readonly, copy, nonatomic) NSArray *searchTerms;
@property (readonly, nonatomic) long long searchTermsOperator;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithDateCreated:(id)arg1 locationCreated:(id)arg2 albumName:(id)arg3 searchTerms:(id)arg4 includedAttributes:(unsigned long long)arg5 excludedAttributes:(unsigned long long)arg6 peopleInPhoto:(id)arg7;
- (id)parametersByName;
- (void)setAlbumName:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setExcludedAttributes:(unsigned long long)arg1;
- (void)setIncludedAttributes:(unsigned long long)arg1;
- (void)setLocationCreated:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
