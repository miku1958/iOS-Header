//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKDiscoverUserInfosOperationInfo : CKOperationInfo <NSSecureCoding>
{
    BOOL _shouldDiscoverAllContacts;
    NSArray *_emails;
    NSArray *_userRecordIDs;
}

@property (strong, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property (nonatomic) BOOL shouldDiscoverAllContacts; // @synthesize shouldDiscoverAllContacts=_shouldDiscoverAllContacts;
@property (strong, nonatomic) NSArray *userRecordIDs; // @synthesize userRecordIDs=_userRecordIDs;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)activityStart;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
