//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REMReminder;

@interface REMReminderAttachmentContext : NSObject
{
    REMReminder *_reminder;
}

@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *fileAttachments;
@property (readonly, nonatomic) NSArray *imageAttachments;
@property (strong, nonatomic) REMReminder *reminder; // @synthesize reminder=_reminder;
@property (readonly, nonatomic) NSArray *urlAttachments;

- (void).cxx_destruct;
- (id)attachmentsOfClass:(Class)arg1;
- (id)initWithReminder:(id)arg1;

@end

