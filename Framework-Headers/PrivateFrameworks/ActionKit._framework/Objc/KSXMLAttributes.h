//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCopying-Protocol.h>

@class NSDictionary, NSMutableArray;

@interface KSXMLAttributes : NSObject <NSCopying>
{
    NSMutableArray *_attributes;
}

@property (copy, nonatomic) NSDictionary *attributesAsDictionary;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (void)close;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)hasAttributes;
- (id)init;
- (id)initWithXMLAttributes:(id)arg1;
- (void)writeAttributes:(id)arg1;

@end
