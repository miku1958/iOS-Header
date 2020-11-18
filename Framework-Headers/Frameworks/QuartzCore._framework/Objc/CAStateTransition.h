//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CAStateTransition : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_fromState;
    NSString *_toState;
    NSArray *_elements;
}

@property (copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property (copy, nonatomic) NSString *fromState; // @synthesize fromState=_fromState;
@property (copy, nonatomic) NSString *toState; // @synthesize toState=_toState;

+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (double)duration;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

