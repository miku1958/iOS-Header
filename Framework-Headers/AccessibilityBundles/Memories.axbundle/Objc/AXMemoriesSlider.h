//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSString;

@interface AXMemoriesSlider : UIAccessibilityElement
{
    long long _sliderType;
    NSString *_selectedDescription;
}

@property (strong, nonatomic) NSString *selectedDescription; // @synthesize selectedDescription=_selectedDescription;
@property (nonatomic) long long sliderType; // @synthesize sliderType=_sliderType;

- (void).cxx_destruct;
- (id)_accessibilityUserTestingElementBaseType;
- (id)_axContainingCollectionView;
- (long long)_axContainingSelectedItem;
- (void)accessibilityDecrement;
- (struct CGRect)accessibilityFrame;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;

@end
