//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPassFooterContentView;

@protocol PKPassFooterContentViewDelegate <NSObject>
- (void)passFooterContentViewDidBeginAuthenticating:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidChangeUserIntentRequirement:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidEndAuthenticating:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewRequestsSessionSuppression:(PKPassFooterContentView *)arg1;
@end
