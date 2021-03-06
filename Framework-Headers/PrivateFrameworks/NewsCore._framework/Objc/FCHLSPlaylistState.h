//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCHLSKey, FCHLSMap, FCHLSStreamInf, NSMutableArray, NSMutableDictionary;

@interface FCHLSPlaylistState : NSObject
{
    NSMutableDictionary *_mutableGroups;
    FCHLSMap *_currentMap;
    double _currentDuration;
    NSMutableArray *_mutableSegments;
    FCHLSStreamInf *_currentStreamInf;
    NSMutableArray *_mutableStreamInfs;
    FCHLSKey *_currentKey;
    NSMutableDictionary *_mutableSessionData;
}

@property (nonatomic) double currentDuration; // @synthesize currentDuration=_currentDuration;
@property (strong, nonatomic) FCHLSKey *currentKey; // @synthesize currentKey=_currentKey;
@property (strong, nonatomic) FCHLSMap *currentMap; // @synthesize currentMap=_currentMap;
@property (strong, nonatomic) FCHLSStreamInf *currentStreamInf; // @synthesize currentStreamInf=_currentStreamInf;
@property (strong, nonatomic) NSMutableDictionary *mutableGroups; // @synthesize mutableGroups=_mutableGroups;
@property (strong, nonatomic) NSMutableArray *mutableSegments; // @synthesize mutableSegments=_mutableSegments;
@property (strong, nonatomic) NSMutableDictionary *mutableSessionData; // @synthesize mutableSessionData=_mutableSessionData;
@property (strong, nonatomic) NSMutableArray *mutableStreamInfs; // @synthesize mutableStreamInfs=_mutableStreamInfs;

- (void).cxx_destruct;
- (id)init;

@end

