//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLHLSKey, BLHLSMap, BLHLSStreamInf, NSMutableArray, NSMutableDictionary;

@interface BLHLSPlaylistState : NSObject
{
    NSMutableDictionary *_mutableGroups;
    BLHLSMap *_currentMap;
    double _currentDuration;
    NSMutableArray *_mutableSegments;
    BLHLSStreamInf *_currentStreamInf;
    NSMutableArray *_mutableStreamInfs;
    BLHLSKey *_currentKey;
}

@property (nonatomic) double currentDuration; // @synthesize currentDuration=_currentDuration;
@property (strong, nonatomic) BLHLSKey *currentKey; // @synthesize currentKey=_currentKey;
@property (strong, nonatomic) BLHLSMap *currentMap; // @synthesize currentMap=_currentMap;
@property (strong, nonatomic) BLHLSStreamInf *currentStreamInf; // @synthesize currentStreamInf=_currentStreamInf;
@property (strong, nonatomic) NSMutableDictionary *mutableGroups; // @synthesize mutableGroups=_mutableGroups;
@property (strong, nonatomic) NSMutableArray *mutableSegments; // @synthesize mutableSegments=_mutableSegments;
@property (strong, nonatomic) NSMutableArray *mutableStreamInfs; // @synthesize mutableStreamInfs=_mutableStreamInfs;

- (void).cxx_destruct;
- (id)init;

@end
