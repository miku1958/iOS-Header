//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface OSAProxyConfiguration : NSObject
{
    NSString *_logPath;
    NSString *_identifier;
    NSString *_modelCode;
    NSString *_productVersion;
    NSString *_targetAudience;
    NSString *_buildVersion;
    NSString *_osTrain;
    NSString *_productBuildString;
    NSString *_productName;
    NSString *_productNameVersionBuildString;
    NSString *_productReleaseString;
    NSString *_uiCountryCode;
    NSString *_systemId;
    NSString *_serialNumber;
    NSString *_crashReporterKey;
    NSString *_awdReporterKey;
    NSString *_internalKey;
    NSString *_releaseType;
    NSString *_seedGroup;
    NSString *_experimentGroup;
    NSString *_automatedDeviceGroup;
    NSString *_automatedContextURL;
    NSDictionary *_currentTaskingIDByRouting;
}

@property (readonly) NSString *automatedContextURL; // @synthesize automatedContextURL=_automatedContextURL;
@property (readonly) NSString *automatedDeviceGroup; // @synthesize automatedDeviceGroup=_automatedDeviceGroup;
@property (readonly) NSString *awdReporterKey; // @synthesize awdReporterKey=_awdReporterKey;
@property (readonly) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property (readonly) NSString *crashReporterKey; // @synthesize crashReporterKey=_crashReporterKey;
@property (readonly) NSDictionary *currentTaskingIDByRouting; // @synthesize currentTaskingIDByRouting=_currentTaskingIDByRouting;
@property (readonly) NSString *experimentGroup; // @synthesize experimentGroup=_experimentGroup;
@property (readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) NSString *internalKey; // @synthesize internalKey=_internalKey;
@property (readonly) BOOL isInternalBridge;
@property (readonly) BOOL isProxy;
@property (readonly) NSString *logPath; // @synthesize logPath=_logPath;
@property (readonly) NSString *modelCode; // @synthesize modelCode=_modelCode;
@property (readonly) NSString *osTrain; // @synthesize osTrain=_osTrain;
@property (readonly) NSString *productName; // @synthesize productName=_productName;
@property (readonly) NSString *productNameVersionBuildString; // @synthesize productNameVersionBuildString=_productNameVersionBuildString;
@property (readonly) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property (readonly) NSString *releaseType; // @synthesize releaseType=_releaseType;
@property (readonly) NSString *seedGroup; // @synthesize seedGroup=_seedGroup;
@property (readonly) NSString *systemId; // @synthesize systemId=_systemId;
@property (readonly) NSString *targetAudience; // @synthesize targetAudience=_targetAudience;
@property (readonly) NSString *uiCountryCode; // @synthesize uiCountryCode=_uiCountryCode;

- (void).cxx_destruct;
- (id)assembleMetadataAt:(double)arg1 withOptions:(unsigned int)arg2;
- (id)description;
- (id)init:(id)arg1 fromMetadata:(id)arg2;
- (id)initFromPath:(id)arg1;
- (BOOL)isConfigEnabled:(id)arg1;
- (BOOL)isFile:(id)arg1 validForSubmission:(id)arg2 reasonableSize:(long long)arg3 to:(id)arg4 internalTypes:(id)arg5 result:(const char **)arg6;
- (id)metadata;
- (BOOL)usesLegacySubmission:(id)arg1;

@end

