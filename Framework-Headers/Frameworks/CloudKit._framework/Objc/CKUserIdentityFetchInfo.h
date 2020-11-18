//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, NSString;

@interface CKUserIdentityFetchInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_emailAddress;
    CKRecordID *_recordID;
}

@property (copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

