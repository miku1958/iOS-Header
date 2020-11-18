//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBPair, _INPBString;

@protocol _INPBIntentMetadata <NSObject>

@property (nonatomic) BOOL backgroundLaunch;
@property (copy, nonatomic) NSString *categoryVerb;
@property (nonatomic) BOOL confirmed;
@property (strong, nonatomic) _INPBImageValue *defaultImageValue;
@property (nonatomic) int executionContext;
@property (nonatomic) BOOL hasBackgroundLaunch;
@property (readonly, nonatomic) BOOL hasCategoryVerb;
@property (nonatomic) BOOL hasConfirmed;
@property (readonly, nonatomic) BOOL hasDefaultImageValue;
@property (nonatomic) BOOL hasExecutionContext;
@property (nonatomic) BOOL hasIntentCategory;
@property (readonly, nonatomic) BOOL hasIntentDescription;
@property (readonly, nonatomic) BOOL hasIntentId;
@property (readonly, nonatomic) BOOL hasLaunchId;
@property (readonly, nonatomic) BOOL hasNanoLaunchId;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceIdsIdentifier;
@property (readonly, nonatomic) BOOL hasSuggestedInvocationPhrase;
@property (readonly, nonatomic) BOOL hasSystemExtensionBundleId;
@property (readonly, nonatomic) BOOL hasSystemUIExtensionBundleId;
@property (nonatomic) BOOL hasTriggerMethod;
@property (nonatomic) BOOL hasUserConfirmationRequired;
@property (readonly, nonatomic) BOOL hasUserUtterance;
@property (nonatomic) int intentCategory;
@property (copy, nonatomic) NSString *intentDescription;
@property (copy, nonatomic) NSString *intentId;
@property (copy, nonatomic) NSString *launchId;
@property (copy, nonatomic) NSString *nanoLaunchId;
@property (copy, nonatomic) NSString *originatingDeviceIdsIdentifier;
@property (copy, nonatomic) NSArray *parameterImages;
@property (readonly, nonatomic) unsigned long long parameterImagesCount;
@property (readonly, nonatomic) int *requiredEntitlements;
@property (readonly, nonatomic) unsigned long long requiredEntitlementsCount;
@property (copy, nonatomic) NSString *suggestedInvocationPhrase;
@property (copy, nonatomic) NSString *systemExtensionBundleId;
@property (copy, nonatomic) NSString *systemUIExtensionBundleId;
@property (nonatomic) int triggerMethod;
@property (nonatomic) BOOL userConfirmationRequired;
@property (strong, nonatomic) _INPBString *userUtterance;

+ (Class)parameterImagesType;
- (int)StringAsExecutionContext:(NSString *)arg1;
- (int)StringAsIntentCategory:(NSString *)arg1;
- (int)StringAsRequiredEntitlements:(NSString *)arg1;
- (int)StringAsTriggerMethod:(NSString *)arg1;
- (void)addParameterImages:(_INPBPair *)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (void)clearParameterImages;
- (void)clearRequiredEntitlements;
- (NSString *)executionContextAsString:(int)arg1;
- (NSString *)intentCategoryAsString:(int)arg1;
- (_INPBPair *)parameterImagesAtIndex:(unsigned long long)arg1;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (NSString *)requiredEntitlementsAsString:(int)arg1;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
- (NSString *)triggerMethodAsString:(int)arg1;
@end

