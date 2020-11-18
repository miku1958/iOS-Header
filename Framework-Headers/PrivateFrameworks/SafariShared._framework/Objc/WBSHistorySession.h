//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface WBSHistorySession : NSObject
{
    NSDate *_startDate;
}

@property (readonly, nonatomic) BOOL isCurrentSession;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

+ (id)currentSession;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSessionStartDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

