//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SXComponentTypeMatching : NSObject
{
    NSMutableArray *_descriptions;
}

@property (readonly, nonatomic) NSMutableArray *descriptions; // @synthesize descriptions=_descriptions;

- (void).cxx_destruct;
- (void)addDescription:(id)arg1;
- (id)init;
- (id)match:(id)arg1;
- (void)removeDescription:(id)arg1;

@end

