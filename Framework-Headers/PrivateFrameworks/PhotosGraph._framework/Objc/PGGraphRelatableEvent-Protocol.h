//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphFullMeaninglessEvent-Protocol.h>

@class NSDictionary, NSSet, NSString, PGGraphMomentNode;
@protocol PGGraphPhotoEvent;

@protocol PGGraphRelatableEvent <PGGraphFullMeaninglessEvent>
+ (NSString *)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(NSString *)arg2;
+ (NSString *)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(NSString *)arg2;
+ (NSString *)pathFromMoment;
+ (NSString *)pathFromTargetNodeDomain:(unsigned short)arg1;
+ (NSString *)pathToMoment;
+ (NSString *)pathToTargetNodeDomain:(unsigned short)arg1;
- (NSSet *)connectedEventsWithTargetDomain:(unsigned short)arg1;
- (NSDictionary *)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(NSSet *)arg2;
- (id<PGGraphPhotoEvent>)photoEvent;
- (double)weightForMoment:(PGGraphMomentNode *)arg1;
@end
