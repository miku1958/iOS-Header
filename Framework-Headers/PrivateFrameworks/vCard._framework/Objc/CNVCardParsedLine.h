//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CNVCardParsedLine : NSObject
{
    NSString *_name;
    id _value;
    NSArray *_parameters;
    NSString *_grouping;
    BOOL _isPrimary;
}

@property (copy) NSString *grouping; // @synthesize grouping=_grouping;
@property BOOL isPrimary; // @synthesize isPrimary=_isPrimary;
@property (readonly, copy) NSString *name; // @synthesize name=_name;
@property (copy) NSArray *parameters; // @synthesize parameters=_parameters;
@property (strong) id value; // @synthesize value=_value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;

@end

