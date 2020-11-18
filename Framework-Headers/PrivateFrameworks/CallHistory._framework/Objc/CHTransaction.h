//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallHistory/NSSecureCoding-Protocol.h>

@class NSData;

@interface CHTransaction : NSObject <NSSecureCoding>
{
    unsigned long long _transactionType;
    NSData *_record;
}

@property (readonly, nonatomic) NSData *record; // @synthesize record=_record;
@property (readonly, nonatomic) unsigned long long transactionType; // @synthesize transactionType=_transactionType;

+ (BOOL)supportsSecureCoding;
+ (id)toString:(unsigned long long)arg1;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)archivedDataWithError:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 andRecord:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 andRecord:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTransaction:(id)arg1;

@end

