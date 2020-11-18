//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXImportItemViewModel, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface PUImportOneUpTransitionItem : NSObject
{
    UIImage *_snapshotImage;
    PXImportItemViewModel *_importItem;
    double _initialContentAlpha;
    UIView *_transitionView;
    double _targetContentAlpha;
    struct CGRect _initialFrame;
    struct PXSimpleIndexPath _indexPath;
    struct CGRect _targetFrame;
}

@property (readonly, nonatomic) PXImportItemViewModel *importItem; // @synthesize importItem=_importItem;
@property (readonly, nonatomic) struct PXSimpleIndexPath indexPath; // @synthesize indexPath=_indexPath;
@property (nonatomic) double initialContentAlpha; // @synthesize initialContentAlpha=_initialContentAlpha;
@property (nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property (strong, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property (nonatomic) double targetContentAlpha; // @synthesize targetContentAlpha=_targetContentAlpha;
@property (nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property (strong, nonatomic) UIView *transitionView; // @synthesize transitionView=_transitionView;

- (void).cxx_destruct;
- (id)initWithInitialFrame:(struct CGRect)arg1 snapshotImage:(id)arg2 importItem:(id)arg3 indexPath:(struct PXSimpleIndexPath)arg4;

@end
