//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentMask.h>

@class NSString;

@interface SXCornersComponentMask : SXComponentMask
{
}

@property (readonly, nonatomic) BOOL bottomLeft; // @dynamic bottomLeft;
@property (readonly, nonatomic) BOOL bottomRight; // @dynamic bottomRight;
@property (readonly, nonatomic) unsigned long long cornerMask;
@property (readonly, nonatomic) NSString *curve; // @dynamic curve;
@property (readonly, nonatomic) struct _SXConvertibleValue radius; // @dynamic radius;
@property (readonly, nonatomic) BOOL topLeft; // @dynamic topLeft;
@property (readonly, nonatomic) BOOL topRight; // @dynamic topRight;

- (BOOL)bottomLeftWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)bottomRightWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)cornerWithValue:(id)arg1 withType:(int)arg2;
- (id)curveWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)topLeftWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)topRightWithValue:(id)arg1 withType:(int)arg2;

@end

