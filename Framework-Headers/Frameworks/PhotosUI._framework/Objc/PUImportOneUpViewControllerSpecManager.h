//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@class PUImportOneUpViewControllerSpec;

__attribute__((visibility("hidden")))
@interface PUImportOneUpViewControllerSpecManager : PXFeatureSpecManager
{
    unsigned long long _style;
}

@property (readonly, nonatomic) PUImportOneUpViewControllerSpec *spec; // @dynamic spec;
@property (readonly, nonatomic) unsigned long long style; // @synthesize style=_style;

- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (Class)specClass;

@end
