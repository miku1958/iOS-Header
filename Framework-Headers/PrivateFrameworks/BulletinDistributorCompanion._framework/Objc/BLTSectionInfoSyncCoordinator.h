//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BLTSectionInfoSyncCoordinator : NSObject
{
    CDUnknownBlockType _infoProvider;
    NSMutableArray *_alertingSectionIDs;
    NSMutableDictionary *_alertingSectionState;
    unsigned long long _mostRecentIndex;
}

@property (strong, nonatomic) NSMutableArray *alertingSectionIDs; // @synthesize alertingSectionIDs=_alertingSectionIDs;
@property (strong, nonatomic) NSMutableDictionary *alertingSectionState; // @synthesize alertingSectionState=_alertingSectionState;
@property (copy, nonatomic) CDUnknownBlockType infoProvider; // @synthesize infoProvider=_infoProvider;
@property (nonatomic) unsigned long long mostRecentIndex; // @synthesize mostRecentIndex=_mostRecentIndex;

- (void).cxx_destruct;
- (id)effectiveSectionInfoForSectionIDIndex:(unsigned long long)arg1;
- (id)initWithAlertingSectionIDs:(id)arg1 infoProvider:(CDUnknownBlockType)arg2;
- (void)performSyncForSectionID:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sectionInfoSendCompleted:(unsigned long long)arg1;

@end

