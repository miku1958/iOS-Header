//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/CAMediaTiming-Protocol.h>
#import <QuartzCore/CAPropertyInfo-Protocol.h>
#import <QuartzCore/NSCoding-Protocol.h>
#import <QuartzCore/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface CAEmitterCell : NSObject <NSCopying, CAPropertyInfo, NSCoding, CAMediaTiming>
{
    void *_attr[2];
    void *_state;
    unsigned int _flags;
}

@property float alphaRange;
@property float alphaSpeed;
@property BOOL autoreverses;
@property double beginTime;
@property float birthRate;
@property float blueRange;
@property float blueSpeed;
@property struct CGColor *color;
@property (strong) id contents;
@property unsigned int contentsFrameCount;
@property (copy) NSString *contentsFrameMode;
@property unsigned int contentsFramesPerRow;
@property float contentsFramesPerSecond;
@property struct CGRect contentsRect;
@property double contentsScale;
@property double duration;
@property double emissionLatitude;
@property double emissionLongitude;
@property double emissionRange;
@property (copy) NSArray *emitterBehaviors;
@property (copy) NSArray *emitterCells;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *fillMode;
@property float greenRange;
@property float greenSpeed;
@property float lifetime;
@property float lifetimeRange;
@property (copy) NSString *magnificationFilter;
@property float mass;
@property float massRange;
@property (copy) NSString *minificationFilter;
@property float minificationFilterBias;
@property (copy) NSString *name;
@property double orientationLatitude;
@property double orientationLongitude;
@property double orientationRange;
@property (copy) NSString *particleType;
@property float redRange;
@property float redSpeed;
@property float repeatCount;
@property double repeatDuration;
@property double rotation;
@property double rotationRange;
@property double scale;
@property double scaleRange;
@property double scaleSpeed;
@property float speed;
@property double spin;
@property double spinRange;
@property (copy) NSDictionary *style;
@property double timeOffset;
@property double velocity;
@property double velocityRange;
@property double xAcceleration;
@property double yAcceleration;
@property double zAcceleration;

+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)emitterCell;
+ (id)properties;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)didChangeValueForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
