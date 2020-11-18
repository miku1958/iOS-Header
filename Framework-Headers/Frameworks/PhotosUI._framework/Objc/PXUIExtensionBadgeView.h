//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol PXUIExtensionBadgeViewDelegate;

@interface PXUIExtensionBadgeView : UIView
{
    id<PXUIExtensionBadgeViewDelegate> _delegate;
    long long _state;
    struct PXAssetBadgeInfo _badgeInfo;
}

@property (nonatomic) struct PXAssetBadgeInfo badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property (weak, nonatomic) id<PXUIExtensionBadgeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo)arg1;
- (void)setState:(long long)arg1;

@end
