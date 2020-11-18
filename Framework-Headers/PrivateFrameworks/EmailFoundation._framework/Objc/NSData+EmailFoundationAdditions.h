//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

#import <EmailFoundation/EFSQLBindable-Protocol.h>

@class EFSQLBinding, NSString;

@interface NSData (EmailFoundationAdditions) <EFSQLBindable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
@property (readonly, copy) NSString *ef_hexString;
@property (readonly, copy) NSData *ef_md5Digest;
@property (readonly, copy) NSData *ef_sha256Digest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)ef_sha256DigestWithSalts:(id)arg1;
@end
