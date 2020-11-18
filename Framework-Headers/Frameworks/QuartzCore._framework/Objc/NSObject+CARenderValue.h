//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/CAAnimatableValue-Protocol.h>
#import <QuartzCore/CARenderValue-Protocol.h>

@class NSString;

@interface NSObject (CARenderValue) <CARenderValue, CAAnimatableValue>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)CA_CAMLPropertyForKey:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (CDUnknownFunctionPointerType)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (CDUnknownFunctionPointerType)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;
- (id)CAMLType;
- (id)CAMLTypeForKey:(id)arg1;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CA_archivingValueForKey:(id)arg1;
- (unsigned long long)CA_copyNumericValue:(double [20])arg1;
- (struct Object *)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (void)CA_prepareRenderValue;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
@end
