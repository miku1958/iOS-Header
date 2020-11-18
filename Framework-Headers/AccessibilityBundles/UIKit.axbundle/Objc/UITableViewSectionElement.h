//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

#import <UIKit/UIAccessibilityElementMockViewDelegateProtocol-Protocol.h>

@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol>
{
    BOOL _isHeader;
    long long _section;
    NSMutableArray *_children;
}

@property (nonatomic) BOOL isHeader; // @synthesize isHeader=_isHeader;
@property (nonatomic) long long section; // @synthesize section=_section;

- (void).cxx_destruct;
- (id)_accessibilityAccessibleElementsInView:(id)arg1;
- (void)_accessibilityClearChildren;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityIsNotFirstElement;
- (void)_appendTextChildWithTitle:(id)arg1;
- (id)accessibilityChildren;
- (id)accessibilityContainerElements;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityScrollToVisible;
- (void)accessibilityScrollToVisibleWithChild:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isAccessibilityElement;
- (void)updateMockView:(id)arg1;

@end

