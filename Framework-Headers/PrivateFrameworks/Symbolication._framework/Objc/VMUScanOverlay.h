//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface VMUScanOverlay : NSObject
{
    NSMutableArray *_rules;
}

@property (readonly, nonatomic) NSArray *refinementRules; // @synthesize refinementRules=_rules;

+ (id)defaultOverlay;
- (void)addMetadataRefinementRule:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

