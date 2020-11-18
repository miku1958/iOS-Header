//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/NSFileProviderItem-Protocol.h>

@class NSNumber, NSString, NSURL;

@protocol NSFileProviderItem_Private <NSFileProviderItem>

@property (readonly, copy) NSString *containerDisplayName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property (readonly, copy) NSURL *fileURL;
@property (readonly, copy) NSString *fp_appContainerBundleIdentifier;
@property (readonly, copy) NSString *fp_domainIdentifier;
@property (readonly) BOOL fp_isContainer;
@property (readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property (readonly, getter=fp_isUbiquitous) BOOL fp_ubiquitous;
@property (readonly, copy) NSNumber *hasUnresolvedConflicts;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, copy) NSString *providerIdentifier;
@property (readonly, copy) NSString *sharingPermissions;


@optional
@end

