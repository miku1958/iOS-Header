//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIObjectInspector-Protocol.h>
#import <StoreKitUI/UITableViewDataSource-Protocol.h>
#import <StoreKitUI/UITableViewDelegate-Protocol.h>
#import <StoreKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSMutableArray, NSString, UINavigationBar, UITableView, UIView, UIVisualEffectView, _SKUIInspectablePropertySection;
@protocol SKUIInspectableObject;

__attribute__((visibility("hidden")))
@interface SKUIObjectInspectorViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate, SKUIObjectInspector>
{
    id<SKUIInspectableObject> _inspectableObject;
    UIView *_contentView;
    UIVisualEffectView *_backgroundView;
    UINavigationBar *_navigationBar;
    UITableView *_tableView;
    _SKUIInspectablePropertySection *_currentSection;
    NSMutableArray *_sections;
}

@property (strong, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (strong, nonatomic) _SKUIInspectablePropertySection *currentSection; // @synthesize currentSection=_currentSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *friendlyName;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *information;
@property (strong, nonatomic) id<SKUIInspectableObject> inspectableObject; // @synthesize inspectableObject=_inspectableObject;
@property (strong, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (strong, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

+ (void)showInspectableObject:(id)arg1;
- (void).cxx_destruct;
- (void)beginSectionWithFriendlyName:(id)arg1;
- (struct CGRect)calculateContentViewFrameWithParentBounds:(struct CGRect)arg1 withTraitCollection:(id)arg2;
- (void)dismiss;
- (void)done:(id)arg1;
- (void)endSection;
- (void)exposePropertyWithFriendlyName:(id)arg1 value:(id)arg2;
- (void)handleBackgroundTap:(id)arg1;
- (id)initWithInspectableObject:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)populate;
- (void)setupConstraints;
- (void)showFromViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

