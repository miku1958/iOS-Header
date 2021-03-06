//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreDAVResourceTypeItem, CoreDAVSupportedReportSetItem, NSDictionary, NSSet, NSString, NSURL;

@interface CoreDAVContainer : NSObject
{
    BOOL _isUnauthenticated;
    NSURL *_url;
    CoreDAVResourceTypeItem *_resourceType;
    NSString *_containerTitle;
    NSSet *_privileges;
    NSString *_pushKey;
    NSDictionary *_pushTransports;
    NSURL *_resourceID;
    CoreDAVSupportedReportSetItem *_supportedReportSetItem;
    NSString *_quotaAvailable;
    NSString *_quotaUsed;
    NSURL *_owner;
    NSURL *_addMemberURL;
    NSDictionary *_bulkRequests;
    NSString *_syncToken;
}

@property (strong, nonatomic) NSURL *addMemberURL; // @synthesize addMemberURL=_addMemberURL;
@property (strong, nonatomic) NSDictionary *bulkRequests; // @synthesize bulkRequests=_bulkRequests;
@property (strong, nonatomic) NSString *containerTitle; // @synthesize containerTitle=_containerTitle;
@property (readonly, nonatomic) BOOL hasBindPrivileges;
@property (readonly, nonatomic) BOOL hasReadPrivileges;
@property (readonly, nonatomic) BOOL hasUnbindPrivileges;
@property (readonly, nonatomic) BOOL hasWriteContentPrivileges;
@property (readonly, nonatomic) BOOL hasWritePropertiesPrivileges;
@property (readonly, nonatomic) BOOL isPrincipal;
@property (nonatomic) BOOL isUnauthenticated; // @synthesize isUnauthenticated=_isUnauthenticated;
@property (strong, nonatomic) NSURL *owner; // @synthesize owner=_owner;
@property (strong, nonatomic) NSSet *privileges; // @synthesize privileges=_privileges;
@property (readonly, nonatomic) NSSet *privilegesAsStringSet;
@property (strong, nonatomic) NSString *pushKey; // @synthesize pushKey=_pushKey;
@property (strong, nonatomic) NSDictionary *pushTransports; // @synthesize pushTransports=_pushTransports;
@property (strong, nonatomic) NSString *quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;
@property (strong, nonatomic) NSString *quotaUsed; // @synthesize quotaUsed=_quotaUsed;
@property (strong, nonatomic) NSURL *resourceID; // @synthesize resourceID=_resourceID;
@property (strong, nonatomic) CoreDAVResourceTypeItem *resourceType; // @synthesize resourceType=_resourceType;
@property (readonly, nonatomic) NSSet *resourceTypeAsStringSet;
@property (strong, nonatomic) CoreDAVSupportedReportSetItem *supportedReportSetItem; // @synthesize supportedReportSetItem=_supportedReportSetItem;
@property (readonly, nonatomic) NSSet *supportedReports;
@property (readonly, nonatomic) NSSet *supportedReportsAsStringSet;
@property (readonly, nonatomic) BOOL supportsPrincipalPropertySearchReport;
@property (readonly, nonatomic) BOOL supportsSyncCollectionReport;
@property (strong, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

+ (id)convertPushTransportsForNSServerNotificationCenter:(id)arg1;
+ (id)copyPropertyMappingsForParser;
- (void).cxx_destruct;
- (BOOL)_anyPrivilegesMatches:(CDUnknownBlockType)arg1;
- (void)applyParsedProperties:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 andProperties:(id)arg2;
- (void)postProcessWithResponseHeaders:(id)arg1;

@end

