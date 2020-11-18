//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDContainerInfo, NSString;

__attribute__((visibility("hidden")))
@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest
{
    BOOL _needUserID;
    NSString *_containerIdentifier;
    CKDContainerInfo *_containerInfo;
}

@property (nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property (copy, nonatomic) CKDContainerInfo *containerInfo; // @synthesize containerInfo=_containerInfo;
@property (nonatomic) BOOL needUserID; // @synthesize needUserID=_needUserID;

- (void).cxx_destruct;
- (BOOL)allowsAnonymousAccount;
- (BOOL)allowsAuthedAccount;
- (BOOL)hasRequestBody;
- (id)initWithContainerIdentifier:(id)arg1;
- (long long)partitionType;
- (void)requestDidParseJSONObject:(id)arg1;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresSignature;
- (long long)serverType;
- (id)url;
- (BOOL)usesCloudKitAuthToken;
- (BOOL)usesiCloudAuthToken;

@end

