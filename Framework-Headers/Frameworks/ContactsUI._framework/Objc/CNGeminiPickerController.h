//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class CNGeminiChannel, NSIndexPath, NSMutableArray, NSString, UITableViewController;
@protocol CNPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNGeminiPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate>
{
    UITableViewController *_tableViewController;
    NSMutableArray *_geminiChannels;
    CNGeminiChannel *_preferredGeminiChannel;
    NSString *_contactName;
    NSIndexPath *_selectedIndexPath;
}

@property (strong, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNPickerControllerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableArray *geminiChannels; // @synthesize geminiChannels=_geminiChannels;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CNGeminiChannel *preferredGeminiChannel; // @synthesize preferredGeminiChannel=_preferredGeminiChannel;
@property (strong, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;

- (void).cxx_destruct;
- (void)cancelPicker:(id)arg1;
- (void)didPickItem;
- (void)donePicker:(id)arg1;
- (id)geminiChannelForIndexPath:(id)arg1;
- (id)indexPathForGeminiChannel:(id)arg1;
- (id)initWithGeminiItem:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepareCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewWillAppear:(BOOL)arg1;

@end

