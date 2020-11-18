//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class GKCollectionViewDataSource, NSMutableArray, UIButton;

@interface GKButtonView : UICollectionReusableView
{
    UIButton *_button;
    SEL _action;
    NSMutableArray *_buttonConstraints;
    GKCollectionViewDataSource *_dataSource;
}

@property (nonatomic) SEL action; // @synthesize action=_action;
@property (strong, nonatomic) UIButton *button; // @synthesize button=_button;
@property (strong, nonatomic) NSMutableArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property (strong, nonatomic) GKCollectionViewDataSource *dataSource; // @synthesize dataSource=_dataSource;

+ (void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2;
+ (BOOL)requiresConstraintBasedLayout;
- (void)applyLayoutAttributes:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;

@end
