//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSHistorySession.h>

@class NSArray;

@interface WBSHistorySessionWithItems : WBSHistorySession
{
    NSArray *_items;
}

@property (readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSessionStartDate:(id)arg1;
- (id)initWithSessionStartDate:(id)arg1 items:(id)arg2;

@end

