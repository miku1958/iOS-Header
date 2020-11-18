//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CoreDAV/CoreDAVOptionsTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPrincipalSearchPropertySetTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString, NSURL;
@protocol CoreDAVGetAccountPropertiesTaskGroupDelegate;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate>
{
    NSURL *_principalURL;
    NSString *_displayName;
    NSURL *_resourceID;
    NSSet *_emailAddresses;
    NSSet *_collections;
    NSSet *_principalSearchProperties;
    BOOL _isExpandPropertyReportSupported;
    BOOL _fetchPrincipalSearchProperties;
    BOOL _shouldIgnoreHomeSetOnDifferentHost;
    NSMutableSet *_redirectHistory;
}

@property (readonly, nonatomic) NSSet *collections; // @synthesize collections=_collections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) NSSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property (nonatomic) BOOL fetchPrincipalSearchProperties; // @synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isExpandPropertyReportSupported; // @synthesize isExpandPropertyReportSupported=_isExpandPropertyReportSupported;
@property (readonly, nonatomic) NSSet *principalSearchProperties; // @synthesize principalSearchProperties=_principalSearchProperties;
@property (readonly, nonatomic) NSURL *principalURL; // @synthesize principalURL=_principalURL;
@property (readonly, nonatomic) NSURL *resourceID; // @synthesize resourceID=_resourceID;
@property (nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost; // @synthesize shouldIgnoreHomeSetOnDifferentHost=_shouldIgnoreHomeSetOnDifferentHost;
@property (readonly) Class superclass;

- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (void)_taskCompleted:(id)arg1 withError:(id)arg2;
- (void)coaxServerForPrincipalHeaders;
- (void)dealloc;
- (BOOL)forceOptionsRequest;
- (id)homeSet;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)processPrincipalHeaders:(id)arg1;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end

