//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSPointerArray;

@interface GKConstraintUpdateController : NSObject
{
    NSPointerArray *_constraintsToUpdate;
}

@property (strong, nonatomic) NSPointerArray *constraintsToUpdate; // @synthesize constraintsToUpdate=_constraintsToUpdate;

+ (id)sharedController;
- (void)_updateConstraints;
- (void)dealloc;
- (void)registerConstraint:(id)arg1 leading:(double)arg2 forFontTextStyle:(id)arg3;
- (void)updateConstraint:(id)arg1;

@end
