//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>

@class NSArray, NSSet;

@interface CHStrokeGroupingResult : NSObject <NSCopying>
{
    NSArray *_strokeGroupsSortedTopBottomLeftRight;
    NSArray *_strokeGroupsSortedTopBottomLeftRightRespectingWritingOrientation;
    NSSet *_textStrokeGroups;
    NSSet *_strokeGroups;
    NSSet *_createdStrokeGroups;
    NSSet *_deletedStrokeGroups;
}

@property (readonly, copy, nonatomic) NSSet *createdStrokeGroups; // @synthesize createdStrokeGroups=_createdStrokeGroups;
@property (readonly, copy, nonatomic) NSSet *deletedStrokeGroups; // @synthesize deletedStrokeGroups=_deletedStrokeGroups;
@property (readonly, copy, nonatomic) NSSet *strokeGroups; // @synthesize strokeGroups=_strokeGroups;
@property (readonly, copy, nonatomic) NSSet *textStrokeGroups;
@property (readonly, copy, nonatomic) NSArray *textStrokeGroupsSortedByWritingOrientation;
@property (readonly, copy, nonatomic) NSArray *textStrokeGroupsSortedTopBottomLeftRight;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3;

@end

