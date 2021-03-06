//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/CRCommandHandling-Protocol.h>
#import <CardKit/CRKEventResponding-Protocol.h>
#import <CardKit/CRKFeedbackDelegate-Protocol.h>

@protocol CRCard, CRKCardSectionViewSourcing, CRKCardViewControllerDelegate;

@protocol CRKCardViewControlling <CRKEventResponding, CRKFeedbackDelegate, CRCommandHandling>

@property (strong, nonatomic) id<CRCard> card;
@property (strong, nonatomic) id<CRKCardSectionViewSourcing> cardSectionViewSource;
@property (weak, nonatomic) id<CRKCardViewControllerDelegate> cardViewControllerDelegate;

- (double)contentHeightForWidth:(double)arg1;
@end

