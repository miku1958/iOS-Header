//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexWeb/NSObject-Protocol.h>

@protocol SWScript;

@protocol SWScriptsManager <NSObject>
- (void)addScript:(id<SWScript>)arg1;
- (void)executeScript:(id<SWScript>)arg1;
- (void)removeAllScripts;
- (void)removeScript:(id<SWScript>)arg1;
@end
