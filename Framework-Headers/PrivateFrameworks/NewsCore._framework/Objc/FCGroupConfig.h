//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIColor;

@interface FCGroupConfig : NSObject
{
    UIColor *_groupTitleColor;
    unsigned long long _cutoffTimeSecs;
    unsigned long long _cutoffCount;
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) NSString *articleListID;
@property (readonly, nonatomic) NSString *channelID;
@property (nonatomic) unsigned long long cutoffCount; // @synthesize cutoffCount=_cutoffCount;
@property (nonatomic) unsigned long long cutoffTimeSecs; // @synthesize cutoffTimeSecs=_cutoffTimeSecs;
@property (strong, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property (readonly, nonatomic) NSString *feedID;
@property (readonly, nonatomic) NSString *groupName;
@property (strong, nonatomic) UIColor *groupTitleColor; // @synthesize groupTitleColor=_groupTitleColor;
@property (readonly, nonatomic) NSString *sectionID;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

