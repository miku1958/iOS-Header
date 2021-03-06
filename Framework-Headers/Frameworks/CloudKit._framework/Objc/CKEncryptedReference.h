//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKEncryptedData.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKReference, NSString;

@interface CKEncryptedReference : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CKReference *reference;
@property (readonly) Class superclass;

- (id)_pReferenceFromReference:(id)arg1;
- (id)_recordIDFromPRecordIdentifier:(id)arg1;
- (id)_referenceFromPReference:(id)arg1;
- (id)initWithReference:(id)arg1;
- (id)value;

@end

