//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/NSSecureCoding-Protocol.h>

@class NSString;

@interface ADAdActionPublicAttributes : NSObject <NSSecureCoding>
{
    BOOL _actionLeavesApplication;
    BOOL _actionViewControllerHidesStatusBar;
    int _action;
    int _transitionType;
    unsigned long long _actionViewControllerPresentationOrientationMask;
    long long _modalPresentationStyle;
    NSString *_actionURLString;
}

@property (nonatomic) int action; // @synthesize action=_action;
@property (nonatomic) BOOL actionLeavesApplication; // @synthesize actionLeavesApplication=_actionLeavesApplication;
@property (copy, nonatomic) NSString *actionURLString; // @synthesize actionURLString=_actionURLString;
@property (nonatomic) BOOL actionViewControllerHidesStatusBar; // @synthesize actionViewControllerHidesStatusBar=_actionViewControllerHidesStatusBar;
@property (nonatomic) unsigned long long actionViewControllerPresentationOrientationMask; // @synthesize actionViewControllerPresentationOrientationMask=_actionViewControllerPresentationOrientationMask;
@property (nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property (nonatomic) int transitionType; // @synthesize transitionType=_transitionType;

+ (BOOL)supportsSecureCoding;
- (id)_actionDescription;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

