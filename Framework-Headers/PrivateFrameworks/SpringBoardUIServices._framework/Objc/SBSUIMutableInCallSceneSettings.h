//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIMutableApplicationSceneSettings.h>

@interface SBSUIMutableInCallSceneSettings : UIMutableApplicationSceneSettings
{
    long long _inCallPresentationMode;
}

@property (nonatomic, getter=isAttachedToWindowedAccessory) BOOL attachedToWindowedAccessory;
@property (nonatomic) long long inCallPresentationMode; // @synthesize inCallPresentationMode=_inCallPresentationMode;
@property (nonatomic) struct CGRect windowedAccessoryCutoutFrameInScreen;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end

