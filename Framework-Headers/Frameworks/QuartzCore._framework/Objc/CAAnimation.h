//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/CAAction-Protocol.h>
#import <QuartzCore/CAMediaTiming-Protocol.h>
#import <QuartzCore/CAPropertyInfo-Protocol.h>
#import <QuartzCore/NSCoding-Protocol.h>
#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSMutableCopying-Protocol.h>

@class CAMediaTimingFunction, CAStateControllerTransition, NSString;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction>
{
    void *_attr;
    unsigned int _flags;
}

@property (weak) CAStateControllerTransition *CAStateControllerTransition; // @dynamic CAStateControllerTransition;
@property BOOL autoreverses;
@property double beginTime;
@property (copy) NSString *beginTimeMode;
@property (strong) id delegate;
@property double duration;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *fillMode;
@property double frameInterval;
@property (getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property float repeatCount;
@property double repeatDuration;
@property float speed;
@property double timeOffset;
@property (strong) CAMediaTimingFunction *timingFunction;

+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (CDUnknownFunctionPointerType)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (CDUnknownFunctionPointerType)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (id)animation;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)properties;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)removedOnCompletion;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)setDefaultDuration:(double)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end

