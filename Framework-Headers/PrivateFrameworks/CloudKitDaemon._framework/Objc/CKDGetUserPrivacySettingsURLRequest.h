//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDPUserPrivacySettings;

__attribute__((visibility("hidden")))
@interface CKDGetUserPrivacySettingsURLRequest : CKDURLRequest
{
    CKDPUserPrivacySettings *_userPrivacySettings;
}

@property (strong, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // @synthesize userPrivacySettings=_userPrivacySettings;

- (void).cxx_destruct;
- (long long)databaseScope;
- (id)generateRequestOperations;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;

@end

