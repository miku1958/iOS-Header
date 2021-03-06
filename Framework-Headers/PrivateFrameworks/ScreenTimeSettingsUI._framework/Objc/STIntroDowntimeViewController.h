//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeSettingsUI/STTableWelcomeController.h>

@class STIntroDowntimeTableViewController, STIntroductionModel;

__attribute__((visibility("hidden")))
@interface STIntroDowntimeViewController : STTableWelcomeController
{
    STIntroductionModel *_model;
    CDUnknownBlockType _continueHandler;
}

@property (readonly, copy) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;
@property (readonly) STIntroductionModel *model; // @synthesize model=_model;
@property (strong, nonatomic) STIntroDowntimeTableViewController *tableViewController;

- (void).cxx_destruct;
- (void)_notNow:(id)arg1;
- (void)_setDowntime:(id)arg1;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;
- (void)loadView;

@end

