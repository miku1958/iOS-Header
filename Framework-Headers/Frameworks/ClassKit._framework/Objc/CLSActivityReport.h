//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSReportItem.h>

#import <ClassKit/NSCopying-Protocol.h>
#import <ClassKit/NSSecureCoding-Protocol.h>

@class CLSActivityReportItem, CLSAggregatedValue, NSArray, NSString;

@interface CLSActivityReport : CLSReportItem <NSSecureCoding, NSCopying>
{
    long long _contextType;
    NSString *_contextTopic;
    NSString *_contextTitle;
    NSString *_contextID;
    CLSAggregatedValue *_time;
    CLSAggregatedValue *_progress;
    CLSActivityReportItem *_primaryReportItem;
    NSArray *_additionalReportItems;
}

@property (copy, nonatomic) NSArray *additionalReportItems; // @synthesize additionalReportItems=_additionalReportItems;
@property (copy, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property (copy, nonatomic) NSString *contextTitle; // @synthesize contextTitle=_contextTitle;
@property (copy, nonatomic) NSString *contextTopic; // @synthesize contextTopic=_contextTopic;
@property (nonatomic) long long contextType; // @synthesize contextType=_contextType;
@property (copy, nonatomic) CLSActivityReportItem *primaryReportItem; // @synthesize primaryReportItem=_primaryReportItem;
@property (copy, nonatomic) CLSAggregatedValue *progress; // @synthesize progress=_progress;
@property (copy, nonatomic) CLSAggregatedValue *time; // @synthesize time=_time;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)add:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)scalarMultiply:(double)arg1;

@end

