//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class PXExtendedTraitCollection;

@interface PXBarSpec : NSObject <NSCopying>
{
    PXExtendedTraitCollection *_extendedTraitCollection;
}

@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)sortedBarItemsByPlacement:(id)arg1;

@end
