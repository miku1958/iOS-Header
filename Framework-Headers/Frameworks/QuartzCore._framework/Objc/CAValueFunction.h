//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface CAValueFunction : NSObject <NSSecureCoding>
{
    NSString *_string;
    void *_impl;
}

@property (readonly) NSString *name;

+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)functionWithName:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (struct Object *)CA_copyRenderValue;
- (id)_initWithName:(int)arg1;
- (BOOL)apply:(const double *)arg1 result:(double *)arg2;
- (BOOL)apply:(const double *)arg1 result:(double *)arg2 parameterFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)inputCount;
- (unsigned long long)outputCount;

@end

