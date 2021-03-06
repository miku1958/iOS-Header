//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REMListChangeItem;

@interface REMListCalDAVNotificationContextChangeItem : NSObject
{
    REMListChangeItem *_listChangeItem;
}

@property (readonly, nonatomic) NSArray *calDAVNotifications;
@property (strong, nonatomic) REMListChangeItem *listChangeItem; // @synthesize listChangeItem=_listChangeItem;

- (void).cxx_destruct;
- (void)_addCalDAVNotification:(id)arg1;
- (id)addCalDAVNotificationWithUUIDString:(id)arg1 hostURL:(id)arg2 externalIdentifier:(id)arg3 externalModificationTag:(id)arg4;
- (void)clearCalDAVNotifications;
- (id)initWithListChangeItem:(id)arg1;
- (void)removeCalDAVNotication:(id)arg1;
- (void)updateCalDAVNotification:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end

