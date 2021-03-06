//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface HUControlHostView : UIView
{
    BOOL _requiresWellDefinedSize;
    UIView *_controlView;
    NSArray *_controlConstraints;
}

@property (strong, nonatomic) NSArray *controlConstraints; // @synthesize controlConstraints=_controlConstraints;
@property (strong, nonatomic) UIView *controlView; // @synthesize controlView=_controlView;
@property (nonatomic) BOOL requiresWellDefinedSize; // @synthesize requiresWellDefinedSize=_requiresWellDefinedSize;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (id)initWithControlView:(id)arg1;
- (void)updateConstraints;

@end

