//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem
{
    NSMutableSet *_responses;
    NSMutableSet *_successfulICS;
    NSMutableSet *_failedResponseItems;
}

@property (strong, nonatomic) NSMutableSet *failedResponseItems; // @synthesize failedResponseItems=_failedResponseItems;
@property (strong, nonatomic) NSMutableSet *responses; // @synthesize responses=_responses;
@property (strong, nonatomic) NSMutableSet *successfulICS; // @synthesize successfulICS=_successfulICS;

- (void).cxx_destruct;
- (void)addNewTopLevelItem:(id)arg1;
- (id)copyParseRules;
- (id)description;

@end

