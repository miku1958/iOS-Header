//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecPeopleArgument : PGTitleSpecArgument
{
    unsigned long long _type;
}

@property (readonly) unsigned long long type; // @synthesize type=_type;

+ (id)argumentWithPeopleType:(unsigned long long)arg1;
- (id)_birthdayTitleWithMomentNodes:(id)arg1;
- (id)_groupTitleWithFeature:(id)arg1 graph:(id)arg2 allowedGroupsFormat:(unsigned long long)arg3;
- (id)_groupTitleWithMomentNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2;
- (id)_peopleNodesWithMomentNodes:(id)arg1;
- (id)_personTitleWithFeature:(id)arg1 graph:(id)arg2;
- (id)_personTitleWithMomentNodes:(id)arg1;
- (id)_resolvedStringWithMomentNodes:(id)arg1;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2;
- (id)initWithPeopleType:(unsigned long long)arg1;

@end

