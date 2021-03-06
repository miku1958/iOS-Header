//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUILabelStackTemplateView.h>

#import <SiriUI/SiriUITemplateView-Protocol.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol SiriUITemplatedView, SiriUITextTemplateModel;

@interface SiriUITextTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView>
{
    UIImageView *_chevronView;
    UILabel *_detailTextLabel;
    UIButton *_disclosureButton;
}

@property (strong, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property (weak) id<SiriUITextTemplateModel> dataSource; // @dynamic dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property (strong, nonatomic) UIButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<SiriUITemplatedView> templatedSuperview;

- (void).cxx_destruct;
- (void)_setupDisclosureButton;
- (void)addTargetForDisclosure:(id)arg1 action:(SEL)arg2;
- (id)initWithDataSource:(id)arg1;
- (void)layoutDetailText;
- (void)layoutSubviews;
- (void)reloadData;
- (void)removeTargetForDisclosure:(id)arg1 action:(SEL)arg2;
- (void)setupDisclosureIndicator;

@end

