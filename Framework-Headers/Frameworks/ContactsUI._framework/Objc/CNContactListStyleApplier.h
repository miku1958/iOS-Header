//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNContactListStyle;

__attribute__((visibility("hidden")))
@interface CNContactListStyleApplier : NSObject
{
    id<CNContactListStyle> _contactListStyle;
}

@property (readonly, nonatomic) double cellEstimatedHeight;
@property (readonly, nonatomic) id<CNContactListStyle> contactListStyle; // @synthesize contactListStyle=_contactListStyle;
@property (readonly, nonatomic) unsigned long long tableNoContactsAvailableStyle;
@property (readonly, nonatomic) BOOL usesInsetPlatterStyle;

+ (void)applyDefaultStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3;
- (void).cxx_destruct;
- (void)applyContactListStyleToBannerFootnote:(id)arg1 primaryAppearance:(BOOL)arg2;
- (void)applyContactListStyleToBannerTitle:(id)arg1 primaryAppearance:(BOOL)arg2;
- (void)applyContactListStyleToCell:(id)arg1;
- (void)applyContactListStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3;
- (void)applyContactListStyleToEmergencyIcon:(id)arg1 ofCell:(id)arg2;
- (void)applyContactListStyleToHeaderFooter:(id)arg1;
- (void)applyContactListStyleToMeContactLabel:(id)arg1 ofCell:(id)arg2;
- (void)applyContactListStyleToNavigationBar:(id)arg1;
- (void)applyContactListStyleToSearchBar:(id)arg1;
- (void)applyContactListStyleToSearchCell:(id)arg1;
- (void)applyContactListStyleToSelectedCell:(id)arg1;
- (void)applyContactListStyleToTableView:(id)arg1;
- (void)applyContactListStyleToText:(id)arg1 ofHighlightedCell:(id)arg2;
- (void)applyContactListStyleToText:(id)arg1 ofSearchResultCell:(id)arg2;
- (void)applyContactListStyleToText:(id)arg1 ofUnhighlightedCell:(id)arg2;
- (void)applySelectionTextStyleToCell:(id)arg1;
- (id)initWithContactListStyle:(id)arg1;

@end

