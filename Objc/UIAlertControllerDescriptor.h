//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerDescriptor : NSObject
{
    BOOL _hasTitle;
    BOOL _hasMessage;
    BOOL _hasContentViewController;
    BOOL _applicationIsFullscreen;
    long long _numberOfActions;
}

@property BOOL applicationIsFullscreen; // @synthesize applicationIsFullscreen=_applicationIsFullscreen;
@property BOOL hasContentViewController; // @synthesize hasContentViewController=_hasContentViewController;
@property BOOL hasMessage; // @synthesize hasMessage=_hasMessage;
@property BOOL hasTitle; // @synthesize hasTitle=_hasTitle;
@property long long numberOfActions; // @synthesize numberOfActions=_numberOfActions;

- (BOOL)isEqual:(id)arg1;

@end

