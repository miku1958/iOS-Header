//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSDate, NSString;
@protocol NSSecureCoding;

@interface _HDKeyValueJournalEntry : HDJournalEntry
{
    id<NSSecureCoding> _value;
    NSString *_key;
    NSString *_domain;
    long long _category;
    long long _provenance;
    NSDate *_modificationDate;
    long long _updatePolicy;
}

@property (readonly, nonatomic) long long category; // @synthesize category=_category;
@property (readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property (readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property (readonly, nonatomic) long long provenance; // @synthesize provenance=_provenance;
@property (readonly, nonatomic) long long updatePolicy; // @synthesize updatePolicy=_updatePolicy;
@property (readonly, nonatomic) id<NSSecureCoding> value; // @synthesize value=_value;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 updatePolicy:(long long)arg6 modificationDate:(id)arg7;

@end
