//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSAction.h>

@class NSObject, UNNotification;
@protocol OS_dispatch_semaphore;

@interface UIWillPresentNotificationAction : BSAction
{
    NSObject<OS_dispatch_semaphore> *_decodeSemaphore;
    UNNotification *_cachedNotification;
    BOOL _cachedDeliverable;
}

@property (readonly, nonatomic) BOOL isDeliverable;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, strong, nonatomic) UNNotification *notification;

- (void).cxx_destruct;
- (long long)UIActionType;
- (void)_blockingWaitForDecodeSemaphore;
- (id)_trigger;
- (id)initWithNotification:(id)arg1 deliverable:(BOOL)arg2 timeout:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithNotification:(id)arg1 timeout:(double)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
