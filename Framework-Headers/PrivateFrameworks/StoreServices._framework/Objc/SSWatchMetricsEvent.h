//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface SSWatchMetricsEvent : NSObject <NSCopying>
{
    NSString *_appExtensionVersion;
    NSString *_bundleIdentifier;
    NSString *_downloadVarietyID;
    unsigned long long _eventType;
    unsigned long long _installType;
    NSString *_model;
    NSString *_osVersion;
    NSString *_versionString;
    NSString *_watchGuid;
    NSString *_watchSerial;
    NSString *_watchSize;
    NSDate *_timestamp;
    NSNumber *_adamId;
    NSString *_cohortID;
    NSNumber *_pid;
    NSNumber *_appExternalVersionID;
    NSNumber *_purchaserDsid;
    NSNumber *_userDsid;
}

@property (copy, nonatomic) NSNumber *adamId; // @synthesize adamId=_adamId;
@property (copy, nonatomic) NSString *appExtensionVersion; // @synthesize appExtensionVersion=_appExtensionVersion;
@property (copy, nonatomic) NSNumber *appExternalVersionID; // @synthesize appExternalVersionID=_appExternalVersionID;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSString *cohortID; // @synthesize cohortID=_cohortID;
@property (copy, nonatomic) NSString *downloadVarietyID; // @synthesize downloadVarietyID=_downloadVarietyID;
@property (nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property (nonatomic) unsigned long long installType; // @synthesize installType=_installType;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property (copy, nonatomic) NSNumber *pid; // @synthesize pid=_pid;
@property (copy, nonatomic) NSNumber *purchaserDsid; // @synthesize purchaserDsid=_purchaserDsid;
@property (copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property (copy, nonatomic) NSNumber *userDsid; // @synthesize userDsid=_userDsid;
@property (copy, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property (copy, nonatomic) NSString *watchGuid; // @synthesize watchGuid=_watchGuid;
@property (copy, nonatomic) NSString *watchSerial; // @synthesize watchSerial=_watchSerial;
@property (copy, nonatomic) NSString *watchSize; // @synthesize watchSize=_watchSize;

- (void).cxx_destruct;
- (id)_appCohortID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)financeDictionaryRepresentation;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
