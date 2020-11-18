//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CABackdropLayer, NSArray, NSString, UIView;

@protocol CKSendAnimationContext <NSObject>

@property (copy, nonatomic) NSArray *animatableTextViews;
@property (copy, nonatomic) NSArray *animatableViews;
@property (strong, nonatomic) CABackdropLayer *backdropLayer;
@property (strong, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSArray *framesOfAddedChatItems;
@property (strong, nonatomic) NSString *impactIdentifier;
@property (nonatomic) BOOL isSender;
@property (strong, nonatomic) NSArray *messages;
@property (nonatomic) BOOL shouldRepeat;
@property (copy, nonatomic) NSArray *throwBalloonViewAttributesCollection;
@property (copy, nonatomic) NSArray *throwBalloonViews;

@end
