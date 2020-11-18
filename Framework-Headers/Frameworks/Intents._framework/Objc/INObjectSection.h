//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface INObjectSection : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_title;
    NSArray *_items;
}

@property (readonly, copy, nonatomic) NSString *_identifier; // @synthesize _identifier;
@property (readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 items:(id)arg3;
- (id)initWithTitle:(id)arg1 items:(id)arg2;

@end
