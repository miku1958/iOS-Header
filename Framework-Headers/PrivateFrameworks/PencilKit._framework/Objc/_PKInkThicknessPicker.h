//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString;

@interface _PKInkThicknessPicker : UIControl
{
    NSString *_inkIdentifier;
    double _weight;
    NSArray *_inks;
    NSArray *_thicknessButtons;
}

@property (strong, nonatomic) NSString *inkIdentifier; // @synthesize inkIdentifier=_inkIdentifier;
@property (strong, nonatomic) NSArray *inks; // @synthesize inks=_inks;
@property (strong, nonatomic) NSArray *thicknessButtons; // @synthesize thicknessButtons=_thicknessButtons;
@property (nonatomic) double weight; // @synthesize weight=_weight;

+ (struct CGSize)_buttonSize;
+ (long long)buttonIndexForIdentifier:(id)arg1 weight:(double)arg2 isRTLLanguage:(BOOL)arg3;
+ (double)weightForInkIdentifier:(id)arg1 buttonIndex:(long long)arg2 isRTLLanguage:(BOOL)arg3;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (id)initWithInkIdentifier:(id)arg1;
- (BOOL)isRTLLanguage;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

