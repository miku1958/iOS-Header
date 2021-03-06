//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface AVTCoreModelGroup : NSObject
{
    NSString *_name;
    NSDictionary *_symbolNames;
    NSArray *_categories;
}

@property (readonly, copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) NSDictionary *symbolNames; // @synthesize symbolNames=_symbolNames;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 symbolNames:(id)arg2 categories:(id)arg3;

@end

