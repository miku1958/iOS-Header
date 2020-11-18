//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface DASharedCalendarContext : NSObject
{
    BOOL _shouldSyncCalendar;
    NSString *_calendarID;
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionBlock;
}

@property (readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property (readonly, nonatomic) NSString *calendarID; // @synthesize calendarID=_calendarID;
@property (readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic) BOOL shouldSyncCalendar; // @synthesize shouldSyncCalendar=_shouldSyncCalendar;

- (void).cxx_destruct;
- (void)finishedWithError:(id)arg1;
- (id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

