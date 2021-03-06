//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIAvoidanceCoordinator : NSObject
{
    NSMutableDictionary *_blockades;
    NSMutableSet *_clients;
    int _recurseCount;
    struct CGRect _avoidanceFrame;
}

@property (nonatomic) struct CGRect avoidanceFrame; // @synthesize avoidanceFrame=_avoidanceFrame;

- (void).cxx_destruct;
- (void)addAvoidanceObject:(id)arg1;
- (void)dealloc;
- (id)findBlockadesForName:(id)arg1;
- (id)findClientsForBlockade:(id)arg1;
- (id)findNamesForBlockade:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)releaseAll:(id)arg1 withType:(unsigned long long)arg2;
- (void)removeAvoidanceObject:(id)arg1;
- (void)setGroupOfBlockades:(id)arg1 forBlockadeIdentifier:(id)arg2;
- (void)updateClients:(id)arg1;

@end

