//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Cards/CRFeedback-Protocol.h>

@protocol CRCard;

@protocol CRAsyncCardRequestFeedback <CRFeedback>

@property (strong, nonatomic) id<CRCard> baseCard;
@property (strong, nonatomic) id<CRCard> requestedCard;

@end
