//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MessageUI/MFModernAddressAtomDelegate-Protocol.h>
#import <MessageUI/MFPassthroughViewProvider-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, UIColor, UILabel;
@protocol MFModernLabelledAtomListDelegate;

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate>
{
    UILabel *_label;
    void *_addressBook;
    id<MFModernLabelledAtomListDelegate> _delegate;
    NSMutableArray *_addressAtoms;
    NSString *_title;
    UIColor *_labelTextColor;
    NSDictionary *_recipients;
    double _firstLineWidth;
    BOOL _usePadDisplayStyle;
    BOOL _labelVisible;
    unsigned int _needsReflow:1;
    unsigned int _isChangingFrame:1;
    UIView *_baselineView;
    BOOL _primary;
    unsigned long long _numberOfRows;
    double _lineSpacing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property (strong, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property (nonatomic, getter=isLabelVisible) BOOL labelVisible;
@property (nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property (readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property (nonatomic) BOOL primary; // @synthesize primary=_primary;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usePadDisplayStyle; // @synthesize usePadDisplayStyle=_usePadDisplayStyle;

+ (double)atomLineHeight;
+ (id)defaultLabelFont;
+ (id)defaultLabelTextColor;
+ (id)primaryLabelFont;
+ (double)spaceBetweenColonAndFirstAtomNaturalEdge;
- (void)_reflow;
- (void)_setNeedsReflow;
- (void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2;
- (id)addressAtoms;
- (void)addressBookDidChange:(id)arg1;
- (id)atomDisplayStrings;
- (struct CGPoint)baselinePointForRow:(unsigned long long)arg1;
- (void)crossFadeLabelVisibility:(BOOL)arg1 atomSeparatorStyle:(int)arg2 animationDuration:(double)arg3;
- (void)dealloc;
- (void)enumerateAddressAtomsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 title:(id)arg2 totalWidth:(double)arg3 firstLineWidth:(double)arg4 addresses:(id)arg5 arePhoneNumbers:(id)arg6 atomPresentationOptions:(unsigned long long)arg7 addressBook:(void *)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (struct CGRect)labelFrame;
- (id)labelText;
- (void)layoutSubviews;
- (id)passthroughViews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setAddressAtomScale:(double)arg1;
- (void)setAddressAtomSeparatorStyle:(int)arg1;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)setAtomAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstLineWidth:(double)arg1;
- (void)setFirstLineWidth:(double)arg1 reflow:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOpaque:(BOOL)arg1;
- (id)title;
- (void)updateAtomsForVIP;

@end
