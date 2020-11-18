//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WebKit/UIKeyInput-Protocol.h>

@class NSString, WKContentView, WKSelectPopover;

__attribute__((visibility("hidden")))
@interface WKSelectTableViewController : UITableViewController <UIKeyInput>
{
    unsigned long long _singleSelectionIndex;
    unsigned long long _singleSelectionSection;
    long long _numberOfSections;
    BOOL _allowsMultipleSelection;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    WKSelectPopover *_popover;
    WKContentView *_contentView;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) WKSelectPopover *popover; // @synthesize popover=_popover;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;

- (void)deleteBackward;
- (struct OptionItem *)findItemAt:(id)arg1;
- (long long)findItemIndexAt:(id)arg1;
- (BOOL)hasText;
- (id)initWithView:(id)arg1 hasGroups:(BOOL)arg2;
- (void)insertText:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)populateCell:(id)arg1 withItem:(const struct OptionItem *)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
