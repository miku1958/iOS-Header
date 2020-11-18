//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PBBridgeProgressView : UIView
{
    double _currentProgress;
    UIImageView *_appleLogo;
    unsigned long long _style;
    unsigned long long _version;
}

@property (strong, nonatomic) UIImageView *appleLogo; // @synthesize appleLogo=_appleLogo;
@property (nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

- (void).cxx_destruct;
- (struct CGSize)_size;
- (double)_tickLength;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1 andVersion:(unsigned long long)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

