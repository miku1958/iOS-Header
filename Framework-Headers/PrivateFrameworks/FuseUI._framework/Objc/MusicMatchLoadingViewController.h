//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MusicMatchLoadingView, NSObject, NSString;
@protocol OS_dispatch_source;

@interface MusicMatchLoadingViewController : UIViewController
{
    MusicMatchLoadingView *_matchLoadingView;
    NSObject<OS_dispatch_source> *_updateTimerSource;
    NSString *_loadingTitle;
}

@property (strong, nonatomic) NSString *loadingTitle; // @synthesize loadingTitle=_loadingTitle;

- (void).cxx_destruct;
- (void)_updateCloudProgressAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

