//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainer, NSDictionary, NSString;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _allowsCellularAccess;
    BOOL _longLived;
    BOOL _preferAnonymousRequests;
    BOOL _allowsBackgroundNetworking;
    BOOL _hasContainer;
    BOOL _hasAllowsCellularAccess;
    BOOL _hasLongLived;
    BOOL _hasTimeoutIntervalForRequest;
    BOOL _hasTimeoutIntervalForResource;
    BOOL _hasPreferAnonymousRequests;
    BOOL _hasAllowsBackgroundNetworking;
    BOOL _hasSourceApplicationBundleIdentifier;
    BOOL _hasSourceApplicationSecondaryIdentifier;
    BOOL _hasAdditionalRequestHTTPHeaders;
    BOOL _hasQualityOfService;
    CKContainer *_container;
    long long _qualityOfService;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSDictionary *_additionalRequestHTTPHeaders;
}

@property (strong, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property (nonatomic) BOOL allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property (nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property (strong, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (nonatomic) BOOL hasAdditionalRequestHTTPHeaders; // @synthesize hasAdditionalRequestHTTPHeaders=_hasAdditionalRequestHTTPHeaders;
@property (nonatomic) BOOL hasAllowsBackgroundNetworking; // @synthesize hasAllowsBackgroundNetworking=_hasAllowsBackgroundNetworking;
@property (nonatomic) BOOL hasAllowsCellularAccess; // @synthesize hasAllowsCellularAccess=_hasAllowsCellularAccess;
@property (nonatomic) BOOL hasContainer; // @synthesize hasContainer=_hasContainer;
@property (nonatomic) BOOL hasLongLived; // @synthesize hasLongLived=_hasLongLived;
@property (nonatomic) BOOL hasPreferAnonymousRequests; // @synthesize hasPreferAnonymousRequests=_hasPreferAnonymousRequests;
@property (nonatomic) BOOL hasQualityOfService; // @synthesize hasQualityOfService=_hasQualityOfService;
@property (nonatomic) BOOL hasSourceApplicationBundleIdentifier; // @synthesize hasSourceApplicationBundleIdentifier=_hasSourceApplicationBundleIdentifier;
@property (nonatomic) BOOL hasSourceApplicationSecondaryIdentifier; // @synthesize hasSourceApplicationSecondaryIdentifier=_hasSourceApplicationSecondaryIdentifier;
@property (nonatomic) BOOL hasTimeoutIntervalForRequest; // @synthesize hasTimeoutIntervalForRequest=_hasTimeoutIntervalForRequest;
@property (nonatomic) BOOL hasTimeoutIntervalForResource; // @synthesize hasTimeoutIntervalForResource=_hasTimeoutIntervalForResource;
@property (nonatomic, getter=isLongLived) BOOL longLived; // @synthesize longLived=_longLived;
@property (nonatomic) BOOL preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property (nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (strong, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property (strong, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property (nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property (nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)resolveAgainstGenericConfiguration:(id)arg1;

@end

