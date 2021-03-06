//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DADaemonSupport/DADClientDelegate.h>

#import <DADaemonSupport/DAEventsCalendarSharingResponseConsumer-Protocol.h>

@class NSString;

@interface DADClientShareResponseDelegate : DADClientDelegate <DAEventsCalendarSharingResponseConsumer>
{
    NSString *_calendarID;
    NSString *_shareID;
}

@property (strong, nonatomic) NSString *calendarID; // @synthesize calendarID=_calendarID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *shareID; // @synthesize shareID=_shareID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doResponseWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (id)initWithAccountID:(id)arg1 client:(id)arg2 calendarID:(id)arg3;
- (void)reportAsJunk;
- (void)respondToShareRequestWithResponse:(long long)arg1;
- (void)shareResponseFinishedWithError:(id)arg1;

@end

