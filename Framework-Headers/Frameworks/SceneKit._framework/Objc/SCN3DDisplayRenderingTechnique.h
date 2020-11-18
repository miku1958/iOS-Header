//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNTechnique.h>

#import <SceneKit/SCNStereoscopicRenderingTechnique-Protocol.h>

@interface SCN3DDisplayRenderingTechnique : SCNTechnique <SCNStereoscopicRenderingTechnique>
{
    long long _displayLayout;
}

@property (readonly, nonatomic) long long displayLayout;
@property (nonatomic) double interaxialDistance;

- (id)initWithDisplayLayout:(long long)arg1;

@end
