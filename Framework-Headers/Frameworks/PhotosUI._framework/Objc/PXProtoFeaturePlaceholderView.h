//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXProtoFeatureView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXPhotoAnalysisStatusController;

@interface PXProtoFeaturePlaceholderView : PXProtoFeatureView <PXChangeObserver>
{
    PXPhotoAnalysisStatusController *_statusController;
    NSString *_statusDescription;
    double _preferredStatusWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double preferredStatusWidth; // @synthesize preferredStatusWidth=_preferredStatusWidth;
@property (readonly, copy, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setStatusDescription:(id)arg1;
- (void)_updateStatusDescription;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)statusDescriptionDidChange;

@end

