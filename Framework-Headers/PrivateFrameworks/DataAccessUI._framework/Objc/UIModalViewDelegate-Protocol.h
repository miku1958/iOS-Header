//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccessUI/NSObject-Protocol.h>

@class UIModalView;

@protocol UIModalViewDelegate <NSObject>

@optional
- (void)didPresentModalView:(UIModalView *)arg1;
- (void)modalView:(UIModalView *)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)modalView:(UIModalView *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)modalView:(UIModalView *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)modalViewCancel:(UIModalView *)arg1;
- (void)willPresentModalView:(UIModalView *)arg1;
@end
