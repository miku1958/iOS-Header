//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPassFooterView;

@protocol PKPassFooterViewDelegate <NSObject>
- (BOOL)isPassFooterViewInGroup:(PKPassFooterView *)arg1;
- (void)passFooterViewDidChangeCoachingState:(PKPassFooterView *)arg1;
- (void)passFooterViewDidChangeUserIntentRequirement:(PKPassFooterView *)arg1;
- (unsigned long long)suppressedContentForPassFooter:(PKPassFooterView *)arg1;

@optional
- (void)passFooterViewDidChangePileSuppressionRequirement:(PKPassFooterView *)arg1;
@end

