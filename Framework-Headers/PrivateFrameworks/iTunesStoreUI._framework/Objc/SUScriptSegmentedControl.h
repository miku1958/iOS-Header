//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSNumber, NSString, SUSegmentedControl, SUStorePageViewController;

@interface SUScriptSegmentedControl : SUScriptObject
{
    NSArray *_segments;
    long long _style;
}

@property (readonly, nonatomic) SUSegmentedControl *activeSegmentedControl;
@property (copy) NSString *cancelButtonTitle;
@property (readonly) unsigned long long controlStateDisabled;
@property (readonly) unsigned long long controlStateHighlighted;
@property (readonly) unsigned long long controlStateNormal;
@property (readonly) unsigned long long controlStateSelected;
@property long long maximumNumberOfItems;
@property double maximumWidth;
@property (copy) NSString *moreListTitle;
@property (strong, nonatomic) SUSegmentedControl *nativeSegmentedControl;
@property (readonly, nonatomic) long long nativeSelectedIndex;
@property (readonly) NSNumber *noSegmentIndex;
@property (readonly, nonatomic) NSArray *rawSegments;
@property (strong) id segments;
@property (strong) NSNumber *selectedIndex;
@property (readonly) NSNumber *selectedSegmentIndex;
@property (copy) id showsMoreListAutomatically;
@property (readonly, nonatomic) SUStorePageViewController *storePageViewController;
@property (strong) NSString *style;
@property (copy) id tintColor;
@property long long tintStyle;
@property (readonly) long long tintStyleDark;
@property (readonly) long long tintStyleDefault;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (id)_className;
- (id)_newNativeSegmentedControl;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (void)_reloadViewControllerPageSectionGroup;
- (long long)_sectionsStyleForString:(id)arg1;
- (void)_setColor:(id)arg1 forTitleTextAttribute:(id)arg2 controlState:(unsigned long long)arg3;
- (void)_setRawSegments:(id)arg1;
- (id)attributeKeys;
- (void)dealloc;
- (void)hideMoreListAnimated:(BOOL)arg1;
- (id)initWithPageSectionGroup:(id)arg1;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)newPageSectionGroup;
- (id)scriptAttributeKeys;
- (void)setTitleColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)showMoreListAnimated:(BOOL)arg1;
- (void)showPopoverController:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(BOOL)arg3;
- (id)titleColorForControlState:(unsigned long long)arg1;
- (id)titleShadowColorForControlState:(unsigned long long)arg1;

@end
