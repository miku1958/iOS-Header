//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIFocusDebuggerOutput-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusDebuggerStringOutput : NSObject <UIFocusDebuggerOutput>
{
    NSString *_outputString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)outputWithString:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithString:(id)arg1;

@end

