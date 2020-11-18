//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKManualUpdater : NSObject
{
    BOOL _needsUpdate;
    id _target;
    SEL _action;
}

@property (nonatomic) SEL action; // @synthesize action=_action;
@property (nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property (nonatomic) id target; // @synthesize target=_target;

- (id)description;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;

@end
