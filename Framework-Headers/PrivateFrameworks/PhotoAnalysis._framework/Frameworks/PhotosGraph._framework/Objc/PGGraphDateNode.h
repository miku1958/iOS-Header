//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@class PGGraphSeasonNode;

@interface PGGraphDateNode : PGGraphNode
{
    PGGraphSeasonNode *_seasonNode;
}

@property (readonly, nonatomic) PGGraphSeasonNode *seasonNode; // @synthesize seasonNode=_seasonNode;
@property (readonly) long long year;

+ (id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3;
- (void).cxx_destruct;
- (id)associatedNodesForRemoval;
- (void)enumerateHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;

@end

