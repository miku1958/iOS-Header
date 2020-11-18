//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <SpotlightUI/SPUISearchTableHeaderViewDelegate-Protocol.h>

@class NSMutableSet, NSString;
@protocol SPUISearchTableViewDelegate;

@interface SPUISearchTableView : UITableView <SPUISearchTableHeaderViewDelegate>
{
    BOOL _lastLayoutWasLandscape;
    BOOL _isTogglingSectionExpansion;
    id<SPUISearchTableViewDelegate> _searchDelegate;
    NSMutableSet *_expandedSections;
    CDUnknownBlockType _toggleSectionExpansionCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableSet *expandedSections; // @synthesize expandedSections=_expandedSections;
@property (readonly) unsigned long long hash;
@property BOOL isTogglingSectionExpansion; // @synthesize isTogglingSectionExpansion=_isTogglingSectionExpansion;
@property BOOL lastLayoutWasLandscape; // @synthesize lastLayoutWasLandscape=_lastLayoutWasLandscape;
@property (weak, nonatomic) id<SPUISearchTableViewDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType toggleSectionExpansionCompletion; // @synthesize toggleSectionExpansionCompletion=_toggleSectionExpansionCompletion;

- (void).cxx_destruct;
- (BOOL)allowsFooterViewsToFloat;
- (BOOL)allowsHeaderViewsToFloat;
- (void)clearExpansionState;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (struct UIEdgeInsets)layoutMargins;
- (void)layoutMarginsDidChange;
- (void)layoutSublayersOfLayer:(id)arg1;
- (BOOL)sectionIsExpanded:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)toggleExpansionForSection:(unsigned long long)arg1;
- (void)updateLayoutAfterDeferredRotationIfNeeded;
- (void)updateSeparatorForCell:(id)arg1 atIndexPath:(id)arg2;

@end

