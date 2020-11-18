//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDHomeManager, NSArray, NSString;

@interface HMDAssistantGather : NSObject
{
    HMDHomeManager *_manager;
    NSArray *_currentHomekitObjects;
}

@property (strong, nonatomic) NSArray *currentHomekitObjects; // @synthesize currentHomekitObjects=_currentHomekitObjects;
@property (readonly, nonatomic) long long homeCount;
@property (readonly, nonatomic) NSArray *homeKitObjects;
@property (weak, nonatomic) HMDHomeManager *manager; // @synthesize manager=_manager;
@property (readonly, nonatomic) NSString *primaryHomeID;
@property (readonly, nonatomic) NSString *primaryHomeName;

- (void).cxx_destruct;
- (void)_gatherHomeKitObjects;
- (id)_getPrimaryHome;
- (void)_setAssistantTeamIdentifier;
- (void)addToList:(id)arg1 objectReference:(id)arg2 name:(id)arg3 type:(id)arg4 home:(id)arg5 andIdentifer:(id)arg6;
- (void)addToList:(id)arg1 room:(id)arg2;
- (void)addToList:(id)arg1 service:(id)arg2;
- (void)gatherHomeKitObjects;
- (id)initWithHomeManager:(id)arg1;

@end
