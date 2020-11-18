//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPropFindTaskDelegate-Protocol.h>
#import <CalDAV/CoreDAVPropPatchTaskDelegate-Protocol.h>

@class CoreDAVPropFindTask, NSString, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate>
{
    int _state;
    NSURL *_inboxURL;
    NSURL *_urlToAdd;
    NSString *_suffixToFilterOut;
    CoreDAVPropFindTask *_fetchTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CoreDAVPropFindTask *fetchTask; // @synthesize fetchTask=_fetchTask;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSURL *inboxURL; // @synthesize inboxURL=_inboxURL;
@property (nonatomic) int state; // @synthesize state=_state;
@property (strong, nonatomic) NSString *suffixToFilterOut; // @synthesize suffixToFilterOut=_suffixToFilterOut;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSURL *urlToAdd; // @synthesize urlToAdd=_urlToAdd;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_startFetchFreeBusySet;
- (void)_startPropPatchWithURLs:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 urlToAdd:(id)arg3 suffixToFilterOut:(id)arg4 taskManager:(id)arg5;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)startTaskGroup;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end
