//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusFoundation/OFUIView.h>

@class NSArray, NSString;

@interface OFEmitterView : OFUIView
{
}

@property (nonatomic) double birthRate;
@property (nonatomic) NSArray *emitterCells;
@property (nonatomic) double emitterDepth;
@property (nonatomic) NSString *emitterMode;
@property (nonatomic) struct CGPoint emitterPosition;
@property (nonatomic) NSString *emitterShape;
@property (nonatomic) struct CGSize emitterSize;
@property (nonatomic) double emitterZPosition;
@property (nonatomic) double lifetime;
@property (nonatomic) NSString *renderMode;
@property (nonatomic) double scale;
@property (nonatomic) unsigned int seed;
@property (nonatomic) double spin;
@property (nonatomic) double velocity;

+ (Class)layerClass;
- (void)dealloc;
- (id)emitterLayer;

@end
