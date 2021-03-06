//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface ASCBorderView : UIView
{
    UIColor *_color;
}

@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (strong, nonatomic) NSString *cornerCurve;
@property (nonatomic) unsigned long long cornerMask;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBorderColor;

@end

