//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDAssetTokenRequest;

__attribute__((visibility("hidden")))
@interface CKDAssetTokenRequestOperation : CKDDatabaseOperation
{
    CKDAssetTokenRequest *_assetTokenRequest;
}

@property (strong, nonatomic) CKDAssetTokenRequest *assetTokenRequest; // @synthesize assetTokenRequest=_assetTokenRequest;

- (void).cxx_destruct;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (int)operationType;

@end

