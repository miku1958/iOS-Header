//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class NSDate, NSDictionary, NSUUID;

@interface HDFreezeQuantitySampleSeriesOperation : HDJournalableOperation
{
    NSUUID *_identifier;
    NSDictionary *_metadata;
    NSDate *_endDate;
    NSUUID *_frozenIdentifier;
    long long _freezeResult;
}

@property (readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) long long freezeResult; // @synthesize freezeResult=_freezeResult;
@property (readonly, copy, nonatomic) NSUUID *frozenIdentifier; // @synthesize frozenIdentifier=_frozenIdentifier;
@property (readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 endDate:(id)arg3;
- (BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;

@end
