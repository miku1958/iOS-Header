//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/_NSKVOCompatibilityShim-Protocol.h>

@class NSString;

@interface _NSKVOCompatibility : NSObject <_NSKVOCompatibilityShim>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_noteProcessHasUsedKVOSwiftOverlay;
+ (void)_setRequiresSilencingExceptions:(BOOL)arg1;

@end

