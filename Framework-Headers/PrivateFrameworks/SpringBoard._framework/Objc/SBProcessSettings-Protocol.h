//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBProcessSettings;

@protocol SBProcessSettings <NSObject>
- (void)applyProcessSettings:(SBProcessSettings *)arg1;
- (BOOL)boolForProcessSetting:(long long)arg1;
- (void)clearProcessSettings;
- (SBProcessSettings *)copyProcessSettings;
- (long long)flagForProcessSetting:(long long)arg1;
- (id)objectForProcessSetting:(long long)arg1;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
@end
