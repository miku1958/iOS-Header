//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NUFeedBlueprint : NSObject
{
    NSMutableArray *_sections;
}

@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;

- (void).cxx_destruct;
- (id)init;
- (id)sectionAtIndex:(unsigned long long)arg1;

@end

