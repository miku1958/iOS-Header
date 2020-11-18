//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class NSDate, NSNumber, NSUUID;

@interface CMNatalieData : CMLogItem
{
    long long fRecordId;
    double fStartDate;
    long long fSession;
    double fMets;
    double fNatalies;
    double fBasalNatalies;
    NSUUID *fSourceId;
}

@property (readonly, nonatomic) NSNumber *basalNatalies;
@property (readonly, nonatomic) NSNumber *mets;
@property (readonly, nonatomic) NSNumber *natalies;
@property (readonly, nonatomic) long long recordId;
@property (readonly, nonatomic) long long session;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSDate *startDate;

+ (id)maxNatalieEntries;
+ (id)sessionName:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 recordId:(long long)arg2 session:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 sourceId:(id)arg7;

@end
