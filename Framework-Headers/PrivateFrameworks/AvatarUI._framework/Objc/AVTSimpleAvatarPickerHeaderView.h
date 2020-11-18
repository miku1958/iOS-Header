//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class AVTCircularButton, NSString, UIImageSymbolConfiguration;

@interface AVTSimpleAvatarPickerHeaderView : UICollectionReusableView
{
    AVTCircularButton *_button;
    CDUnknownBlockType _buttonPressedBlock;
    NSString *_currentSymbolName;
    UIImageSymbolConfiguration *_plusSymbolConfiguration;
    UIImageSymbolConfiguration *_ellipsisSymbolConfiguration;
}

@property (readonly, nonatomic) AVTCircularButton *button; // @synthesize button=_button;
@property (copy, nonatomic) CDUnknownBlockType buttonPressedBlock; // @synthesize buttonPressedBlock=_buttonPressedBlock;
@property (strong, nonatomic) NSString *currentSymbolName; // @synthesize currentSymbolName=_currentSymbolName;
@property (strong, nonatomic) UIImageSymbolConfiguration *ellipsisSymbolConfiguration; // @synthesize ellipsisSymbolConfiguration=_ellipsisSymbolConfiguration;
@property (strong, nonatomic) UIImageSymbolConfiguration *plusSymbolConfiguration; // @synthesize plusSymbolConfiguration=_plusSymbolConfiguration;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupLayout;
- (void)updateForEditMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateWithSymbolNamed:(id)arg1 configuration:(id)arg2 animated:(BOOL)arg3;

@end
