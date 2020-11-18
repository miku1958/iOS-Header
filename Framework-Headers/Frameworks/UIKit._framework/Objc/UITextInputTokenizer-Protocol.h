//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UITextPosition, UITextRange;

@protocol UITextInputTokenizer <NSObject>
- (BOOL)isPosition:(UITextPosition *)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (BOOL)isPosition:(UITextPosition *)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (UITextRange *)rangeEnclosingPosition:(UITextPosition *)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
@end

