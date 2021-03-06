//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIBarAppearance.h>

#import <UIKitCore/_UIBarButtonItemAppearanceChangeObserver-Protocol.h>

@class NSDictionary, NSString, UIBarButtonItemAppearance, UIImage, _UINavTitleAppearanceData;

@interface UINavigationBarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver>
{
    _UINavTitleAppearanceData *_barTitleData;
    UIBarButtonItemAppearance *_buttonAppearance;
    UIBarButtonItemAppearance *_doneButtonAppearance;
    UIBarButtonItemAppearance *_backButtonAppearance;
}

@property (copy, nonatomic) UIBarButtonItemAppearance *backButtonAppearance; // @synthesize backButtonAppearance=_backButtonAppearance;
@property (readonly, nonatomic) UIImage *backIndicatorImage;
@property (readonly, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property (copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance; // @synthesize buttonAppearance=_buttonAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance; // @synthesize doneButtonAppearance=_doneButtonAppearance;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes;
@property (readonly) Class superclass;
@property (nonatomic) struct UIOffset titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_backButtonAppearance;
- (id)_backButtonAppearanceData;
- (void)_barButtonItemAppearanceChangedItemData:(id)arg1 toItemData:(id)arg2 fromItemData:(id)arg3;
- (void)_barButtonItemDataChanged:(id)arg1;
- (id)_barTitleData;
- (BOOL)_checkEqualTo:(id)arg1;
- (void)_completeInit;
- (void)_copyFromAppearance:(id)arg1;
- (void)_decodeFromCoder:(id)arg1;
- (void)_describeInto:(id)arg1;
- (id)_doneButtonAppearance;
- (id)_doneButtonAppearanceData;
- (unsigned long long)_hashInto:(unsigned long long)arg1;
- (id)_plainButtonAppearance;
- (id)_plainButtonAppearanceData;
- (void)_setupDefaults;
- (void)encodeWithCoder:(id)arg1;
- (void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2;

@end

