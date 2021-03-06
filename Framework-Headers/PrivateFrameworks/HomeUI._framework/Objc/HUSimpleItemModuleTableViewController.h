//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/UITextViewDelegate-Protocol.h>

@class NSArray, NSString;

@interface HUSimpleItemModuleTableViewController : HUItemTableViewController <UITextViewDelegate>
{
    NSArray *_moduleControllers;
    CDUnknownBlockType _moduleControllerBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType moduleControllerBuilder; // @synthesize moduleControllerBuilder=_moduleControllerBuilder;
@property (readonly, nonatomic) NSArray *moduleControllers; // @synthesize moduleControllers=_moduleControllers;
@property (readonly) Class superclass;

+ (unsigned long long)updateMode;
- (void).cxx_destruct;
- (void)_updateTitle;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)dismissTextViewController;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithTableViewStyle:(long long)arg1 moduleCreator:(CDUnknownBlockType)arg2 moduleControllerBuilder:(CDUnknownBlockType)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)viewDidLayoutSubviews;

@end

