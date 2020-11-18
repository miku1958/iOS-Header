//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface _CDDataCollectionSession : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSData *_salt;
    NSDate *_latestStartDate;
    NSDate *_lastCollectionDate;
    unsigned long long _batchNumber;
}

@property (readonly, nonatomic) unsigned long long batchNumber; // @synthesize batchNumber=_batchNumber;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSDate *lastCollectionDate; // @synthesize lastCollectionDate=_lastCollectionDate;
@property (readonly, copy, nonatomic) NSDate *latestStartDate; // @synthesize latestStartDate=_latestStartDate;
@property (readonly, copy, nonatomic) NSData *salt; // @synthesize salt=_salt;

+ (id)generateNewSession;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 salt:(id)arg2 latestStartDate:(id)arg3 lastCollectionDate:(id)arg4 batchNumber:(unsigned long long)arg5;
- (BOOL)isValidForCollectionDate:(id)arg1;
- (id)subsequentSessionWithlatestStartDate:(id)arg1 lastCollectionDate:(id)arg2;

@end
