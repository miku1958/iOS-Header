//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFAlert.h>

@class NSArray, UIView, WFAlertPresentationSource;

@interface WFAlert (UIKitAdditions)

@property (strong, nonatomic) UIView *contentView;
@property (nonatomic) struct UIEdgeInsets contentViewPadding;
@property (readonly, nonatomic) NSArray *keyCommands;
@property (strong, nonatomic) WFAlertPresentationSource *presentationSource;

- (void)addKeyCommand:(id)arg1;
@end

