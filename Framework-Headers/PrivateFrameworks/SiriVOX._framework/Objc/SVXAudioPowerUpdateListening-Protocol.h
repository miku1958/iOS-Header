//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class AFXPCWrapper;

@protocol SVXAudioPowerUpdateListening <NSObject>

@optional
- (void)audioPowerDidEndUpdateForType:(long long)arg1;
- (void)audioPowerWillBeginUpdateForType:(long long)arg1 wrapper:(AFXPCWrapper *)arg2;
@end
