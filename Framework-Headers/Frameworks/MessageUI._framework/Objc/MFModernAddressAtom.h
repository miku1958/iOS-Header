//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <MessageUI/MFModernAtomViewResembling-Protocol.h>

@class MFModernAtomView, NSString, UIFont;
@protocol MFModernAddressAtomDelegate;

@interface MFModernAddressAtom : UIControl <MFModernAtomViewResembling>
{
    id<MFModernAddressAtomDelegate> _delegate;
    MFModernAtomView *_atomView;
    void *_person;
    NSString *_fullAddress;
    NSString *_displayString;
    unsigned int _maxWidth;
    int _identifier;
    unsigned int _addressIsPhoneNumber:1;
    unsigned int _updatedABPerson:1;
    unsigned int _isDisplayStringFromAddressBook:1;
    void *_addressBook;
    NSString *_addressIdentifier;
    double _firstLineIndent;
}

@property (readonly, nonatomic) NSString *addressIdentifier;
@property (readonly, nonatomic) struct CGPoint baselinePoint; // @dynamic baselinePoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @dynamic edgeInsets;
@property (nonatomic) double firstLineIndent; // @synthesize firstLineIndent=_firstLineIndent;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesVIPIndicator; // @dynamic hidesVIPIndicator;
@property (nonatomic) BOOL isPrimaryAddressAtom; // @dynamic isPrimaryAddressAtom;
@property (readonly, nonatomic) long long numberOfLines;
@property (nonatomic) unsigned long long presentationOptions; // @dynamic presentationOptions;
@property (nonatomic) double scale; // @dynamic scale;
@property (nonatomic) BOOL separatorHidden; // @dynamic separatorHidden;
@property (nonatomic) BOOL separatorIsLeftAligned; // @dynamic separatorIsLeftAligned;
@property (nonatomic) int separatorStyle; // @dynamic separatorStyle;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIFont *titleFont; // @dynamic titleFont;

+ (id)copyDisplayStringForAddress:(id)arg1 usingAddressBook:(void *)arg2 useAbbreviatedName:(BOOL)arg3;
- (void *)ABPerson;
- (int)ABPropertyType;
- (void)_displayStringDidChange;
- (struct CGRect)_highlightBounds;
- (void)_updateABPerson;
- (void)_updateDisplayStringIncludingABPerson:(BOOL)arg1;
- (void)addressBookDidChange:(id)arg1;
- (id)contactWithKeysToFetch:(id)arg1;
- (void)dealloc;
- (id)displayString;
- (id)emailAddress;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (int)identifier;
- (id)initWithAddress:(id)arg1 presentationOptions:(unsigned long long)arg2 isPhoneNumber:(BOOL)arg3 maxWidth:(double)arg4 addressBook:(void *)arg5;
- (BOOL)isDisplayStringFromAddressBook;
- (void)layoutSubviews;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
- (id)presentationOptionsDescription;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setAddress:(id)arg1;
- (void)setAtomFont:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMaxWidth:(unsigned int)arg1;
- (void)setOpaque:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)unmodifiedAddressString;
- (id)viewForLastBaselineLayout;

@end

