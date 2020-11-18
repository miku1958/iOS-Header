//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HealthKitUI/HKGraphRenderer-Protocol.h>

@class NSString;
@protocol HKGraphRenderDelegate;

@interface HKGraphRenderView : UIView <HKGraphRenderer>
{
    id<HKGraphRenderDelegate> renderDelegate;
    struct CGRect _axisRect;
}

@property (nonatomic) struct CGRect axisRect; // @synthesize axisRect=_axisRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HKGraphRenderDelegate> renderDelegate; // @synthesize renderDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)drawPath:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 markerImage:(id)arg4 useGradientFill:(BOOL)arg5 clipToAxes:(BOOL)arg6;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawText:(id)arg1 atPoint:(struct CGPoint)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 textColor:(id)arg5 font:(id)arg6 clipToAxis:(BOOL)arg7;
- (void)fillRect:(struct CGRect)arg1 withTexture:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setNeedsRender;

@end

