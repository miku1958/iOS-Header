//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AFSpeechAcousticFeature : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_acousticFeatureValuePerFrame;
    double _frameDuration;
}

@property (readonly, nonatomic) NSArray *acousticFeatureValuePerFrame; // @synthesize acousticFeatureValuePerFrame=_acousticFeatureValuePerFrame;
@property (readonly, nonatomic) double frameDuration; // @synthesize frameDuration=_frameDuration;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAcousticFeatureValue:(id)arg1 frameDuration:(double)arg2;
- (id)initWithCoder:(id)arg1;

@end
