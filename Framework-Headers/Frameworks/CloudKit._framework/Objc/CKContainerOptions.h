//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKAccountOverrideInfo;

@interface CKContainerOptions : NSObject
{
    BOOL _captureResponseHTTPHeaders;
    BOOL _useZoneWidePCS;
    BOOL _wantsSiloedContext;
    BOOL _returnPCSMetadata;
    BOOL _useMMCSEncryptionV2;
    BOOL _bypassPCSEncryption;
    BOOL _enforceNamedOperationGroups;
    CKAccountOverrideInfo *_accountInfoOverride;
}

@property (copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property (nonatomic) BOOL bypassPCSEncryption; // @synthesize bypassPCSEncryption=_bypassPCSEncryption;
@property (nonatomic) BOOL captureResponseHTTPHeaders; // @synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders;
@property (nonatomic) BOOL enforceNamedOperationGroups; // @synthesize enforceNamedOperationGroups=_enforceNamedOperationGroups;
@property (nonatomic) BOOL returnPCSMetadata; // @synthesize returnPCSMetadata=_returnPCSMetadata;
@property (nonatomic) BOOL useMMCSEncryptionV2; // @synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2;
@property (nonatomic) BOOL useZoneWidePCS; // @synthesize useZoneWidePCS=_useZoneWidePCS;
@property (nonatomic) BOOL wantsSiloedContext; // @synthesize wantsSiloedContext=_wantsSiloedContext;

- (void).cxx_destruct;

@end

