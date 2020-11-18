//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKController;

@interface AKActionController : NSObject
{
    AKController *_controller;
}

@property (weak) AKController *controller; // @synthesize controller=_controller;

- (void).cxx_destruct;
- (BOOL)_isSenderEnabled:(id)arg1 segment:(long long)arg2;
- (id)initWithController:(id)arg1;
- (BOOL)isSenderEnabled:(id)arg1;
- (void)performActionForSender:(id)arg1;
- (void)performActionForSender:(id)arg1 segment:(long long)arg2;
- (BOOL)validateSender:(id)arg1;
- (BOOL)validateSender:(id)arg1 segment:(long long)arg2;

@end
