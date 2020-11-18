//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFooterViewModel.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXMomentShareStatusPresentation;
@protocol PXCMMFooterViewModelActionDelegate;

@interface PXCMMFooterViewModel : PXFooterViewModel <PXChangeObserver>
{
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    id<PXCMMFooterViewModelActionDelegate> _actionDelegate;
}

@property (weak, nonatomic) id<PXCMMFooterViewModelActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateAllProperties;
- (id)init;
- (id)initWithMomentShareStatusPresentation:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;

@end
