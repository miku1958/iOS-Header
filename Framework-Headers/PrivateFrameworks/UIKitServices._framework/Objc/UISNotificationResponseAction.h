//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class UNNotificationResponse;

@interface UISNotificationResponseAction : BSAction
{
    UNNotificationResponse *_response;
}

@property (readonly, nonatomic) BOOL isDefaultAction;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, strong, nonatomic) UNNotificationResponse *response; // @synthesize response=_response;

- (void).cxx_destruct;
- (long long)UIActionType;
- (id)_trigger;
- (id)initWithResponse:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end

