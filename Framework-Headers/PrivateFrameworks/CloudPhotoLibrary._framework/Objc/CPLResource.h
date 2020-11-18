//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLResourceIdentity, CPLScopedIdentifier, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _backgroundDownloadTaskIdentifier;
    BOOL _canGenerateDerivative;
    CPLResourceIdentity *_identity;
    CPLScopedIdentifier *_itemScopedIdentifier;
    unsigned long long _resourceType;
    unsigned long long _sourceResourceType;
}

@property (nonatomic) BOOL canGenerateDerivative; // @synthesize canGenerateDerivative=_canGenerateDerivative;
@property (strong, nonatomic) CPLResourceIdentity *identity; // @synthesize identity=_identity;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) CPLScopedIdentifier *itemScopedIdentifier; // @synthesize itemScopedIdentifier=_itemScopedIdentifier;
@property (nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
@property (nonatomic) unsigned long long sourceResourceType; // @synthesize sourceResourceType=_sourceResourceType;

+ (unsigned long long)countOfResourceTypes;
+ (BOOL)cplShouldGenerateDerivatives;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (float)derivativeGenerationThreshold;
+ (id)descriptionForResourceType:(unsigned long long)arg1;
+ (void)enumerateResourceTypesWithBlock:(CDUnknownBlockType)arg1;
+ (BOOL)hasPriorityBoostForResourceType:(unsigned long long)arg1;
+ (unsigned long long)maxPixelSizeForResourceType:(unsigned long long)arg1;
+ (id)normalizedResourcesFromResources:(id)arg1 resourcePerResourceType:(id *)arg2;
+ (unsigned long long)resourceTypeFromShortDecription:(id)arg1;
+ (BOOL)resourceTypeSupportsResourceExpunge:(unsigned long long)arg1;
+ (BOOL)resourceTypeTrackedForUpload:(unsigned long long)arg1;
+ (id)shortDescriptionForResourceType:(unsigned long long)arg1;
+ (BOOL)shouldIgnoreResourceTypeOnUpload:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)_backgroundDownloadTaskIdentifier;
- (void)_setBackgroundDownloadTaskIdentifier:(unsigned long long)arg1;
- (id)bestFileNameForResource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)estimatedResourceSize;
- (unsigned long long)hash;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned long long)arg3;
- (id)initWithResourceIdentity:(id)arg1 itemScopedIdentifier:(id)arg2 resourceType:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTrackedForUpload;
- (id)redactedDescription;

@end
