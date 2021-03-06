//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IPAImageSizePolicy, NSString;

@interface IPAPreviewSizePolicy : NSObject
{
    NSString *_name;
    id _style;
    IPAImageSizePolicy *_sizePolicy;
    CDUnknownBlockType _styleNeededThreshold;
    CDUnknownBlockType _styleProducedThreshold;
    NSString *_suffix;
}

@property (readonly) NSString *name; // @synthesize name=_name;
@property (strong) NSString *suffix; // @synthesize suffix=_suffix;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 style:(id)arg2 sizePolicy:(id)arg3 styleNeededThreshold:(CDUnknownBlockType)arg4 styleProducedThreshold:(CDUnknownBlockType)arg5;
- (id)initWithName:(id)arg1 suffix:(id)arg2 style:(id)arg3 sizePolicy:(id)arg4 styleNeededThreshold:(CDUnknownBlockType)arg5 styleProducedThreshold:(CDUnknownBlockType)arg6;
- (struct PFIntSize_st)integralTransformSize:(struct CGSize)arg1;
- (id)sizeTransformationPolicy;
- (id)style;
- (BOOL)styleCanBeProducedFromSize:(struct CGSize)arg1;
- (BOOL)styleIsNeededForFullSize:(struct CGSize)arg1;
- (id)styleShouldBeProducedFrom:(CDUnknownBlockType)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;

@end

