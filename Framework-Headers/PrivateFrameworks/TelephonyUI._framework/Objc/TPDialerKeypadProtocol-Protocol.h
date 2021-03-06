//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/NSObject-Protocol.h>

@class UIView;
@protocol TPDialerKeypadDelegate, TPNumberPadButtonProtocol;

@protocol TPDialerKeypadProtocol <NSObject>
- (void)highlightKeyAtIndex:(long long)arg1;
- (long long)indexForHighlightedKey;
- (void)setDelegate:(id<TPDialerKeypadDelegate>)arg1;
- (void)setPlaysSounds:(BOOL)arg1;

@optional
- (void)performTapActionCancelForHighlightedKey;
- (void)performTapActionDownForHighlightedKey;
- (void)performTapActionEndForHighlightedKey;
- (void)replaceButton:(UIView<TPNumberPadButtonProtocol> *)arg1 atIndex:(unsigned long long)arg2;
@end

