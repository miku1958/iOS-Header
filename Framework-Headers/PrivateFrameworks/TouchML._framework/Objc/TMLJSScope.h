//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface TMLJSScope : NSObject
{
    int _type;
    NSMutableSet *_vars;
}

@property (nonatomic) int type; // @synthesize type=_type;
@property (strong, nonatomic) NSMutableSet *vars; // @synthesize vars=_vars;

- (void).cxx_destruct;
- (void)addVar:(id)arg1;

@end
