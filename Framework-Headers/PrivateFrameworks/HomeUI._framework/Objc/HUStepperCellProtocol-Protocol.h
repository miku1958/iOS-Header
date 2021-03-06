//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class NSNumber;
@protocol HUStepperCellDelegate;

@protocol HUStepperCellProtocol <NSObject>

@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *stepValue;
@property (weak, nonatomic) id<HUStepperCellDelegate> stepperCellDelegate;
@property (copy, nonatomic) NSNumber *stepperValue;

@end

