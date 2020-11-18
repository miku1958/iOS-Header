//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class STIntroductionModel;

__attribute__((visibility("hidden")))
@interface STIntroIdentityViewController : OBWelcomeController
{
    STIntroductionModel *_model;
    CDUnknownBlockType _continueHandler;
}

@property (readonly, copy) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;
@property (readonly) STIntroductionModel *model; // @synthesize model=_model;

- (void).cxx_destruct;
- (void)_myChildsDevice:(id)arg1;
- (void)_myDevice:(id)arg1;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;
- (void)loadView;

@end
