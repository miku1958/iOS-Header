//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKSubscription.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>
{
}

@property (copy, nonatomic) NSString *recordType; // @dynamic recordType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSubscriptionID:(id)arg1;

@end

