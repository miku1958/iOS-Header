//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PSCapacityBarData, UIColor;

@interface PSCapacityBarView : UIView
{
    PSCapacityBarData *_barData;
    UIColor *_barBackgroundColor;
    UIColor *_barSeparatorColor;
    UIColor *_barOtherDataColor;
}

@property (strong, nonatomic) UIColor *barBackgroundColor; // @synthesize barBackgroundColor=_barBackgroundColor;
@property (strong, nonatomic) PSCapacityBarData *barData; // @synthesize barData=_barData;
@property (strong, nonatomic) UIColor *barOtherDataColor; // @synthesize barOtherDataColor=_barOtherDataColor;
@property (strong, nonatomic) UIColor *barSeparatorColor; // @synthesize barSeparatorColor=_barSeparatorColor;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
