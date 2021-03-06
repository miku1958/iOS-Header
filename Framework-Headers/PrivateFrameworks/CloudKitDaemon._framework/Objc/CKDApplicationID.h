//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKSQLiteItem-Protocol.h>
#import <CloudKitDaemon/NSCopying-Protocol.h>
#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKDApplicationID : NSObject <NSSecureCoding, NSCopying, CKSQLiteItem>
{
    NSString *_applicationBundleIdentifier;
    NSString *_applicationBundleIdentifierOverrideForContainerAccess;
    NSString *_applicationBundleIdentifierOverrideForNetworkAttribution;
    NSString *_applicationBundleIdentifierOverrideForPushTopicGeneration;
    NSString *_applicationBundleIdentifierOverrideForTCC;
}

@property (copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // @synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // @synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration; // @synthesize applicationBundleIdentifierOverrideForPushTopicGeneration=_applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForTCC; // @synthesize applicationBundleIdentifierOverrideForTCC=_applicationBundleIdentifierOverrideForTCC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (id)initWithApplicationBundleIdentifier:(id)arg1 applicationBundleIdentifierOverrideForContainerAccess:(id)arg2 applicationBundleIdentifierOverrideForNetworkAttribution:(id)arg3 applicationBundleIdentifierOverrideForPushTopicGeneration:(id)arg4 applicationBundleIdentifierOverrideForTCC:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithSqliteRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)sqliteRepresentation;

@end

