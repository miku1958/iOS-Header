//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@protocol MDSnapshotMap <NSObject>

@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsVenues;

- (BOOL)isShowingNoDataPlaceholders;
- (struct LabelSettings *)labelSettings;
@end
