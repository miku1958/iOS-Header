//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FamilyCircleUI/FAInviteViewProtocol-Protocol.h>

@class NSString, UILabel;

@interface FAChildTransferInviteView : UIView <FAInviteViewProtocol>
{
    UILabel *_titleLabel;
    UILabel *_primaryLabel;
    UILabel *_detailsLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (double)_heightForTitle:(id)arg1 width:(double)arg2;
- (id)_labelWithCenteredText:(id)arg1;
- (double)desiredHeightForWidth:(double)arg1;
- (id)initWithInvite:(id)arg1;
- (void)layoutSubviews;

@end
