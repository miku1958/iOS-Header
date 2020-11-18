//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate, NSString;

@interface GKSectionInfo : NSObject
{
    long long _section;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSArray *_items;
    NSString *_title;
}

@property (strong, nonatomic) NSArray *items; // @synthesize items=_items;
@property (strong, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (nonatomic) long long section; // @synthesize section=_section;
@property (strong, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void)dealloc;
- (id)description;

@end

