//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (ICQueryComponents)

@property (readonly, nonatomic) NSString *ic_UTI;
@property (readonly, nonatomic) long long ic_fileSize;
@property (readonly, nonatomic) BOOL ic_isAppStoreURL;
@property (readonly, nonatomic) BOOL ic_isExcludedFromBackups;
@property (readonly, nonatomic) BOOL ic_isExcludedFromCloudBackups;
@property (readonly, nonatomic) BOOL ic_isMapURL;
@property (readonly, nonatomic) BOOL ic_isNewsURL;
@property (readonly, nonatomic) BOOL ic_isReachable;
@property (readonly, nonatomic) BOOL ic_isSupportedAsAttachment;
@property (readonly, nonatomic) BOOL ic_isURLAnInternetLocator;
@property (readonly, nonatomic) BOOL ic_isWebURL;
@property (readonly, nonatomic) BOOL ic_isiTunesURL;
@property (readonly, nonatomic) NSURL *ic_uniquedURL;

+ (id)ic_urlFromWeblocFileAtURL:(id)arg1;
- (id)ic_dedupedURLWithProhibitedNames:(id)arg1;
- (BOOL)ic_isSafeFileURLForAttachment;
- (void)ic_updateFlagToExcludeFromBackup:(BOOL)arg1;
- (id)queryComponents;
@end
