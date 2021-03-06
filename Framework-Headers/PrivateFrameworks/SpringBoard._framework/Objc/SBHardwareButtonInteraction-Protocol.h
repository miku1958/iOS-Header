//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBHardwareButtonInteraction <NSObject>

@optional
- (BOOL)consumeDoublePressDown;
- (BOOL)consumeDoublePressUp;
- (BOOL)consumeInitialPressDown;
- (BOOL)consumeInitialPressUp;
- (BOOL)consumeLongPress;
- (BOOL)consumeSecondPressDown;
- (BOOL)consumeSinglePressDown;
- (BOOL)consumeSinglePressUp;
- (BOOL)consumeTriplePressUp;
- (BOOL)disallowsDoublePressForReason:(id *)arg1;
- (BOOL)disallowsLongPressForReason:(id *)arg1;
- (BOOL)disallowsSinglePressForReason:(id *)arg1;
- (BOOL)disallowsTriplePressForReason:(id *)arg1;
- (void)observeFinalPressUp;
- (void)observeLongPressCanceled;
- (void)observeSinglePressDidFail;
@end

