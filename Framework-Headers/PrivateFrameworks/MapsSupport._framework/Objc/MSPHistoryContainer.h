//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPContainer.h>

@class NSMutableSet;

@interface MSPHistoryContainer : MSPContainer
{
    NSMutableSet *_dependents;
}

- (void).cxx_destruct;
- (void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processNewEditedContents:(id)arg1;
- (void)_processNewLoadedContents:(id)arg1;
- (void)addDependent:(id)arg1;
- (void)removeDependent:(id)arg1;

@end

