//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSReportItem.h>

#import <ClassKit/NSCopying-Protocol.h>
#import <ClassKit/NSSecureCoding-Protocol.h>

@class CLSActivityReport, NSArray, NSDate, NSString;

@interface CLSHandoutReportItem : CLSReportItem <NSSecureCoding, NSCopying>
{
    BOOL _completed;
    int _type;
    int _granularity;
    NSString *_studentID;
    NSString *_classID;
    NSString *_handoutID;
    NSString *_attachmentID;
    NSString *_reportID;
    NSDate *_startDate;
    NSDate *_endDate;
    CLSActivityReport *_primaryActivityReport;
    NSArray *_additionalActivityReports;
}

@property (copy, nonatomic) NSArray *additionalActivityReports; // @synthesize additionalActivityReports=_additionalActivityReports;
@property (copy, nonatomic) NSString *attachmentID; // @synthesize attachmentID=_attachmentID;
@property (copy, nonatomic) NSString *classID; // @synthesize classID=_classID;
@property (nonatomic, getter=isCompleted) BOOL completed; // @synthesize completed=_completed;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (nonatomic) int granularity; // @synthesize granularity=_granularity;
@property (copy, nonatomic) NSString *handoutID; // @synthesize handoutID=_handoutID;
@property (copy, nonatomic) CLSActivityReport *primaryActivityReport; // @synthesize primaryActivityReport=_primaryActivityReport;
@property (copy, nonatomic) NSString *reportID; // @synthesize reportID=_reportID;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (copy, nonatomic) NSString *studentID; // @synthesize studentID=_studentID;
@property (nonatomic) int type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)add:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)scalarMultiply:(double)arg1;

@end

