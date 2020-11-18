//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class BPSWatchView, NSString, PBBridgeAssetsManager, UIImageView;

@interface BPSRemoteWatchView : UIView
{
    NSString *_advertisingName;
    PBBridgeAssetsManager *_assetManager;
    BPSWatchView *_watch;
    UIImageView *_watchScreen;
    unsigned long long _style;
}

@property (copy, nonatomic) NSString *advertisingName; // @synthesize advertisingName=_advertisingName;
@property (strong, nonatomic) PBBridgeAssetsManager *assetManager; // @synthesize assetManager=_assetManager;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (strong, nonatomic) BPSWatchView *watch; // @synthesize watch=_watch;
@property (strong, nonatomic) UIImageView *watchScreen; // @synthesize watchScreen=_watchScreen;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setAdvertisingName:(id)arg1 andStyle:(unsigned long long)arg2;

@end
