//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXComponentBehavior, SXComponentView, UIView;

@interface SXComponentBehaviorHandler : NSObject
{
    BOOL _isSetup;
    SXComponentView *_componentView;
    SXComponentBehavior *_behavior;
}

@property (readonly, nonatomic) SXComponentBehavior *behavior; // @synthesize behavior=_behavior;
@property (readonly, nonatomic) UIView *behaviorView;
@property (readonly, nonatomic) SXComponentView *componentView; // @synthesize componentView=_componentView;
@property (readonly, nonatomic) BOOL isSetup; // @synthesize isSetup=_isSetup;
@property (readonly, nonatomic) BOOL requiresContinuousUpdates;

- (void).cxx_destruct;
- (void)destroyWithBehaviorController:(id)arg1;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (void)setupWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;

@end

