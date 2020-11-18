//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSAction.h>

@class NSObject, UNNotificationResponse;
@protocol OS_dispatch_semaphore;

@interface UINotificationResponseAction : BSAction
{
    NSObject<OS_dispatch_semaphore> *_decodeSemaphore;
    UNNotificationResponse *_cachedResponse;
}

@property (readonly, nonatomic) BOOL isDefaultAction;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, strong, nonatomic) UNNotificationResponse *response;

- (void).cxx_destruct;
- (long long)UIActionType;
- (id)_trigger;
- (id)initWithResponse:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end

