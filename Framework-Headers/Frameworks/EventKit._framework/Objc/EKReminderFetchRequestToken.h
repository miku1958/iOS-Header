//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKFetchRequestToken-Protocol.h>
#import <EventKit/NSCopying-Protocol.h>

@class EKReminderStore;

__attribute__((visibility("hidden")))
@interface EKReminderFetchRequestToken : NSObject <EKFetchRequestToken, NSCopying>
{
    EKReminderStore *_reminderStore;
}

@property (readonly, weak, nonatomic) EKReminderStore *reminderStore; // @synthesize reminderStore=_reminderStore;

- (void).cxx_destruct;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReminderStore:(id)arg1;

@end
