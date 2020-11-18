//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContactGroup.h>

@class CNGroup, NSArray;

@interface WFCNContactGroup : WFContactGroup
{
    CNGroup *_group;
    NSArray *_cachedMembers;
}

@property (strong, nonatomic) NSArray *cachedMembers; // @synthesize cachedMembers=_cachedMembers;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) CNGroup *group; // @synthesize group=_group;

+ (id)allContactGroups;
+ (id)contactGroupWithCNGroup:(id)arg1;
- (void).cxx_destruct;
- (BOOL)containsContact:(id)arg1;
- (id)initWithCNGroup:(id)arg1;
- (id)name;

@end
