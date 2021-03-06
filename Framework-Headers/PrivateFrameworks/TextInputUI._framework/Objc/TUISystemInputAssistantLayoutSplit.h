//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputUI/TUISystemInputAssistantLayout.h>

@interface TUISystemInputAssistantLayoutSplit : TUISystemInputAssistantLayout
{
    double _leftSplitWidth;
    double _rightSplitWidth;
}

@property (nonatomic) double leftSplitWidth; // @synthesize leftSplitWidth=_leftSplitWidth;
@property (nonatomic) double rightSplitWidth; // @synthesize rightSplitWidth=_rightSplitWidth;

- (void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4;
- (id)init;
- (void)layoutViewSet:(id)arg1 inBounds:(struct CGRect)arg2 forAssistantView:(id)arg3;
- (BOOL)usesUnifiedButtonBar;

@end

