//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NanoTimeKitCompanion/UITableViewDelegate-Protocol.h>

@class NSString, NTKComplicationPickerDetailViewConfiguration, NTKPeopleDetailComplicationPickerDataSource, UITableView;
@protocol NTKPeopleComplicationPickerViewControllerDelegate;

@interface NTKPeopleComplicationPickerViewController : UIViewController <UITableViewDelegate>
{
    BOOL _isFirstTimeVisible;
    id<NTKPeopleComplicationPickerViewControllerDelegate> _delegate;
    UITableView *_tableView;
    NSString *_parentSectionName;
    NTKComplicationPickerDetailViewConfiguration *_configuration;
    NTKPeopleDetailComplicationPickerDataSource *_dataSource;
}

@property (strong, nonatomic) NTKComplicationPickerDetailViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) NTKPeopleDetailComplicationPickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKPeopleComplicationPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isFirstTimeVisible; // @synthesize isFirstTimeVisible=_isFirstTimeVisible;
@property (strong, nonatomic) NSString *parentSectionName; // @synthesize parentSectionName=_parentSectionName;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (void)_didSelectItemAtIndexPath:(id)arg1;
- (id)initWithDetailConfiguration:(id)arg1;
- (void)scrollToSelectedIdentifierAnimated:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end
