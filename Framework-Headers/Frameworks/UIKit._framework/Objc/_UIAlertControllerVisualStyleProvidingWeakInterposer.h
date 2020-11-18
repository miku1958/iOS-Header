//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIAlertControllerVisualStyleProviding-Protocol.h>

@class NSString;
@protocol UIAlertControllerVisualStyleProviding;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerVisualStyleProvidingWeakInterposer : NSObject <UIAlertControllerVisualStyleProviding>
{
    id<UIAlertControllerVisualStyleProviding> _weakProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<UIAlertControllerVisualStyleProviding> weakProvider; // @synthesize weakProvider=_weakProvider;

- (void).cxx_destruct;
- (id)initWithVisualStyleProvider:(id)arg1;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;

@end
