//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKModifySubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
}

@property (strong, nonatomic) NSArray *subscriptionIDsToDelete; // @synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete;
@property (strong, nonatomic) NSArray *subscriptionsToSave; // @synthesize subscriptionsToSave=_subscriptionsToSave;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

