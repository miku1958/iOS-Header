//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSScreenCaptureAbilityCheck : NSObject
{
    BOOL _isAbleToTakeScreenshots;
    NSString *_reasonForNotBeingAbleToTakeScreenshots;
}

@property (nonatomic) BOOL isAbleToTakeScreenshots; // @synthesize isAbleToTakeScreenshots=_isAbleToTakeScreenshots;
@property (copy, nonatomic) NSString *reasonForNotBeingAbleToTakeScreenshots; // @synthesize reasonForNotBeingAbleToTakeScreenshots=_reasonForNotBeingAbleToTakeScreenshots;

+ (id)abilityCheck;
- (void).cxx_destruct;

@end

