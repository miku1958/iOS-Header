//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphEvent-Protocol.h>

@class NSSet;

@protocol PGGraphScenedEvent <PGGraphEvent>
- (NSSet *)highConfidenceSceneNodes;
- (NSSet *)sceneNodes;
- (NSSet *)searchConfidenceSceneNodes;
@end
