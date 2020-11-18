//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <UIKit/UIKeyInput-Protocol.h>

@class DOMHTMLSelectElement, NSArray, NSString, UIWebSelectPopover;

__attribute__((visibility("hidden")))
@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput>
{
    DOMHTMLSelectElement *_selectionNode;
    NSArray *_cachedItems;
    NSArray *_groupsAndOptions;
    unsigned long long _singleSelectionIndex;
    unsigned long long _singleSelectionSection;
    BOOL _allowsMultipleSelection;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    UIWebSelectPopover *_popover;
}

@property (strong, nonatomic) NSArray *_cachedItems; // @synthesize _cachedItems;
@property (strong, nonatomic) NSArray *_groupsAndOptions; // @synthesize _groupsAndOptions;
@property (nonatomic) UIWebSelectPopover *_popover; // @synthesize _popover;
@property (strong, nonatomic) DOMHTMLSelectElement *_selectionNode; // @synthesize _selectionNode;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;

- (BOOL)_isEmpty;
- (id)_optionsForSection:(long long)arg1;
- (void)_setupGroupsAndOptions;
- (void)dealloc;
- (void)deleteBackward;
- (id)initWithDOMHTMLSelectNode:(id)arg1 cachedItems:(id)arg2 singleSelectionIndex:(unsigned long long)arg3 multipleSelection:(BOOL)arg4;
- (void)insertText:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end

