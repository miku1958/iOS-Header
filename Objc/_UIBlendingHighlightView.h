//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying-Protocol.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying-Protocol.h>

@class NSMutableArray, NSString;

@interface _UIBlendingHighlightView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
    NSMutableArray *_blendingViews;
    double _cornerRadius;
}

@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_blendingPressedView;
+ (id)_blendingSeparatorView;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)initWithCompositingBurnColor:(id)arg1 plusDColor:(id)arg2;
- (id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPressed:(BOOL)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;

@end

