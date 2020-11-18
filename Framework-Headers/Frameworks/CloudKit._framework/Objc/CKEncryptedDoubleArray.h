//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKEncryptedData.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CKEncryptedDoubleArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *doubleArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithDoubleArray:(id)arg1;
- (id)value;

@end

