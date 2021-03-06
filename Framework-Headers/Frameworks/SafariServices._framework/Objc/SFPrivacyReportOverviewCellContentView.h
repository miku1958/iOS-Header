//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SafariServices/SFPrivacyReportGridItem-Protocol.h>

@class NSString, UILabel;
@protocol SFPrivacyReportGridItemDelegate;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportOverviewCellContentView : UIView <SFPrivacyReportGridItem>
{
    UIView *_topHairline;
    UIView *_bottomHairline;
    UIView *_trailingHairline;
    BOOL _usesInsetStyle;
    id<SFPrivacyReportGridItemDelegate> _delegate;
    unsigned long long _gridPosition;
    UILabel *_reportTitleLabel;
    UILabel *_reportSubtitleLabel;
    double _maxWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SFPrivacyReportGridItemDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long gridPosition; // @synthesize gridPosition=_gridPosition;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property (readonly, nonatomic) UILabel *reportSubtitleLabel; // @synthesize reportSubtitleLabel=_reportSubtitleLabel;
@property (readonly, nonatomic) UILabel *reportTitleLabel; // @synthesize reportTitleLabel=_reportTitleLabel;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesInsetStyle; // @synthesize usesInsetStyle=_usesInsetStyle;

- (void).cxx_destruct;
- (void)_updateHairlinesIfNeeded;
- (void)_updateLayoutMargins;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

