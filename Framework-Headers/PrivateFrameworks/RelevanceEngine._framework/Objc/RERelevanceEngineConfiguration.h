//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>
#import <RelevanceEngine/NSMutableCopying-Protocol.h>
#import <RelevanceEngine/REIndentedDescription-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSURL, REDataSourceLoader, REFeatureSet, RELocationManager;

@interface RERelevanceEngineConfiguration : NSObject <REIndentedDescription, NSCopying, NSMutableCopying>
{
    NSURL *_modelFileURL;
    NSURL *_baseModelFileURL;
    BOOL _allowsUpdatingModelFile;
    REDataSourceLoader *_dataSourceLoader;
    unsigned long long _trainingBehavior;
    RELocationManager *_locationManager;
    NSMutableArray *_sectionDescriptions;
    NSMutableArray *_interactionDescriptions;
    REFeatureSet *_featureSet;
    BOOL _wantsImmutableContent;
    NSString *_preferenceDomain;
    BOOL _allowsRemoteTraining;
    BOOL _wantsBackup;
    BOOL _ignoreDeviceLockState;
}

@property (readonly, nonatomic) BOOL allowsRemoteTraining;
@property (readonly, nonatomic) BOOL allowsUpdatingModelFile;
@property (readonly, copy, nonatomic) NSURL *baseModelFileURL;
@property (readonly, copy, nonatomic) REDataSourceLoader *dataSourceLoader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL ignoreDeviceLockState;
@property (readonly, copy, nonatomic) NSArray *interactionDescriptors;
@property (readonly, nonatomic) RELocationManager *locationManager;
@property (readonly, copy, nonatomic) NSURL *modelFileURL;
@property (readonly, nonatomic) NSString *preferenceDomain;
@property (readonly, copy, nonatomic) REFeatureSet *primaryFeatures;
@property (readonly, copy, nonatomic) NSArray *sectionDescriptors;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long trainingBehavior;
@property (readonly, nonatomic) BOOL wantsBackup;
@property (readonly, nonatomic) BOOL wantsImmutableContent;

+ (id)defaultConfiguration;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)initWithModelFileURL:(id)arg1 baseModelFileURL:(id)arg2 allowsUpdatingModelFile:(BOOL)arg3 dataSourceLoader:(id)arg4 trainingBehavior:(unsigned long long)arg5 sectionDescriptions:(id)arg6 locationManager:(id)arg7 featureSet:(id)arg8 wantsImmutableContent:(BOOL)arg9 preferenceDomain:(id)arg10 interactionDescriptions:(id)arg11 allowsRemoteTraining:(BOOL)arg12 wantsBackup:(BOOL)arg13 ignoreDeviceLockState:(BOOL)arg14;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

