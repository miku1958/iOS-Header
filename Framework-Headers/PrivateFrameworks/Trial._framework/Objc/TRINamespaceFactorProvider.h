//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Trial/TRINamespaceFactorProviding-Protocol.h>

@class NSString;
@protocol TRIFactorLevelCaching;

@interface TRINamespaceFactorProvider : NSObject <TRINamespaceFactorProviding>
{
    NSString *_namespaceName;
    NSString *_treatmentId;
    unsigned int _namespaceVersion;
    unsigned int _namespaceCompatibilityVersion;
    id<TRIFactorLevelCaching> _factorLevels;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned int namespaceCompatibilityVersion;
@property (readonly, nonatomic) NSString *namespaceName; // @synthesize namespaceName=_namespaceName;
@property (readonly, nonatomic) unsigned int namespaceVersion;
@property (readonly) Class superclass;

+ (id)_assetFilenameForFactor:(id)arg1;
+ (id)factorLevelsWithTreatmentData:(id)arg1 referencePath:(id)arg2 filteredByNamespaceName:(id)arg3 outTreatmentId:(id *)arg4 error:(id *)arg5;
+ (id)factorProviderWithNamespaceDescriptor:(id)arg1 asClientProcess:(BOOL)arg2;
+ (id)factorProviderWithNamespaceId:(unsigned int)arg1 directory:(id)arg2;
+ (id)factorProviderWithNamespaceName:(id)arg1 directory:(id)arg2;
+ (id)pathForFactor:(id)arg1 directory:(id)arg2;
- (void).cxx_destruct;
- (id)_copyAssetsToDirectory:(id)arg1;
- (id)factorLevels;
- (id)initWithNamespaceName:(id)arg1 namespaceVersion:(unsigned int)arg2 namespaceCompatibilityVersion:(unsigned int)arg3 factorLevels:(id)arg4 treatmentId:(id)arg5;
- (id)initWithNamespaceName:(id)arg1 treatmentData:(id)arg2 namespaceVersion:(unsigned int)arg3 namespaceCompatibilityVersion:(unsigned int)arg4 referencePath:(id)arg5 error:(id *)arg6;
- (id)levelForFactor:(id)arg1;
- (unsigned int)namespaceId;
- (id)overlayLevelsFromFactorProvider:(id)arg1;
- (BOOL)overwriteItemAtPath:(id)arg1 withItemAtPath:(id)arg2 error:(id *)arg3;
- (id)rolloutId;
- (BOOL)saveToPath:(id)arg1 copyAssets:(BOOL)arg2;
- (id)treatmentId;

@end

