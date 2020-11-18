//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface TLVibrationPattern : NSObject
{
    NSDictionary *_propertyListRepresentation;
    NSMutableArray *_complexPatternDescription;
    id _contextObject;
}

@property (readonly, nonatomic) id _artificiallyRepeatingPropertyListRepresentation;
@property (strong, nonatomic) id contextObject; // @synthesize contextObject=_contextObject;
@property (readonly, nonatomic) id propertyListRepresentation;

+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1;
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg1;
+ (id)noneVibrationPattern;
+ (id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2;
- (void).cxx_destruct;
- (double)_computedDuration;
- (id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(BOOL)arg2;
- (void)appendVibrationComponentWithDuration:(double)arg1 isPause:(BOOL)arg2;
- (id)init;
- (id)initWithPropertyListRepresentation:(id)arg1;

@end

