//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/VUILocalContentProtocol-Protocol.h>

@class NSArray, NSString, UIView, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUILibraryFetchControllerViewController : UIViewController <VUILocalContentProtocol>
{
    BOOL _onlyShowLocalContent;
    BOOL _pausesFetchControllersAutomatically;
    BOOL _contentHasBeenDeleted;
    BOOL _contentHasBeenManuallyDeleted;
    VUIMediaLibrary *_mediaLibrary;
    NSArray *_fetchControllers;
    UIView *_currentView;
    unsigned long long _currentViewType;
    NSString *_noContentErrorTitle;
    NSString *_noContentErrorMessage;
    NSString *_deletedContentErrorMessage;
    UIView *_contentView;
    UIView *_rootView;
}

@property (nonatomic) BOOL contentHasBeenDeleted; // @synthesize contentHasBeenDeleted=_contentHasBeenDeleted;
@property (nonatomic) BOOL contentHasBeenManuallyDeleted; // @synthesize contentHasBeenManuallyDeleted=_contentHasBeenManuallyDeleted;
@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (strong, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property (nonatomic) unsigned long long currentViewType; // @synthesize currentViewType=_currentViewType;
@property (copy, nonatomic) NSString *deletedContentErrorMessage; // @synthesize deletedContentErrorMessage=_deletedContentErrorMessage;
@property (copy, nonatomic) NSArray *fetchControllers; // @synthesize fetchControllers=_fetchControllers;
@property (strong, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property (copy, nonatomic) NSString *noContentErrorMessage; // @synthesize noContentErrorMessage=_noContentErrorMessage;
@property (copy, nonatomic) NSString *noContentErrorTitle; // @synthesize noContentErrorTitle=_noContentErrorTitle;
@property (nonatomic) BOOL onlyShowLocalContent; // @synthesize onlyShowLocalContent=_onlyShowLocalContent;
@property (nonatomic) BOOL pausesFetchControllersAutomatically; // @synthesize pausesFetchControllersAutomatically=_pausesFetchControllersAutomatically;
@property (strong, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;

- (void).cxx_destruct;
- (id)_createAlertViewWithTitle:(id)arg1 description:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)startFetchControllers:(id)arg1;
- (void)updateAfterContentWasManuallyDeleted:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
