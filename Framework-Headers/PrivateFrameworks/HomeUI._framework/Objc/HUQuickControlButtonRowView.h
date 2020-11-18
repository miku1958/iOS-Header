//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlAuxiliaryView-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface HUQuickControlButtonRowView : UIView <HUQuickControlAuxiliaryView>
{
    long long _preferredContentAlignment;
    NSMutableArray *_mutableButtonViews;
    NSArray *_buttonConstraints;
}

@property (strong, nonatomic) NSArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property (readonly, copy, nonatomic) NSArray *buttonViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCenteredContent;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *mutableButtonViews; // @synthesize mutableButtonViews=_mutableButtonViews;
@property (nonatomic) long long preferredContentAlignment; // @synthesize preferredContentAlignment=_preferredContentAlignment;
@property (readonly) Class superclass;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_clearButtonConstraints;
- (void)addButtonView:(id)arg1;
- (id)initWithButtonViews:(id)arg1;
- (void)insertButtonView:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeButtonView:(id)arg1;
- (void)updateConstraints;

@end
