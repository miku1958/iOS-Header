//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSMutableCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class CALayer, CAValueFunction, NSString;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_name;
    CALayer *_layer;
    CAValueFunction *_function;
    BOOL _enabled;
}

@property (getter=isEnabled) BOOL enabled;
@property (strong) CAValueFunction *function;
@property (strong) CALayer *layer;
@property (copy) NSString *name;

+ (void)CAMLParserStartElement:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)forceField;
+ (BOOL)supportsSecureCoding;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end

