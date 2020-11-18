//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKServerChangeToken.h>

#import <HomeKitBackingStore/HMBModelObjectStorage-Protocol.h>

@class NSString;

@interface CKServerChangeToken (HMB) <HMBModelObjectStorage>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *hmbDescription;
@property (readonly) Class superclass;

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
@end
