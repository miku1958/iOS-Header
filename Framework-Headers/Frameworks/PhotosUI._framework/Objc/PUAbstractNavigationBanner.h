//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol PUAbstractNavigationBannerDelegate;

__attribute__((visibility("hidden")))
@interface PUAbstractNavigationBanner : NSObject
{
    id<PUAbstractNavigationBannerDelegate> _delegate;
}

@property (weak, nonatomic) id<PUAbstractNavigationBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) UIView *view;

- (void).cxx_destruct;

@end

