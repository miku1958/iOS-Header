//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ABVCardParameter : NSObject
{
    NSString *_name;
    NSString *_grouping;
    id _value;
    NSMutableArray *_types;
    BOOL _primary;
}

- (void)addType:(id)arg1;
- (void)addTypes:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)grouping;
- (id)initWithName:(id)arg1;
- (BOOL)isPrimary;
- (id)name;
- (void)setGrouping:(id)arg1;
- (void)setIsPrimary:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (id)types;
- (id)value;

@end

