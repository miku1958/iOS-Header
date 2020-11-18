//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CVML/CVMLWarningRecorder-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CVMLWarningRecorder : NSObject <CVMLWarningRecorder>
{
    NSMutableDictionary *_warnings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)hasWarnings;
- (id)init;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (id)valueForWarning:(id)arg1;
- (id)warnings;

@end
