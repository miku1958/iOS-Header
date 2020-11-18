//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSceneLayer.h>

@class CAContext;

@interface FBSCAContextSceneLayer : FBSSceneLayer
{
    unsigned int _contextID;
}

@property (readonly, nonatomic) CAContext *CAContext; // @dynamic CAContext;
@property (readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;

+ (id)layerWithCAContext:(id)arg1;
- (id)_initWithCAContext:(id)arg1 contextID:(unsigned int)arg2 level:(double)arg3;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCAContext:(id)arg1;
- (id)initWithCAContextID:(unsigned int)arg1 level:(double)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

