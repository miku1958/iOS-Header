//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ScreenTimeUI/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface STCAPackageView : UIView <CAStateControllerDelegate>
{
    CAStateController *_stateController;
    NSMutableArray *_completionHandlers;
}

@property (readonly) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property (readonly, getter=isInitialState) BOOL initialState;
@property (readonly) CALayer *packageRootLayer;
@property (strong) CAStateController *stateController; // @synthesize stateController=_stateController;
@property (readonly, copy) NSString *stateName;

+ (id)keyPathsForValuesAffectingPackageRootLayer;
- (void).cxx_destruct;
- (void)_changeAppearance;
- (id)_getStateWithName:(id)arg1;
- (id)_newStateControllerWithSuperlayer:(id)arg1;
- (void)_stcaPackageViewCommonInit;
- (void)animateToInitialStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)animateToStateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setInitialState;
- (void)setStateName:(id)arg1;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3;
- (void)traitCollectionDidChange:(id)arg1;

@end

