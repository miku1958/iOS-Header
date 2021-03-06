//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ARUICountdownView, NSString;

@protocol ARUICountdownAnimation
+ (NSString *)identifier;
- (void)applyToCountdownView:(ARUICountdownView *)arg1 completion:(void (^)(void))arg2;
- (BOOL)cancelable;
- (double)delay;
- (double)duration;
- (NSString *)identifier;

@optional
- (unsigned long long)countdownStep;
@end

