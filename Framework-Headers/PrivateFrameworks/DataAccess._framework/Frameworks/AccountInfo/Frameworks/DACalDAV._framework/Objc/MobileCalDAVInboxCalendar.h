//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagInboxCollectionSync;

@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar
{
    CalDiagInboxCollectionSync *_inboxCollectionSyncDiagnostics;
}

@property (strong, nonatomic) CalDiagInboxCollectionSync *inboxCollectionSyncDiagnostics; // @synthesize inboxCollectionSyncDiagnostics=_inboxCollectionSyncDiagnostics;

- (void).cxx_destruct;
- (void *)_copyEventActionWithURL:(id)arg1;
- (BOOL)_removeInvitationWithURL:(id)arg1;
- (id)allItemURLs;
- (BOOL)deleteResourcesAtURLs:(id)arg1;
- (id)etagsForItemURLs:(id)arg1;
- (id)initWithCalendarURL:(id)arg1 calendar:(void *)arg2 principal:(id)arg3 title:(id)arg4;
- (BOOL)isScheduleInbox;
- (void)recordDiagnosticsForAccountSync:(id)arg1;
- (void)setETag:(id)arg1 forInvitationAtURL:(id)arg2 uniqueIdentifier:(id)arg3;
- (BOOL)shouldCalendarBeHidden;
- (BOOL)updateResourcesFromServer:(id)arg1;

@end

