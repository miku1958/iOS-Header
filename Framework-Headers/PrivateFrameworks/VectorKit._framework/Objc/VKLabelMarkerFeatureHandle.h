//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VKLabelMarkerFeatureHandle : NSObject
{
    struct LabelMarkerFeatureHandle _actualHandle;
}

- (id).cxx_construct;
- (const struct LabelMarkerFeatureHandle *)actualHandle;
- (void)dealloc;
- (long long)featureIndex;
- (int)featureType;
- (id)initWithLabelMarkerHandle:(const struct LabelMarkerFeatureHandle *)arg1;
- (id)styleAttributes;
- (int)tileStyle;
- (unsigned int)tileVersion;
- (int)tileX;
- (int)tileY;
- (int)tileZ;

@end

