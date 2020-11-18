//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUFontDescriptor, MusicImageAccessoryButton, NSString, UIColor;
@protocol MusicActionableHeaderViewDelegate;

@interface MusicActionableHeaderView : UIView
{
    MPUFontDescriptor *_headerFontDescriptor;
    MusicImageAccessoryButton *_imageAccessoryButton;
    BOOL _actionable;
    NSString *_headerTitle;
    UIColor *_headerTitleColor;
    id<MusicActionableHeaderViewDelegate> _delegate;
    CDStruct_4a0565dd _actionableHeaderMetrics;
}

@property (nonatomic, getter=isActionable) BOOL actionable; // @synthesize actionable=_actionable;
@property (nonatomic) CDStruct_4a0565dd actionableHeaderMetrics; // @synthesize actionableHeaderMetrics=_actionableHeaderMetrics;
@property (weak, nonatomic) id<MusicActionableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property (strong, nonatomic) UIColor *headerTitleColor; // @synthesize headerTitleColor=_headerTitleColor;

+ (CDStruct_4a0565dd)actionableHeaderMetricsForContainerViewController:(id)arg1;
+ (CDStruct_4a0565dd)defaultActionableHeaderMetrics;
+ (double)heightForTraitCollection:(id)arg1;
+ (double)heightForTraitCollection:(id)arg1 withActionableHeaderMetrics:(CDStruct_4a0565dd)arg2;
- (void).cxx_destruct;
- (void)_handleButtonTapped:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_headerTitleColorDidChange;
- (void)_updateHeaderAttributedText;
- (void)_updateHeaderFontDescriptor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
