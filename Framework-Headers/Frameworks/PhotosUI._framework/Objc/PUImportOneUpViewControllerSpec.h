//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

__attribute__((visibility("hidden")))
@interface PUImportOneUpViewControllerSpec : PXFeatureSpec
{
    BOOL _allowsInterfaceRotation;
    double _interItemSpacing;
    unsigned long long _selectionBadgeCorner;
    unsigned long long _style;
    struct CGSize _selectionBadgeSize;
    struct UIOffset _selectionBadgeOffset;
}

@property (readonly, nonatomic) BOOL allowsInterfaceRotation; // @synthesize allowsInterfaceRotation=_allowsInterfaceRotation;
@property (readonly, nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property (readonly, nonatomic) unsigned long long selectionBadgeCorner; // @synthesize selectionBadgeCorner=_selectionBadgeCorner;
@property (readonly, nonatomic) struct UIOffset selectionBadgeOffset; // @synthesize selectionBadgeOffset=_selectionBadgeOffset;
@property (readonly, nonatomic) struct CGSize selectionBadgeSize; // @synthesize selectionBadgeSize=_selectionBadgeSize;
@property (readonly, nonatomic) unsigned long long style; // @synthesize style=_style;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;

@end

