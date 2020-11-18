//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/CRKInteractiveCardSectionViewController.h>

#import <CardKit/SFFeedbackListener-Protocol.h>

@class NSString, SFAudioPlaybackCardSection, UIView;
@protocol SearchUICardSectionViewUpdatable;

@interface CRKAudioPlaybackCardSectionViewController : CRKInteractiveCardSectionViewController <SFFeedbackListener>
{
}

@property (strong, nonatomic) SFAudioPlaybackCardSection *cardSection; // @dynamic cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView<SearchUICardSectionViewUpdatable> *view; // @dynamic view;

+ (id)cardSectionClasses;
- (void)_performCommands:(id)arg1 applyingUserInfo:(id)arg2;
- (void)didEngageCardSection:(id)arg1;
- (void)eventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;

@end
