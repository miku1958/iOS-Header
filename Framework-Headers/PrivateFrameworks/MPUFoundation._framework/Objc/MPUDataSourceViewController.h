//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MPUFoundation/UIStateRestoring-Protocol.h>
#import <MPUFoundation/UIViewControllerRestoration-Protocol.h>

@class MPUDataSource, MPUQueryDataSource, NSString;
@protocol UIStateRestoring;

@interface MPUDataSourceViewController : UIViewController <UIStateRestoring, UIViewControllerRestoration>
{
    BOOL _hasEverReloadedData;
    BOOL _visible;
    BOOL _shouldReloadWhenVisible;
    MPUDataSource *_dataSource;
}

@property (strong, nonatomic) MPUDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) Class objectRestorationClass;
@property (readonly, nonatomic) MPUQueryDataSource *queryDataSource;
@property (readonly, nonatomic) id<UIStateRestoring> restorationParent;
@property (nonatomic) BOOL shouldReloadWhenVisible; // @synthesize shouldReloadWhenVisible=_shouldReloadWhenVisible;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void).cxx_destruct;
- (void)_MPUStandardViewController_dataSourceDidInvalidateNotification:(id)arg1;
- (void)_MPUStandardViewController_dataSourceWillInvalidateNotification:(id)arg1;
- (void)_setDataSource:(id)arg1 shouldReloadData:(BOOL)arg2;
- (void)dataSourceDidInvalidate;
- (void)dataSourceWillInvalidate;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)reloadData;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

