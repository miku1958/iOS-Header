//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray;

@interface _EARAcousticFeature : NSObject <NSCopying>
{
    NSArray *_acousticFeatureValuePerFrame;
    double _frameDuration;
}

@property (readonly, copy, nonatomic) NSArray *acousticFeatureValuePerFrame; // @synthesize acousticFeatureValuePerFrame=_acousticFeatureValuePerFrame;
@property (readonly, nonatomic) double frameDuration; // @synthesize frameDuration=_frameDuration;

- (void).cxx_destruct;
- (id)_initWithAcousticFeatureValues:(id)arg1 frameDuration:(float)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

