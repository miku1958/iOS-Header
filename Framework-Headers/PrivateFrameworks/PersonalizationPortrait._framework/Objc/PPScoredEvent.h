//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PPScoredEvent : NSObject <NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_title;
    double _score;
}

@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) double score; // @synthesize score=_score;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 score:(double)arg4;

@end

