//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MessageUI/MFModernAddressAtomDelegate-Protocol.h>
#import <MessageUI/MFPassthroughViewProvider-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIColor, UILabel;
@protocol MFModernLabelledAtomListDelegate;

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate>
{
    void *_addressBook;
    NSMutableArray *_addressAtoms;
    NSString *_title;
    BOOL _labelVisible;
    unsigned int _needsReflow:1;
    double _previousWidth;
    UILabel *_label;
    UILabel *_lastBaselineDeceptionLabel;
    BOOL _primary;
    UIColor *_labelTextColor;
    double _lineSpacing;
    unsigned long long _numberOfRows;
    NSArray *_viewsToDodge;
    id<MFModernLabelledAtomListDelegate> _delegate;
    NSArray *_addresses;
}

@property (copy, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MFModernLabelledAtomListDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property (strong, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property (nonatomic, getter=isLabelVisible) BOOL labelVisible;
@property (nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property (readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property (nonatomic, getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *viewsToDodge; // @synthesize viewsToDodge=_viewsToDodge;

+ (double)atomLineHeight;
+ (id)defaultLabelFont;
+ (id)defaultLabelTextColor;
+ (id)primaryLabelFont;
+ (double)spaceBetweenColonAndFirstAtomNaturalEdge;
- (void).cxx_destruct;
- (struct CGRect)_frameForAtomAtIndex:(unsigned long long)arg1 withStartingPoint:(struct CGPoint)arg2 row:(inout unsigned long long *)arg3;
- (void)_reflow;
- (void)_reflowIfNeeded;
- (double)_remainingSpaceForRowAtPoint:(struct CGPoint)arg1;
- (void)_setNeedsReflow;
- (void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2;
- (id)addressAtoms;
- (void)addressBookDidChange:(id)arg1;
- (id)atomDisplayStrings;
- (struct CGPoint)baselinePointForRow:(unsigned long long)arg1;
- (void)crossFadeLabelVisibility:(BOOL)arg1 atomSeparatorStyle:(int)arg2 withAnimationCoordinator:(id)arg3;
- (void)dealloc;
- (void)enumerateAddressAtomsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 title:(id)arg2 addressBook:(const void *)arg3;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)labelFrame;
- (id)labelText;
- (void)layoutSubviews;
- (id)passthroughViews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setAddressAtomScale:(double)arg1;
- (void)setAddressAtomSeparatorStyle:(int)arg1;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)setAddressAtomsArePrimary:(BOOL)arg1;
- (void)setAddresses:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setAtomAlpha:(double)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setOverrideFont:(id)arg1;
- (id)title;
- (void)updateAtomsForVIP;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

