//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSString *_bundleID;
    long long _discoverableTrinary;
}

@property (copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (nonatomic) long long discoverableTrinary; // @synthesize discoverableTrinary=_discoverableTrinary;

- (void).cxx_destruct;
- (long long)databaseScope;
- (id)generateRequestOperations;
- (id)init;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (BOOL)requiresTokenRegistration;
- (void)setDiscoverable:(BOOL)arg1;

@end

