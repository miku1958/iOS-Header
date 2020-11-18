//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerSetupInfo, NSDictionary, NSString;

@interface CKOperationInfo : NSObject <NSSecureCoding>
{
    BOOL _allowsCellularAccess;
    BOOL _preferAnonymousRequests;
    BOOL _allowsBackgroundNetworking;
    BOOL _isLongLived;
    BOOL _isOutstandingOperation;
    NSString *_operationID;
    NSString *_name;
    NSString *_parentSectionID;
    long long _qualityOfService;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_authPromptReason;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    CKContainerSetupInfo *_setupInfo;
    NSDictionary *_additionalRequestHTTPHeaders;
    NSString *_operationClass;
    NSString *_deviceIdentifier;
    NSDictionary *_MMCSRequestOptions;
    id _parentOperation;
}

@property (strong, nonatomic) NSDictionary *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property (strong, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property (nonatomic) BOOL allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property (nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property (strong, nonatomic) NSString *authPromptReason; // @synthesize authPromptReason=_authPromptReason;
@property (strong, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (nonatomic) BOOL isLongLived; // @synthesize isLongLived=_isLongLived;
@property (nonatomic) BOOL isOutstandingOperation; // @synthesize isOutstandingOperation=_isOutstandingOperation;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *operationClass; // @synthesize operationClass=_operationClass;
@property (strong, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property (weak, nonatomic) id parentOperation; // @synthesize parentOperation=_parentOperation;
@property (strong, nonatomic) NSString *parentSectionID; // @synthesize parentSectionID=_parentSectionID;
@property (nonatomic) BOOL preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property (nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (strong, nonatomic) CKContainerSetupInfo *setupInfo; // @synthesize setupInfo=_setupInfo;
@property (strong, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property (strong, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property (nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property (nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

