//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class MFComposeHeaderView;

@protocol MFComposeHeaderViewDelegate <NSObject>

@optional
- (void)composeHeaderView:(MFComposeHeaderView *)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeHeaderViewClicked:(MFComposeHeaderView *)arg1;
- (void)composeHeaderViewDidChangeValue:(MFComposeHeaderView *)arg1;
- (void)composeHeaderViewDidConfirmValue:(MFComposeHeaderView *)arg1;
@end

