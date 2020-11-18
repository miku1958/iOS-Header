//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UpNextWidget/NSObject-Protocol.h>

@protocol NCWidgetProviding <NSObject>

@optional
- (void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(struct CGSize)arg2;
- (struct UIEdgeInsets)widgetMarginInsetsForProposedMarginInsets:(struct UIEdgeInsets)arg1;
- (void)widgetPerformUpdateWithCompletionHandler:(void (^)(unsigned long long))arg1;
@end
