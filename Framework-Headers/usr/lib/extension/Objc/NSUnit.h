//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <extension/NSCopying-Protocol.h>
#import <extension/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSUnit : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_symbol;
}

@property (readonly, copy) NSString *symbol; // @synthesize symbol=_symbol;

+ (id)new;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbol:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

