//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface CAState : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_basedOn;
    NSMutableArray *_elements;
    double _nextDelay;
    double _previousDelay;
    BOOL _enabled;
    BOOL _locked;
    BOOL _initial;
}

@property (copy) NSString *basedOn; // @synthesize basedOn=_basedOn;
@property (copy, nonatomic) NSArray *elements;
@property (getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (getter=isInitial) BOOL initial; // @synthesize initial=_initial;
@property (nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property double nextDelay; // @synthesize nextDelay=_nextDelay;
@property double previousDelay; // @synthesize previousDelay=_previousDelay;

+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)addElement:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)foreachLayer:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeElement:(id)arg1;

@end
