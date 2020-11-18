//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUIconContentView.h>

#import <HomeUI/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

@interface HUCAPackageIconContentView : HUIconContentView <CAStateControllerDelegate>
{
    CAStateController *_stateController;
    CALayer *_rootLayer;
    NSMutableArray *_packageLayers;
    NSString *_stateName;
    struct CGSize _assetSize;
}

@property (nonatomic) struct CGSize assetSize; // @synthesize assetSize=_assetSize;
@property (strong, nonatomic) NSMutableArray *packageLayers; // @synthesize packageLayers=_packageLayers;
@property (strong, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property (strong, nonatomic) CAStateController *stateController; // @synthesize stateController=_stateController;
@property (strong, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;

- (void).cxx_destruct;
- (void)_applyModifiers;
- (void)_updateForRTL:(BOOL)arg1;
- (void)_updatePackage;
- (void)_updateStateAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setState:(id)arg1;
- (void)setState:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3;

@end
