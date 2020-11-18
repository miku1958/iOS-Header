//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUNewUserEducationBaseViewModel.h>

@class HUNewUserEducationStackViewModel, HUNewUserEducationToolbarViewModel;

@interface HUNewUserEducationWrapperViewModel : HUNewUserEducationBaseViewModel
{
    BOOL _masksToBounds;
    HUNewUserEducationStackViewModel *_stackViewModel;
    HUNewUserEducationToolbarViewModel *_toolbarModel;
}

@property (readonly, nonatomic) BOOL masksToBounds; // @synthesize masksToBounds=_masksToBounds;
@property (readonly, nonatomic) HUNewUserEducationStackViewModel *stackViewModel; // @synthesize stackViewModel=_stackViewModel;
@property (readonly, nonatomic) HUNewUserEducationToolbarViewModel *toolbarModel; // @synthesize toolbarModel=_toolbarModel;

+ (double)cornerRadius;
- (void).cxx_destruct;
- (id)init;

@end
