//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class NSString, PUBrowsingViewModel;

__attribute__((visibility("hidden")))
@interface PUBrowsingOneUpVisibilityHelper : NSObject <PUBrowsingViewModelChangeObserver>
{
    BOOL _isOneUpVisible;
    BOOL _isPresentedForSecondScreen;
    PUBrowsingViewModel *_browsingViewModel;
}

@property (strong, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isOneUpVisible; // @synthesize isOneUpVisible=_isOneUpVisible;
@property (readonly, nonatomic) BOOL isPresentedForSecondScreen; // @synthesize isPresentedForSecondScreen=_isPresentedForSecondScreen;
@property (readonly) Class superclass;

+ (void)_performOnDemandCameraProcessingAdjustmentIfNeeded:(id)arg1;
+ (BOOL)_shouldPerformOnDemandCameraProcessingAdjustment:(id)arg1 isOneUpVisible:(BOOL)arg2 isPresentedForSecondScreen:(BOOL)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBrowsingViewModel:(id)arg1 isPresentedForSecondScreen:(BOOL)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end

