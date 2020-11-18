//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSArray, NSNumber;

@interface _Arms : _Geometry
{
    unsigned int _vaoHand;
    unsigned int _vboHand;
    unsigned int _vaoArm;
    unsigned int _vboArm;
    float _leftShoulderX;
    float _rightShoulderX;
    float _leftShoulderAdjustment;
    float _rightShoulderAdjustment;
    float _curLeftBend;
    float _curRightBend;
    NSArray *_texHandMnut;
    NSNumber *_texHandHour;
    NSNumber *_texArm;
}

@property (nonatomic) float curLeftBend; // @synthesize curLeftBend=_curLeftBend;
@property (nonatomic) float curRightBend; // @synthesize curRightBend=_curRightBend;
@property (nonatomic) float leftShoulderAdjustment; // @synthesize leftShoulderAdjustment=_leftShoulderAdjustment;
@property (nonatomic) float leftShoulderX; // @synthesize leftShoulderX=_leftShoulderX;
@property (nonatomic) float rightShoulderAdjustment; // @synthesize rightShoulderAdjustment=_rightShoulderAdjustment;
@property (nonatomic) float rightShoulderX; // @synthesize rightShoulderX=_rightShoulderX;
@property (strong, nonatomic) NSNumber *texArm; // @synthesize texArm=_texArm;
@property (strong, nonatomic) NSNumber *texHandHour; // @synthesize texHandHour=_texHandHour;
@property (strong, nonatomic) NSArray *texHandMnut; // @synthesize texHandMnut=_texHandMnut;
@property (nonatomic) unsigned int vaoArm; // @synthesize vaoArm=_vaoArm;
@property (nonatomic) unsigned int vaoHand; // @synthesize vaoHand=_vaoHand;
@property (nonatomic) unsigned int vboArm; // @synthesize vboArm=_vboArm;
@property (nonatomic) unsigned int vboHand; // @synthesize vboHand=_vboHand;

- (void).cxx_destruct;

@end
