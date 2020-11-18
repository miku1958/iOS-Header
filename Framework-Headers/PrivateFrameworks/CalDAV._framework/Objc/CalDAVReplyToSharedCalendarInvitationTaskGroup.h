//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPostTaskDelegate-Protocol.h>

@class CalDAVCalendarServerInviteNotificationItem, NSString, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>
{
    BOOL _acceptInvitation;
    NSURL *_sharedAs;
    CalDAVCalendarServerInviteNotificationItem *_invitation;
    NSURL *_calendarHomeURL;
}

@property (nonatomic) BOOL acceptInvitation; // @synthesize acceptInvitation=_acceptInvitation;
@property (strong, nonatomic) NSURL *calendarHomeURL; // @synthesize calendarHomeURL=_calendarHomeURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CalDAVCalendarServerInviteNotificationItem *invitation; // @synthesize invitation=_invitation;
@property (strong, nonatomic) NSURL *sharedAs; // @synthesize sharedAs=_sharedAs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generateReply;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithInvitation:(id)arg1 acceptInvitation:(BOOL)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
